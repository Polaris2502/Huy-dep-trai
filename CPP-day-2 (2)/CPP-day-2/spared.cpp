#include <iostream>
#include <fstream>
#include <string>

// using namespace std;

class SinhVien {
private:
    // 1. Dung cho cac namespace
    std::string name;
    int age;

public:
    SinhVien();

    // Constructor
    // Input params:
    // name_init: string
    // age_init: int
    SinhVien(std::string name_init, int age_init);
    
    void SetName(std::string name_init);

    ~SinhVien();
};

// 2. Dung cho implement code cac methods
SinhVien::SinhVien() {
    name = "";
    age = 0;
}

SinhVien::SinhVien(std::string name_init, int age_init) {
    name = name_init;
    age = age_init;
}

SinhVien::~SinhVien() {}
    
void SinhVien::SetName(std::string name_init) {
    name = name_init;
}

int main() {
    SinhVien sv1("Nguyen Van A", 20);
    std::ifstream file;

    // 3. Dung cho che truy cap file
    file.open("filename.txt", std::ios::app | std::ios::ate);
    return 0;
}