#include <iostream>
using namespace std;
int main(){
    
    
    //Kieu du lieu co kich thươc 4 byte anh cho bien a
    //a la mot bien cap phat tinh,b la bien con tro 
    int a;
    int *b;
    
    a = 1;
    // Con trỏ b tham chiếu tới giá trị của a
    b = &a;
    // Đặt dấu * trước một con trỏ sẽ trả về giá trị mà nó đang tham chiếu tới
    cout << "Gia tri cua a " << a << endl;
    cout << "Địa chỉ của a " << &a << endl;
    cout << "Giá trị của con trỏ b tham chiếu tới: " << *b << endl;
    
    //lấy giá trị của b
    cout << "Giá trị của b: " << b << endl;

    //địa chỉ mà b đang tham chiếu tới
    cout << "Địa chỉ mà b đang tham chiếu tới " << b << endl;

    return 0;
}
