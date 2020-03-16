#include "iostream"
using namespace std;

class Test {
    public:
        void print(string x) {
            cout << "Printed from class: " << x << endl;
        }
};

int main() {
    Test testObject;
    testObject.print("Hi!");
}
