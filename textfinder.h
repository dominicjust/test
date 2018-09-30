#ifndef TEXTFINDER_H
#define TEXTFINDER_H

#include <QMainWindow>

namespace Ui {
class TextFinder;
}

class TextFinder : public QMainWindow
{
    Q_OBJECT

public:
    explicit TextFinder(QWidget *parent = 0);
    ~TextFinder();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButtonLoadFromFile_clicked();

    void on_actiontest_triggered();

private:
    Ui::TextFinder *ui;
    void loadTextFile(const QString& = ":/input.txt");
};

#endif // TEXTFINDER_H
