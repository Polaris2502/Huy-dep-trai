#include <iostream>
#include <string>

using namespace std;

class SinhVien {
// Khai bao ham Display la friend cua class SinhVien
// Ham Display co the truy cap duoc cac thanh vien kieu Private va Protected
friend void Display(SinhVien sv);

private:
    string lop;

protected:
    int dtb;

public:
    int a = 3;
    SinhVien();
    SinhVien(string lop_init, int dtb_init);
    ~SinhVien();
};

SinhVien::SinhVien() {
    lop = "";
    dtb = 0;
}

SinhVien::SinhVien(string lop_init, int dtb_init) {
    lop = lop_init;
    dtb = dtb_init;
}

SinhVien::~SinhVien() {}

void Display(SinhVien sv) {
    cout << "Lop: " << sv.lop << endl;
    cout << "dtb: " << sv.dtb << endl;
    cout << "a = " << sv.a << endl;
}

int main() {
    string lop = "10DT";
    int dtb = 7;
    SinhVien sv1(lop, dtb);
    Display(sv1);
    return 0;
}