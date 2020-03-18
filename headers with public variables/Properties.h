#ifndef PROPERTIES_H
#define PROPERTIES_H
#include <iostream>
using namespace std;

class Properties {
    public:
        Properties();
        string version = "v0.1";
        string currentDir;
};

#endif

/*
    IMPORTANT: line #9.
    The value of a static variable must be included in a header file.
*/
