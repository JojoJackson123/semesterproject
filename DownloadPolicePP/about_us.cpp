#include "about_us.h"
#include "./ui_about_us.h"

About_us::About_us(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::About_us)
{
    ui->setupUi(this);

    QPixmap pix(":/image/logo@3x.png");
 //avatars
    QPixmap pix2("/Users/diwas/Desktop/college/proposal_2sem/fixing/DownloadPolicePP/resource/avatar1.png");
    QPixmap pix3("/Users/diwas/Desktop/college/proposal_2sem/fixing/DownloadPolicePP/resource/avatar2.png");
    QPixmap pix4("/Users/diwas/Desktop/college/proposal_2sem/fixing/DownloadPolicePP/resource/avatar3.png");
    QPixmap pix5("/Users/diwas/Desktop/college/proposal_2sem/fixing/DownloadPolicePP/resource/avatar4.png");


    int w = ui->avatar->width();
    int h = ui->avatar->height();
    ui->avatar->setPixmap(pix2.scaled(w,h,Qt::KeepAspectRatio));


    int w1 = ui->avatar_2->width();
    int h1 = ui->avatar_2->height();
    ui->avatar_2->setPixmap(pix3.scaled(w1,h1,Qt::KeepAspectRatio));

    int w2 = ui->avatar_3->width();
    int h2 = ui->avatar_3->height();
    ui->avatar_3->setPixmap(pix4.scaled(w2,h2,Qt::KeepAspectRatio));

    int w3 = ui->avatar_4->width();
    int h3 = ui->avatar_4->height();
    ui->avatar_4->setPixmap(pix5.scaled(w3,h3,Qt::KeepAspectRatio));
//avatars
    ui->aboutus_pb_2->setIcon(QIcon(":/image/home@3x.png"));
    ui->logo_label->setPixmap(pix.scaled(1113,222));
   // ui->avatar->setPixmap(pix2.scaled(1113,222));

    ui->home_pb_2->setIcon(QIcon(":/image/home@3x.png"));
    ui->download_2->setIcon(QIcon(":/image/home@3x.png"));
}

About_us::~About_us()
{
    delete ui;
}
