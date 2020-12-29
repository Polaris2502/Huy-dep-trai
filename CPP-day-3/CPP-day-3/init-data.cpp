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
    ~SinhVien();
};

SinhVien::SinhVien() {
        name = "";
        age = 0;
}

SinhVien::~SinhVien(){
    
}

SinhVien::SinhVien(string name, int age){
    this->name = name;
    this->age = age;
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

    // Cách 1: Khởi tạo đối tượng không có tham số
    // SinhVien sv;
    // sv.SetName(name);
    // sv.SetAge(age);
    
    // Cách 2: Khởi tạo đối tượng với construct có tham số
 //   SinhVien sv(name, age);

    //Cap phat dong mot doi tuong SinhVien
    SinhVien *sv = new SinhVien;
    sv->SetName(name);
    sv->SetAge(age);
   // ~SinhVien();
    cout << "Dia chi doi tuong sinh vien: " << sv << endl;
    sv->Display();
    // delete sv;
    return 0;
}