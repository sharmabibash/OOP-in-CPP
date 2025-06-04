/*
Encapsulation is the process of wrapping up data and member functions in a single unit called class. this process is known as Encapsulation.


[data or properties + member funtion] =====> [Class] ====> called encapsulation

*** it is mostly used in data hiding
data hiding ----> private

*/

/*Example : 1 of Encapsulation*/

/*#include <iostream>
using namespace std;
class Employee
{
private:
    double salary;
    int age;

public:
    string name;
    string address;

    void setSalary(double sal)
    {
        salary = sal;
    }
    double getSalary()
    {
        return salary;
    }

    void setAge(int EmpAge)
    {

        if (EmpAge > 0)
        {
            age = EmpAge;
        }
        else{
            cout<<"Invalid data format"<<endl;
        }
    }
    int getAge(){
        return age;
    }
};

int main()
{
    Employee E1;
    E1.name = "Bibash Sharma";
    E1.address = "KTM";
    E1.setSalary(20000);
    E1.setAge(19);
    cout <<"Employee Name : "<< E1.name << endl;
    cout <<"Employee Salary : "<< E1.getSalary() << endl;
    cout<<"Employee Age : "<<E1.getAge()<<endl;
}*/

/*Example 2 */
/*#include <iostream>
using namespace std;

class Person {
private:
    int age;  // private data member

public:
    // Setter method
    void setAge(int a) {
        age = a;
    }

    // Getter method
    int getAge() {
        return age;
    }
};

int main() {
    Person p;
    p.setAge(25);               // setting value using setter
    cout << p.getAge() << endl; // accessing value using getter

    return 0;
}*/
