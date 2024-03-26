#include<bits/stdc++.h>
using namespace std;


class Customer{
    string name;
    int acc_num,balance;
    static int total_customer;
    static int total_balance;

    public:

    Customer(string name,int acc_num,int balance){
        this->name = name;
        this->acc_num = acc_num;
        this->balance = balance;
        total_customer++; 
        total_balance+=balance;
    }
    static void acceStatic(){
        cout<<total_customer<<endl;
    }
    void deposit(int amount){
        if(amount >  0){
            balance+=amount;
            total_balance+=amount;
        }
    }
    void total_deposit(int amount){
        if(amount >  0){
            balance += amount;
            total_balance+=amount;
        }
    }
    void withdraw(int amount){
        if(amount == balance && amount > 0){
            balance -= amount;
        }
    }
    void Display(){
        cout<<name<<" "<<acc_num<<" "<<balance<<" "<<total_customer<<endl;
    }
};

int Customer::total_customer = 0;

int main(){
    Customer A1("Swayam",123,4566);
    A1.Display();
    Customer A2("Vikram",2345,45667);
    A2.Display();
    Customer::acceStatic();
    A1.deposit(800);
}
