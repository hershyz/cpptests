#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char* argv[]) {
    
    cout << "arguments: " + to_string(argc - 1) << endl;

    int i = 1;
    while (i <= argc) {
        cout << "Arg " + to_string(i) + ": " + argv[i] << endl;
        i++;
    }
}
