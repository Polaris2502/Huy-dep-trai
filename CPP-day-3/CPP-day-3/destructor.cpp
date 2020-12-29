// Cac cach khoi tao du lieu cho doi tuong

// TH1: 
// TH1.1:
// - Đối tượng được cấp phát tĩnh
// - Một biến của đối tượng được cấp phát tĩnh

// Result: 
// - Địa chỉ của đối tượng vẫn không thay đổi như lần chạy trước
// - Địa chỉ một biến của đối tượng vẫn như lần chạy trước đó

// TH1.2:
// - Đối tượng được cấp phát tĩnh
// - Một biến của đối tượng được cấp phát động, nhưng không thu hồi.

// Result: 
// - Địa chỉ của đối tượng vẫn không thay đổi như lần chạy trước
// - Địa chỉ một biến của đối tượng vẫn như lần chạy trước đó

// TH1.3:
// - Đối tượng được cấp phát tĩnh
// - Một biến của đối tượng được cấp phát động, và thu hồi

// Result: 
// - Địa chỉ của đối tượng vẫn không thay đổi như lần chạy trước
// - Địa chỉ một biến của đối tượng vẫn như lần chạy trước đó

// TH2:
// TH2.1:
// - Đối tượng được cấp phát động, nhưng không thu hồi đối tượng
// - Một biến của đối tượng được cấp phát tĩnh

// Result:
// - Địa chỉ của đối tượng vẫn không thay đổi như lần chạy trước
// - Địa chỉ một biến của đối tượng thì thay đổi

// TH2.2:
// - Đối tượng được cấp phát động, nhưng không thu hồi đối tượng
// - Một biến của đối tượng được cấp phát động

// Result:
// - Địa chỉ của đối tượng vẫn không thay đổi như lần chạy trước
// - Địa chỉ một biến của đối tượng thì thay đổi

// TH2.3:
// - Đối tượng được cấp phát động, và thu hồi đối tượng
// - Một biến của đối tượng được cấp phát tĩnh

// Result:
// - Địa chỉ của đối tượng vẫn không thay đổi như lần chạy trước
// - Địa chỉ một biến của đối tượng thì thay đổi

// TH2.4:
// - Đối tượng được cấp phát động, và thu hồi đối tượng
// - Một biến của đối tượng được cấp phát động, và thu hồi.

// Result:
// - Địa chỉ của đối tượng vẫn không thay đổi như lần chạy trước
// - Địa chỉ một biến của đối tượng thì thay đổi

//------------------------------//
// SUMARY
// 1. Đối tượng được cấp phát tĩnh hoặc động thì địa chỉ của đối tượng vẫn không thay đổi như lần chạy trước.
// 2. Nếu đối tượng được cấp phát tĩnh thì địa chỉ của biến đối tượng được cấp phát động và tĩnh vẫn không thay đổi như lần chạy trước.
// 3. Nếu đối tượng được cấp phát động thì địa chỉ của biến đối tượng được cấp phát tĩnh và động sẽ thay đổi sau mỗi lần chạy.
//------------------------------//

#include <iostream>
#include <string>

using namespace std;

class SinhVien {
    string name;
    // int age;

    // Cấp phát động cho biến age bằng toán tử new
    // toán tử new trả về kiểu con trỏ
    // cấp phát động không biết trước biến cần bao nhiêu bộ nhớ
    // cho nên cấp phát động trả về địa chỉ mà nó sẽ trỏ đến biến lưu dữ liệu
    int *age = new int;

public:
    SinhVien();
    SinhVien(string name, int age);
    void SetName(string name);
    void SetAge(int age);
    void Display();
    void GetAddressAge();
    ~SinhVien();
};

SinhVien::SinhVien() {
        name = "";
        *age = 0;
}

SinhVien::~SinhVien(){
    delete age;
    delete this;
}

SinhVien::SinhVien(string name, int age){
    this->name = name;
    
    // Đối tượng hiện tại là con trỏ this
    // age của class là một con trỏ
    // this->age : con trỏ this trỏ tới con trỏ age, và trả về là một con trỏ.
    // Dùng * để gán giá trị cho con trỏ (this->age)
    *(this->age) = age;
}

void SinhVien::SetName(string name) {
    this->name = name;
}

void SinhVien::SetAge(int age) {
    *(this->age) = age;
}

void SinhVien::Display(){
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

void SinhVien::GetAddressAge() {
    cout << "Dia chi cua age: " << &age << endl;
}

int main()
{
    string name = "Nguyen Van A";
    int age = 10;

    SinhVien sv[10]; // sizeof(sv) * 10
    // SinhVien sv(name, age);

    //Cap phat dong mot doi tuong SinhVien
    SinhVien *s = new SinhVien; // runtime
    sv->SetName(name);
    sv->SetAge(age);
   // ~SinhVien();
    cout << "Dia chi doi tuong sv: " << &sv << endl;
    // sv.Display();
    sv->GetAddressAge();
    // delete sv; // Thu hồi bộ nhớ đã cấp phát cho đối tượng sv
    return 0;
}
