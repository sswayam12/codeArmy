#include<bits/stdc++.h>
using namespace std;

class Human{
    protected:
    string name;
    int age;

    public:
    void work(){
        cout<<"I am currently working"<<" ";
    }
};

class Student:public Human{
    int roll_no,fees;

    public:
    Student(string name,int age,int roll_no,int fees){
        this->name = name;
        this->age = age;
        this->roll_no = roll_no;
        this->fees = fees;
    }
void display(){
    cout<<name<<" "<<age<<" "<<roll_no;
}
   
};

int main(){

     Student S1("Swayam",21,4011307,200000);
    S1.work();


}