#include <iostream>

using namespace std;

int GetSum() {
    return 1;
}

int GetSum(int a, int b) {
    return (a + b);
}

float GetSum(int a, double b) {
    return (a + b);
}

int main()
{
    cout << GetSum() << endl;
    cout << GetSum(2, 4.0) << endl;
    cout << GetSum(5, 0.7) << endl;
    return 0;
}