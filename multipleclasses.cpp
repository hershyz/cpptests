#include "iostream"
using namespace std;

class Addition {
    public:
        int sum(int x, int y) {
           return x + y; 
        }
};

class PrintClass {
    public:
        void print(int x) {
            cout << x << endl;
        }
};

int main() {
    Addition additon;
    PrintClass printClass;

    int result = additon.sum(1, 2);
    printClass.print(result);
}
