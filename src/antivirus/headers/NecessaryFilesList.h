#ifndef NECESSARYFILESLIST_H
#define NECESSARYFILESLIST_H

#include <iostream>
#include <string>

#include "FilesList.h"

class NecessaryFilesList : public FilesList {
  const char* necessaryFiles = "hashes.txt";

 public:
  bool checkNecessaryFiles();
};

#endif