#include <iostream>
using namespace std;

int main() {

    int twodim [3][3] = {
        {1, 0, 1},
        {1, 1, 0},
        {0, 0, 1}
    };

    int i;
    for (i = 0; i < sizeof(twodim)/sizeof(twodim[0]); i++) {
        int j;
        for (j = 0; j < sizeof(twodim[i])/sizeof(twodim[i][0]); j++) {
            cout << twodim[i][j] << " ";
        }
        cout << "" << endl;
    }
}
