#ifndef HOME_H
#define HOME_H

#include <QMainWindow>
#include<about_us.h>


namespace Ui {
class Home;
}

class Home : public QMainWindow
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = nullptr);
    ~Home();

private slots:
        void on_browse_pb_clicked();

        void on_aboutus_pb_clicked();

private:
    Ui::Home *ui;
    About_us *about_us;
};

#endif // HOME_H
