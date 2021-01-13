#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLabel myLabel;
    myLabel.setText("Hello World!");
    myLabel.show();
    return app.exec();
}
