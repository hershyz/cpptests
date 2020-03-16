#include "iostream"
#include "bits/stdc++.h"
using namespace std;

fstream file;

class IO {
    public:
        void createFile(string directory) {
            file.open(directory, ios::out);
        }
};

int main() {

    IO io;
    string arg;
    cout << "> ";
    cin >> arg;

    io.createFile(arg);

    if (!file) {
        cout << "File not created: " << arg << endl;
    }

    else {
        cout << "File created: " << arg << endl;
    }
}
