#include <iostream>
using namespace std;

class seseorang {
public:
    //virtual void pesan() = 0;
    virtual void pesan() {
        cout << "Pesan dari Seseorang" << endl;
    };
};
class Yeonjun :public seseorang {
    public:
        void pesan() {
            cout << "Pesan dari Yeonjun" << endl;
        }
};
class Yeji :public seseorang {
    public:
        void pesan() {
            cout << "Pesan dari Yeji" << endl;
        }
};

int main() {
    seseorang *obyek;
    Yeonjun a;
    Yeji b;

    obyek = &a;
    obyek->pesan();
    obyek = &b;
    obyek->pesan();

    //a.seseorang::pesan();
    //b.seseorang::pesan();

    return 0;
}