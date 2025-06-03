#include <iostream>
using namespace std;

class orang {
    public:
        int umur;

        orang(int pUmur) :
        umur(pUmur) {
            cout << "Orang dibuat dengan umur " << umur << "\n" << endl;
        }
};

class pekerja : virtual public orang {
    public:
        pekerja(int pUmur) :
            orang(pUmur) { 
                cout << "Pekerja dibuat\n" << endl;
        }
};

class pelajar : virtual public orang {
    public:
        pelajar(int pUmur) :
            orang(pUmur) {
            cout << "Pelajar dibuat\n" << endl;
        }
};

class Soobin : public pekerja, public pelajar {
    public:
        Soobin(int pUmur) :
            pekerja(pUmur),
            pelajar(pUmur),
            orang(pUmur)        //hal ini dapat dilakukan jika menggunakan virtual
            {
                cout << "Soobin dibuat\n" << endl;
            }
};

int main () {
    Soobin a(22);

    return 0;
}