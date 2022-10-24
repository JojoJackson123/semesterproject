#ifndef ABOUT_US_H
#define ABOUT_US_H

#include <QMainWindow>

namespace Ui {
class About_us;
}

class About_us : public QMainWindow
{
    Q_OBJECT

public:
    explicit About_us(QWidget *parent = nullptr);
    ~About_us();

private:
    Ui::About_us *ui;
};

#endif // ABOUT_US_H
