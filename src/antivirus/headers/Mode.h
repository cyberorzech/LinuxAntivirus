#ifndef MODE_H
#define MODE_H

#include <string.h>

#include <iostream>
#include <string>

class Mode {
  std::string mode;
  int checkMode(const char *);

 public:
  Mode();
  bool setMode(std::string);
  std::string getMode();
};

#endif