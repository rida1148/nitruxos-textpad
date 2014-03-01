#pragma once
#include <QObject>


class FileIO : public QObject
{
    Q_OBJECT

    QString filePath;
public:

    Q_INVOKABLE void setPath(const QString &fileURL);
    Q_INVOKABLE QString read();
    Q_INVOKABLE bool write(const QString &data);
};