#include <iostream>
#include <bits/stdc++.h>
#include "IO.h"
using namespace std;

IO::IO() {
    //cout << "constructor called" << endl;
}

void IO::createFile(string path) {
    fstream file;
    file.open(path, ios::out);
}