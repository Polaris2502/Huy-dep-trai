// Cac cach khoi tao du lieu cho doi tuong

#include <iostream>
#include <string>

using namespace std;

class SinhVien {
// Default kieu private
    string name;
    int age;

public:
    SinhVien(); // co the
    SinhVien(string name, int age);
    void SetName(string name);
    void SetAge(int age);
    void Display();
};

SinhVien::SinhVien() {
        name = "";
        age = 0;
}

SinhVien::SinhVien(string name, int age){
    name = name;
    age = age;
}

void SinhVien::SetName(string name) {
    // Trường hợp tên biến truyền vào trùng với tên biến class cần gán giá trị thì sử dụng con trỏ this:
    // this->name là name của đối tượng hiện tại
    // còn name bên phải là name của biến truyền vào
    this->name = name;
}

void SinhVien::SetAge(int age) {
    this->age = age;
}

void SinhVien::Display(){
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

int main()
{
    string name = "Nguyen Van A";
    int age = 10;

    SinhVien sv;
    // sv.SetName(name);
    // sv.SetAge(age);

    sv.Display();
    return 0;
}