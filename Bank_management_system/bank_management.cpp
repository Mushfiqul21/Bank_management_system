#include<iostream>
using namespace std;

class bank
{
public:
    char name[100], number[100];
    int amount;
    void create_account();
    void deposite_money();
    void withdraw_money();
    void account_display();
    void check_option();
};
void bank::create_account()
{
    cout<< "Enter your Name:\t";
    cin>>name;
    cout<< "Enter your number:\t";
    cin>>number;
    cout<< "Enter the amount to open the account: \n";
    cin>> amount;
    cout<< "Your account is created successfully....\n";

}
void bank::deposite_money()
{
    int a;
    cout<< "Enter the amount you want to deposite:\t ";
    cin>> a;
    amount = a+amount;
    cout<< "New balance of your account:\t "<<amount<<endl;
}
void bank::withdraw_money()
{
    int w;
    cout<< "Enter the amount you want to withdraw:\t";
    cin>> w;
    amount=amount-w;
    cout<< "New balance of your account:\t "<<amount<<endl;
}
void bank::account_display()
{
    cout<< "Name: " <<name<<endl;
    cout<< "Number: "<<number<<endl;
    cout<< "Your account balance: "<<amount<<endl;;
}
void bank::check_option()
{
    int input;
    cout<< "Press-1 for Creating account"<<endl;
    cout<< "Press-2 for Deposite money"<<endl;
    cout<< "Press-3 for Withdraw money"<<endl;
    cout<< "Press-4 for Showing statement for your account"<<endl;
    cout<< "Press-5 for exit"<<endl;

    cout<< "What you want to do?? "<<endl;
    cin>> input;
    if(input==1)
    {
        create_account();
    }
    else if(input==2)
    {
        deposite_money();
    }
    else if(input==3)
    {
        withdraw_money();
    }
    else if(input==4)
    {
        account_display();
    }
    else if(input==5)
    {
        exit(0);
    }
    else
    {
        cout<< "Wrong input. Try again...";
    }
}

int main()
{
    while(1)
    {
        bank obj;
        obj.check_option();
    }

}
