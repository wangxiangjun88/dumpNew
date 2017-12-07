#include "dump.h"
#include <iostream>
using namespace std;

int main() {
    _try
    {
        int *p = nullptr;
        *p = 4;
        return 0;
    }
    __except (DumpExceptionFilter(GetExceptionInformation())) { return 0; }
   
}