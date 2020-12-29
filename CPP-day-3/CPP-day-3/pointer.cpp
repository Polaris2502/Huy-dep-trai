#include <iostream>

using namespace std;
int main() {

    // a là một biến được cấp phát tĩnh
    // Kiểu int có kích thước 4 byte, 1 byte = 8 bit = 01010101
    // Chương trình dành 4 byte trong bộ nhớ để lưu trữ biến a
    // mỗi vị trí bộ nhớ đều có một địa chỉ
    int a;
    a = 1;

    cout << "Gia tri cua a: " << a << endl;
    
    // Toán tử và trước tên biến sẽ trả về địa chỉ của biến đó
    cout << "Dia chi cua a: " << &a << endl;

    // b là một biến con trỏ kiểu int
    // Con trỏ luôn luôn lưu địa
    int *b;

    // Con trỏ b tham chiếu tới giá trị của a
    // *a = b;
    b = &a;
    
    // Đặt dấu sao trước một con trỏ sẽ trả về giá trị mà nó đang tham chiếu tới
    cout << "Gia tri cua con tro b tham chieu toi: " << *b << endl;
    cout << "Gia tri cua b: " << b << endl;
    cout << "Dia chi ma b dang tham chieu toi: " << b << endl;
    cout << "Dia chi cua b: " << &b << endl;

    return 0;
}