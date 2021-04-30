#include "../headers/NecessaryFilesList.h"

bool NecessaryFilesList::checkNecessaryFiles() {
  std::string allFiles = files;
  std::string necFiles = necessaryFiles;
  std::size_t found = allFiles.find(necFiles);
  if (found != std::string::npos) {
    return 0;
  } else {
    throw "Necessary files hasn't been found.";
    exit(1);
  }
}