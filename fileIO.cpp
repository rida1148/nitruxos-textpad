#include "fileIO.h"

#include <QUrl>
#include <QTextStream>
#include <iostream>
#include <QFile>
#include <QFileInfo>

void FileIO::setPath(const QString &fileURL) {
    QUrl LocalURL(fileURL);
    this->filePath = LocalURL.toLocalFile();
};

bool FileIO::isReadable()
{
    return QFileInfo(this->filePath).isReadable();
}

QString FileIO::read()
{    
    QFile file(this->filePath);

    return QString(file.readAll());
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
