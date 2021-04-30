#ifndef SCAN_H
#define SCAN_H

#include <iostream>

class Scan {
 protected:
  bool state;
  std::string fileContent;
  std::string contentsHash;

 public:
  void setState(bool);
  bool getState();
  virtual void run() = 0;
};

#endif