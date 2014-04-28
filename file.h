#pragma once

#include <QObject>

class File : public QObject
{
    Q_OBJECT

public slots:
    bool isReadable(const QString &path);
    QString read(const QString &path);
    bool isWritable(const QString &path);
    bool write(const QString &path, const QString &data);
};
