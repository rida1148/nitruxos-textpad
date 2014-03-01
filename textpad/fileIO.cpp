#include "fileIO.h"

#include <QUrl>
#include <QTextStream>
#include <iostream>
#include <QFile>

void FileIO::setPath(const QString &fileURL) {
    QUrl LocalURL(fileURL);
    this->filePath = LocalURL.toLocalFile();
};

QString FileIO::read()
{    
    QFile file(this->filePath);
    bool readable = file.open(QIODevice::ReadOnly | QIODevice::Text);

    if (readable) {
        return QString(file.readAll());
    }

    return QString("ERROR NO DATA READ");
}

bool FileIO::write(const QString &data) {

    QFile file(this->filePath);
    bool writeable = file.open(QIODevice::Append | QIODevice::Text);

    if (writeable) {
        QTextStream stream(&file);
        stream << data;

        return true;
    }
    return false;
 
};