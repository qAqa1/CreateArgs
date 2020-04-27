#include <QCoreApplication>
#include <QString>
#include <QStringList>
#include <QDebug>

QStringList ToArgs(QString args)
{
    QStringList argsList = args.split(" ");

    for (QString arg : argsList)
    {
        arg = "\"" + arg + "\"";
    }

    return argsList;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << ToArgs("ada ada -a -d");

    return a.exec();
}
