//Module 07 Lab class 02--unfinished(add cash to app and add option)
/* 
bank management system

*/
#include<bits/stdc++.h> // all in one
using namespace std;

class BankAccount{
public:
    string account_holder;
    string address;
    int age;
    int account_number;
protected:
    int balance;
private:
    string password;

public:
    //constructor
    BankAccount(string account_holder, string address, int age, string password){
        // 'this' is a pointer,
        //with 'this' keyword, parameter and class element can be same string
        //it denotes the same class,where it belongs

        this->account_holder=account_holder;//class element, parameter
        this->address=address;
        this->age=age;
        this->password=password;
        this->account_number=rand()%1000000000;//10^9 to keep rand() in integer range
        this->balance=0;
        cout<<"your account no is "<<account_number<<endl;
    }
    //if pass match ,show balance
    int show_balance(string password){
        if(this->password==password){
            return this->balance;
        }
        else{
            return -1;
        }
    }
    //if pass match ,add money
    void add_money(string password, int amount){
        if(this->password==password){
            this->balance+=amount;
            cout<<"add money successful"<<endl;
        }
        else{
            cout<<"password didn't match,no add money"<<endl;
        }
    }
    void withdraw_money(string password, int amount){
        if(this->password==password){
            this->balance-=amount;
            cout<<"withdraw money successful"<<endl;
        }
        else{
            cout<<"password didn't match,no withdraw"<<endl;
        }
    }
};
//function to creat account
BankAccount* creat_account(){
    string account_holder, password, address;
    int age;
    cout<<"creat_account,enter infos"<<endl;
    cin>>account_holder>>address>>age>>password;
    //dynamic object
    BankAccount *myAccount=new BankAccount(account_holder,address,age,password);
    return myAccount; //retrun type pointer
}
//function to add money
void add_money(BankAccount *myAccount){
    string password;
    int amount;
    cout<<"Give password and add money"<<endl;
    cin>>password>>amount;
    myAccount->add_money(password,amount);
    cout<<"current balance is "<<myAccount->show_balance("1234")<<endl;
}
//function to withdraw money
void withdraw_money(BankAccount *myAccount){
    string password;
    int amount;
    cout<<"Give password and withdraw money"<<endl;
    cin>>password>>amount;
    myAccount->withdraw_money(password,amount);
    cout<<"current balance is "<<myAccount->show_balance("1234")<<endl;
}



//subrata dhk 32 1234
int main(){
    //creat_account(); 
    BankAccount *myAccount=creat_account(); 
    // if (myAccount->show_balance("123")==-1) cout<<"password error"<<endl;
    // else cout<<"your balance is "<<myAccount->show_balance("1234")<<endl;
    
    add_money(myAccount);    
    withdraw_money(myAccount);  
    return 0;
}
