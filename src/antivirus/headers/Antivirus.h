#ifndef ANTIVIRUS_H
#define ANTIVIRUS_H

#include <iostream>
class Antivirus {
  bool modeSet;
  bool hasNecessaryFiles;

 public:
  Antivirus();
  void reportComponentsState();
};

#endif
