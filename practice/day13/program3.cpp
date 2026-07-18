/*
    wirte a class student with private members name(string) and age(int),
    create a default constructor that initialize name to "unknown" and age to 0.
*/

#include <iostream>
#include<string>
using namespace std;

class STUDENT
{
    private:
        string name;
        int age;
    
    public: 

    STUDENT()
    {
        name = "Unknown";
        age =  0;
    }

    string get_name()
    {
        return this->name;
    }

    int get_age()
    {
        return this->age;
    }

    void set_name(string _name)
    {
        this->name = _name;
    }

    void set_age(int _age)
    {
        this->age = _age;
    }

    void show()
    {
        cout << "student name: " << this->name << "\nstudent age: " << this->age << endl;
    }
};

void student();

int main()
{
    student();

    return 0;
}

void student()
{
    STUDENT s;

    cout << "show default student name: \n";
    s.show();
    s.set_name("munja pawar");
    s.set_age(28);

    cout << "after provide name: \n";
    s.show();

}

