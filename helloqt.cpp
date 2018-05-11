#include <QApplication>
#include<QLabel>

int main(int agrc,char *argv[])
{
    QApplication app(argc, argv);
    QLabel *label = new QLabel("Hello QT");
    label->show();
    return app.exec();
}
