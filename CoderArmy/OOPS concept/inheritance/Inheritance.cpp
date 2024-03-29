#include<bits/stdc++.h>
using namespace std;

class Human{

public:
    string name;
    int age;
    int weight;
};
  class Student:protected Human{

    int roll_no,fees;

    public:
     void fun(string n,int a,int w){
           name = n;
           age = a;
           weight = w;
    }
    void display(){
      cout<<name<<" "<<age<<" "<<weight<<" ";
    }

  };

int main(){

    Student A;
    A.fun("Swayam",45,45);
    A.display();

}