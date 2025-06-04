/*Constructor is a special method invoked automaticattly at time of object creation. Used for initialisation.
--> same name as class
--> constructor doesnot have a return type
--> only called once (automatically), at object creation 
--> Memory allocation happens when constructor is called. 
*/

/*Example : 1*/
#include<iostream>
using namespace std;

class Teacher {
    public:
    string name;
    string address;
};

int main(){
    Teacher T1;   /* ---> Here automatically calling constructor by default by compiler*/
    T1.name="Bibash";
    cout<<T1.name<<endl;

    return 0;
}