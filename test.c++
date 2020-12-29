#include <iostream>  
   
using namespace std;  
   
class TestShallowCopy  {  
    int a;  
    int b;  
    int *p;  
    public:  
        //TestShallowCopy() {  
          //   p = new int;  
         //}  
        void TaoDuLieu(int x, int y, int z) {  
            a = x;  
            b = y;  
            *p = z;  
        }  
        void HienThi()  {  
            cout << "   Gia tri cua a la: " << a << std::endl;  
            cout << "   Gia tri cua b la: " << b << std::endl;  
            cout << "   Gia tri cua *p la: " << *p << std::endl;  
        }  
};  
int main() {  
  TestShallowCopy t1;  
  t1.TaoDuLieu(2, 6, 8);  
  TestShallowCopy t2 = t1;
  cout << "Du lieu cua doi tuong t1: " << endl;
  t1.HienThi();
  cout << "Du lieu cua doi tuong t2: " << endl;
  t2.HienThi();  
  return 0;  
}