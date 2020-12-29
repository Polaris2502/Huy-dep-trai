#include <iostream>
#include <string>

using namespace std;

class Nguoi
{
public:
    string name;
    int age;
    int *a = new int;
    int b;

public:
    // Construct ko tham so
    Nguoi() {
        name = "Nguyen Van A";
        age = 23;
        a = &age;
        b = 300;
    }

    // Construct co 2 tham so
    Nguoi(string name_input, int age_input) {
        name = name_input;
        age = age_input;
    }

    void SetName(string name_input)
    {
        name = name_input;
    }

    void SetAge(int age_input){
        age = age_input;
    }

    void GetName() {
        cout << "Name: " << name << endl;
    }

    void GetAge() {
        cout << "Age: " << age << endl;
    }

    void Input() {
        cout << "Input name: ";
        getline(cin, name);
        cout << "Input age: ";
        cin >> age;

    }

    void Display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    void GetAddr() {
        cout << a << endl;
        cout << &b << endl;
    }

    ~Nguoi() {
        // delete a;
        // cout << "\nDestructor";
    }
};

class SinhVien : private Nguoi
{

};

// initialized
int my_global = 2;

// unitialized
int my_blobal2;

int main()
{
    int a = 100;
    // Nguoi nguoi1("Nguyen Van B", 24);
    // nguoi1.p = &a;
    // nguoi1.SetName("Nguyen Van A");
    // nguoi1.SetAge(23);

    Nguoi nguoi1;
    Nguoi *nguoi2 = new Nguoi;

    // nguoi1.Display();
    
    // cout << "Dia chi cua nguoi1: " << nguoi1 << endl;
    // nguoi2->a = &a;
    // nguoi1->b = 200;

    nguoi1.GetAddr();
    nguoi2->GetAddr();

    // delete nguoi2;

    return 0;
}