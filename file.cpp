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
    QFile file(QUrl(path).toLocalFile());
    file.open(QFile::ReadOnly);
    return file.readAll();
}

bool File::isWritable(const QString &path)
{
    return QFileInfo(path).isWritable();
}

bool File::write(const QString &path, const QString &data) {

    QFile file(QUrl(path).toLocalFile());
    file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate);

    QTextStream stream(&file);
    stream << data;

    return true;
}
