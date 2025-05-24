/*
* Classes and Objects
a) Obects are entities in real world.
b) Classes is Like a Blueprint of these entities or objects.
*/

/*
Entities ===> eg : phone, laptop etc

class :
Example 1:
[Company]==>[Blueprint or Template for any products ]==> manufactured products ==> [P1],[P2],[P3].... etc

Example 2:
[System]: system for employee
In employee : emplyee has its Name,DOB,Department ===> Its work as a Object
in Object called Employee have a function for change the department then this function called method.

Note 1 : Method is a function which is always define and written under class
Note 2 : Blueprint means theme of products or in simply design of products or model you can say
*/


/*
{String p1Name;
String p1Description;

String p2Name;
String p2Description;} ====> Bad Programming concept

To develop the good programming concept we use concept of OOP which is make reusable of class or object many times thats why OOP is most important.

for good programming :
Make a Class ===> Blueprint or template or model
Class Products ===> obj_P1,obj_P2..... and so on

*/


/*
Syntax of Classes and Objects.

Entity => Employee
Class Employee {

};

note : put the semicolon at the end of class.

*/

/*Example 1*/
// #include<iostream>
// #include<string>
// using namespace std;

// class Employee {
// string name;
// string departmet;
// double salary; 
// }; 
// int main(){
//     Employee E1;
//     E1.name="Bibash";
//     E1.departmet="Computer science";
//     E1.salary= 2000;

//     cout<<E1.name<<endl;
//     return 0;
// }

/* In Example 1 There is error : Class Emplyee is not accessible due to its class is by default private*/

/* We must have study about Access Modifiers
1. Private : data and methods accessible inside class
Note : By Default 
2. Public : data and methods accessible to everyone
3. Protected : data and methods accessible inside class and to its derived class 
*/

