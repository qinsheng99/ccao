#include <iostream>
#include "suppert.h"

using namespace std;

extern int count;

void write_extern() {
    cout << "Count is " << count << endl;
}

bool write() {
    cout << "Count is 10" << endl;

    return false;
}


Suppert::Info Suppert::info(int i) {
    return Info{.i = i};
}
