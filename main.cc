#include <iostream>

#include "src/antivirus/headers/Antivirus.h"

using namespace std;

int main() {
  Antivirus antivirus(10);
  antivirus.xSetter(19);
  cout << antivirus.xGetter() << endl;
  return 0;
}