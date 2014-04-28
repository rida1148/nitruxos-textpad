#pragma once
#include <QObject>


class FileIO : public QObject
{
    Q_OBJECT

    QString filePath;
public slots:

    void setPath(const QString &fileURL);
    bool isReadable();
    QString read();
    bool write(const QString &data);
};
