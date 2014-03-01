#pragma once
#include <QQmlExtensionPlugin>
#include "fileIO.h"

class FileIOPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "io.github.rschroll.FileReader")

public:
    void registerTypes(const char *uri);
};