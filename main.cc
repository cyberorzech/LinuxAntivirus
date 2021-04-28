// C++ libs
#include <stdlib.h>

#include <iostream>
#include <string>
// System libs
#include <signal.h>
// Libs
#include "src/antivirus/headers/Antivirus.h"
#include "src/antivirus/headers/Mode.h"

using namespace std;

void handler(int signum);

int main() {
  sighandler_t old;
  old = signal(SIGINT, &handler);
  if (old == SIG_ERR) {
    cout << "Could not handle this signal." << endl;
    return 1;
  }
  Antivirus antivirus;
  return 0;
}

void handler(int signum) {
  cout << "Sent shutdown signal (" << signum << ")" << endl;
  exit(0);
}