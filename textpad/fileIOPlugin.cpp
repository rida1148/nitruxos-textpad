#pragma once
#include "fileIOPlugin.h"
#include "fileIO.h"
#include <qqml.h>

void FileIOPlugin::registerTypes(const char *uri)
{
    qmlRegisterType<FileIO>(uri, 1, 0, "FileIO");
}