#include "file.h"

#include <QUrl>
#include <QTextStream>
#include <iostream>
#include <QFile>
#include <QFileInfo>

bool File::isReadable(const QString &path)
{
    return QFileInfo(path).isReadable();
}

QString File::read(const QString &path)
{
    QFile file(path);
    return file.readAll();
}

bool File::isWritable(const QString &path)
{
    return QFileInfo(path).isWritable();
}

bool File::write(const QString &path, const QString &data) {

    QFile file(path);

    QTextStream stream(&file);
    stream << data;

    return true;
}
