#include <iostream>
using namespace std;

class baseClass {
    public:
        virtual void perkenalan() {
            cout << "Hallo saya Function dari Base Class";
        }
};

class derivedClass : public baseClass {
    public:
        void perkenalan() {
            cout << "Hallo saya Function dari Derived Class";
        }
};

int main() {
    derivedClass a;
    a.perkenalan();

    return 0;
}