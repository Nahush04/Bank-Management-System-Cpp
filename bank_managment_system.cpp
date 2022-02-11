#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class bank
{

    char name[100],add[100],y;
    int balance, amount;
public:
    void open_account ();
    void deposit_money();
    void withdraw_money ();
    void display_account();
};
void bank::open_account()
{
    system("cls");
    cout<<"Enter your full name: ";
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter your address: ";
    cin.ignore();
    cin.getline(add,100);
    cout<<"What type of account you want to open: saving or current : ";
    cin>>y;
    cout<<"Enter amount for deposit: ";
    cin>>balance;
    cout<<"Your account has been created!";

}
void bank::deposit_money()
{
    int a ;
    cout<<"Enter the amount of money you want to deposit: ";
    cin>>a;
    balance+=a;
    cout<<"Your total balance is: "<<balance<<endl;
}
void bank::display_account()
{
    cout<<"Enter the name: "<<name<<endl;
    cout<<"Enterened your addees: "<<add<<endl;
    cout<<"Type of account that you have opened: "<<y<<endl;
    cout<<"Amount you deposit: "<<balance<<endl;

}
void bank::withdraw_money()
{
    cout<<"Withdraw ::";
    cout<<"Enter your amount to be withdrawn: ";
    cin>>amount;
    balance=balance-amount;
    cout<<"Total amount left is: "<<balance;
}

int main()
{
    int selec,x;
    bank acc;
    system("cls");
    system("color 0D");
    do
    {
    cout<<"1. Open a account"<<endl;
    cout<<"2. Deposit money"<<endl;
    cout<<"3. WithDraw money"<<endl;
    cout<<"4. Display account details"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Please select one of the options from above: ";
    cin>>selec;

    switch(selec)
    {
        case 1:"1. Open account \n";
        acc.open_account ();
        break;
        case 2:"2. Deposit money \n";
        acc.deposit_money();
        break;
        case 3:"3. WithDraw money \n";
        acc.withdraw_money ();
        break;
        case 4:"4. Display account\n";
        acc.display_account();
        break;
        case 5:
            if(selec==5)
            {
               cout<< "Exit";
            }
        default:
            cout<<"This is not exit please try again ";

    }
    cout<<"\n Do you want to select next step? press:: Y to continue"<<endl;
    cout<<"If you want to exit then please press:: N ";
    x=getch();
    if(x=='n' || x=='N')
    cout<<"exit";
    }
    while (x=='y' || x=='Y');

 getch();
 return 0;
}