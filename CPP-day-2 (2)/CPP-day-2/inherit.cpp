#include <iostream>
#include <string>

using namespace std;

class Nguoi
{
private:
    string name;
    int age;

public:
    Nguoi();
    Nguoi(string name_init, int age_init);
    ~Nguoi();

    void Input();
    void Display();
};

Nguoi::Nguoi()
{
    name = "";
    age = 0;
}

Nguoi::Nguoi(string name_init, int age_init)
{
    this->name = name_init;
    age = age_init;
}

Nguoi::~Nguoi() {}

void Nguoi::Input()
{
    cout << "Name: ";
    getline(cin, name);
    cout << "Age: ";
    cin >> age;
    cin.get();
}

void Nguoi::Display()
{
    cout << "Name is " << name << endl;
    cout << "Age is " << age << endl;
}

class SinhVien : private Nguoi
{
private:
    string lop;
    int dtb;

public:
    SinhVien();
    SinhVien(string lop_init, int dtb_init);
    ~SinhVien();

    void Input();
    void Display();

    void show(int a, int c, char b, char);
};

// 2. Dung cho implement code cac methods
SinhVien::SinhVien()
{
    lop = "";
    dtb = 0;
}

SinhVien::SinhVien(string lop_init, int dtb_init)
{
    lop = lop_init;
    dtb = dtb_init;
}

SinhVien::~SinhVien() {}

void SinhVien::Input()
{
    Nguoi::Input();
    cout << "Lop: ";
    getline(cin, lop);
    cout << "DTB: ";
    cin >> dtb;
    cin.get();
}

void SinhVien::Display()
{
    Nguoi::Display();
    cout << "Lop is: " << lop << endl;
    cout << "DTB is: " << dtb << endl;   
}

void SinhVien::show(int a, int c = 5, char b = 'b', char d = 'd') {
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
}
//hello tui nè
int main()
{
    string lop = "Lop 2";
    int diem = 10;

    SinhVien sv1(lop, diem);
    // sv1.Input();

    // cout << "-----------------" << endl;
    // sv1.Display();
    sv1.show(1, 33);

    return 0;
}
