#include<iostream> 
using namespace std; 
   
class HinhTron {    
    private:  
        double banKinh; 
        
    public:     
        void TinhDienTich(double bk) {
            banKinh = bk;
            double dienTich = 3.14*banKinh*banKinh; 
            cout << "Ban kinh la: " << banKinh << endl;
            cout << "Dien tich la: " << dienTich << endl;
        } 
}; 
   
int main() {    
 
    HinhTron ht; 
    double banKinh = 2;
    ht.TinhDienTich(banKinh);
     
    return 0; 
}