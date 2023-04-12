#include "iostream"
#include "cycle.h"

using namespace std;

void _while()
{
    int a = 10;
    int b = 0;

    while (a < 15) {
        b++;
        a++;
    }

    cout << b << endl;
}

void _do()
{
    int a = 10;
    do {
        cout << 1 << endl;
        a++;
    } while (a > 20);
}