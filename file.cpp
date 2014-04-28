#include "file.h"

#include <QUrl>
#include <QTextStream>
#include <iostream>
#include <QFile>
#include <QFileInfo>

void File::setPath(const QString &fileURL) {
    QUrl LocalURL(fileURL);
    this->filePath = LocalURL.toLocalFile();
};

bool File::isReadable()
{
    return QFileInfo(this->filePath).isReadable();
}

QString File::read(const QString &path)
{    
    QFile file(path);

    return file.readAll();
}

bool File::isWritable()
{
    return QFileInfo(this->filePath).isWritable();
}

bool File::write(const QString &data) {

    QFile file(this->filePath);
    bool writeable = file.open(QIODevice::Append | QIODevice::Text);

    if (writeable) {
        QTextStream stream(&file);
        stream << data;

        return true;
    }
    return false;
 
};
