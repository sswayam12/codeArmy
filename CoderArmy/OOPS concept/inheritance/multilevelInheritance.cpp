#include<bits/stdc++.h>
using namespace std;

 class Person{
    protected:
    string name;

    public:
    void introduce(){
        cout<<"Hello my name is "<<name<<endl;
    }

};
class Employee:public Person{

    protected:
    int salary;

    public:
    void mon_salary(){
        cout<<"My salary is "<<salary<<" ";
    }
};

class Manager:public Employee{

    public:
    string department;

    public:
    Manager(string name,int salary,string department){
        this->name = name;
        this->salary = salary;
        this->department = department;
    }
void  work(){
    cout<<" I am leading the department "<<department<<" ";
}
};

int main(){

    Manager A1("Swayam",200,"finance");
    A1.work();
    A1.mon_salary();
    A1.introduce();


}