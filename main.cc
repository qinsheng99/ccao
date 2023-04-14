#include "cycle/cycle.h"
#include "suppert.h"
#include "iostream"
#include "stdio.h"

using namespace std;

int count;

extern void write_extern();

int main() {
//    bool f = write();
//
//    if (f) {
//        cout << "true" << endl;
//    } else {
//        cout << "false" << endl;
//    }

    auto *s = new Suppert;


    Suppert::Info in = s->info(123);

    in.s = '1';


    cout << in.s << endl;
    cout << in.i << endl;

    delete s;
    return 0;
}
