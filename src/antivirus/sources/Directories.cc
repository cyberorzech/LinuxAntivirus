#include "../headers/Directories.h"

using namespace std;

bool Directories::createDir(const char* dirName) {
  if (mkdir(dirName, 0777) == -1) throw "Error while creating dir.";
  // cerr << "Error: " << strerror(errno) << endl;
  else
    return 0;
}