//import libraries
#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
//create a class
class bank
{
    //initialize array
    char name[100],address[100],type;
    float balance, wm, dm;
    int account_no;
public://the above are functions
    void open_account ();
    void deposite_money();
    void withdraw_money ();
    void display_account();
};
void bank::open_account()
{
    cout<<"NEW ACCOUNT\n";
    cout<<"Enter your full name == ";
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter your address == ";
    cin.getline(address,100);
    cout<<"write your account number it must be started 1000... == ";
    cin>>account_no;
    cout<<"what type of account you want to open saving (s) or checking (c) == ";
    cin>>type;
    cout<<"Enter amount for deposite in ETB ==";
    cin>>balance;
    cout<<"Account is created Sucessfully! \n";

}
void bank::deposite_money()
{
    cout<<"Deposite Money\n";
    cout<<"Account number == "<<account_no<<endl;
    cout<<"Enter how much money you want to deposit in ETB == ";
    cin>>dm;
    balance=dm+balance;
    cout<<"Your total amount == "<<balance<<"ETB"<<endl;
}
void bank::withdraw_money()
{
    cout<<"withdraw \n";
    cout<<"Account Number == "<<account_no<<endl;
    cout<<"Enter your amount for withdrawing in ETB== ";
    cin>>wm;
    if(balance > wm){
    balance=balance-wm;
    cout<<"Now your total amount is left == "<<balance<<"ETB";
    }
    else if(balance < wm) {
        cout<<"Insufficent amount!";
    }
    else{
        cout<<"Now your balance is zero birr ,please recharge it \n";
    }

}
void bank::display_account()
{
    cout<<"Display Account\n";
    cout<<"Name of account holder ==> "<<name<<endl;
    cout<<"Address ==> "<<address<<endl;
    cout<<"Type of account ==> "<<type<<endl;
    cout<<"Account number ==> "<<account_no<<endl;
    cout<<"Balance ==> "<<balance<<"ETB"<<endl;
}

//main display function
int main()
{
    int ch,x,n;
    bank obj;
    do
    {
    cout<<"***WELCOME TO BANK APPLICATION***\n";
    cout<<"01)Create New Account \n";
    cout<<"02)Deposit Money \n";
    cout<<"03)WithDraw Money \n";
    cout<<"04)Display Account\n";
    cout<<"05)Exit\n";
    cout<<"Please select the option from above \n";
    cin>>ch;

    switch(ch)
    {
        case 1:"01)Create New Account \n";
        obj.open_account ();
        break;
        case 2:"02)Deposit Money \n";
        obj.deposite_money();
        break;
        case 3:"03)WithDraw Money \n";
        obj.withdraw_money ();
        break;
        case 4:"04)Display Account\n";
        obj.display_account();
        break;
        case 5:
            if(ch==5)
            {
               cout<< "exit";
               return 0;
            }
    }
    cout<<"\n do you want to select next step then please press::y/Y\n";
    cout<<"\n if you want to exit then please press:: n/N\n";
    x=getch();
    if(x=='n' || x=='N')
    cout<<"exit";
    }
    while (x=='y' || x=='Y');
    getch();
    return 0;
}
