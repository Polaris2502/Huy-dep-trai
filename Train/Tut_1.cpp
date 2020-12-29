#include <iostream>

#include "Header1.h"

void DisplayName(string);

int main() {
    DisplayName("World");
    int sum = GetSum(3, 5);
    cout << "Tong la: " << sum << endl;
    return 0;
}

// Void: Sau khi chay xong function thi khong tra ve gia tri nao
void DisplayName(string name) {
    cout << "Hello " << name << endl;
}