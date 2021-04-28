// C++ libs
#include <iostream>
#include <string>
// System libs

// Libs
#include "src/antivirus/headers/Antivirus.h"
#include "src/antivirus/headers/Mode.h"

using namespace std;

int main() {
  Mode testowyObj;
  string input;
  cin >> input;
  testowyObj.setMode(input);

  // Antivirus antivirus(10);
  // antivirus.xSetter(19);
  // cout << antivirus.xGetter() << endl;
  return 0;
}