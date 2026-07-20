/*
modify the student class to include a parameterized constructor that accepts
name and age as parameters.

*/

#include<iostream>
#include<string>
using namespace std;

class Student
{
    private:
        string name;
        int age;
    
    public:

    Student(string _name, int _age) : name(_name), age(_age)
    { }

    string get_name()
    {
        return name;
    }

    int get_age()
    {
        return age;
    }

    void set_name(string new_name)
    {
        name = new_name;
    }

    void set_age(int new_age)
    {
        age = new_age;
    }

    void show()
    {
        cout << "student name: " << name << "\nstudent age: " << age << endl;
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
    Student s("munja pawar", 28);

    cout << "show default name: ";
    s.show();
    s.set_name("munja pawar");
    s.set_age(28);
    s.show();
    
}