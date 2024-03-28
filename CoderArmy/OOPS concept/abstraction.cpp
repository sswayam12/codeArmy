#include<bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int balance;

    public:
    Customer(string a, int b){
        name = a;
        balance = b;
    }

    void deposit(int amount){
        if(amount > 0){
            balance+=amount;
        }
        cout<<balance<<" ";
    }
};


int main(){

    Customer A1("Swayam",2000);
    A1.deposit(500);
}