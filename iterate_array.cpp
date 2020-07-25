#include <iostream>
using namespace std;

int main() {

    int foo [5];
    foo[0] = 691;
    foo[1] = 422;
    foo[2] = 11;
    foo[3] = 15;
    foo[4] = 162;

    int i;
    for (i = 0; i < sizeof(foo)/sizeof(foo[0]); i++) {
        cout << foo[i] << endl;
    }
}
