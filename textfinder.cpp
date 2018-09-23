#include "textfinder.h"
#include "ui_textfinder.h"
#include <QFile>
#include <QTextStream>

TextFinder::TextFinder(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TextFinder)
{
    ui->setupUi(this);
}

TextFinder::~TextFinder()
{
    delete ui;
}

void TextFinder::on_pushButton_clicked()
{
    std::map<char, int> results;
    for(int i=0; i<26;i++){
        results[static_cast<char>(i+'a')] = 0;
    }
    for(int i=0; i<10;i++){
        results[static_cast<char>(i+'0')] = 0;
    }

    QString string = ui->textEdit->toPlainText().toLower();
    for (const auto character : string.toAscii()) {
        results[static_cast<const char>(character)]++;
    }

    QString output;
    for (const auto element : results) {
        QString line;
        line.sprintf("%c -> %i\n", element.first, element.second);
        output.append(line);
    }
    ui->label_2->setText(output);
}
void TextFinder::loadTextFile()
{
    QFile inputFile(":/input.txt");
    inputFile.open(QIODevice::ReadOnly);

    QTextStream in(&inputFile);
    QString line = in.readAll();
    inputFile.close();

    ui->textEdit->setPlainText(line);
    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);
}

void TextFinder::on_pushButton_2_clicked()
{
    loadTextFile();
}
