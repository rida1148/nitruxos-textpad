#pragma once
#include <QObject>


class File : public QObject
{
    Q_OBJECT

    QString filePath;
public slots:

    void setPath(const QString &fileURL);
    bool isReadable();
    QString read(const QString &path);
    bool isWritable();
    bool write(const QString &data);
};
