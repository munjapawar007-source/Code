// See https://aka.ms/new-console-template for more information
using System;

// Class definition
public class Employee
{
    // Properties (C++ च्या private variable + getter/setter सारखं, पण सोपं)
    public string Name { get; set; }
    public int Age { get; set; }
    public double Salary { get; set; }

    // Constructor
    public Employee(string name, int age, double salary)
    {
        Name = name;
        Age = age;
        Salary = salary;
    }

    // Method
    public void ShowDetails()
    {
        Console.WriteLine($"Employee: {Name}, Age: {Age}, Salary: {Salary}");
    }

    public void GiveRaise(double amount)
    {
        Salary += amount;
        Console.WriteLine($"{Name} got a raise! New salary: {Salary}");
    }
}

// Main program
class Program
{
    static void Main()
    {
        // Object creation
        Employee emp1 = new Employee("Manoj", 25, 50000);
        emp1.ShowDetails();
        emp1.GiveRaise(5000);
    }
}