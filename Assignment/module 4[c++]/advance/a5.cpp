#include<iostream>
using namespace std;
class bank{
	public:
		char name[10];
		char type[10];
		int number;
		int balance;
		int choice;
		int choice2;
		void info()
	{
		cout<<"enter your name :";
		cin>>name;
		cout<<"\ntype of account :";
		cin>>type;
		cout<<"\nenter account number :";
		cin>>number;
		cout<<"\nenter account balance :";
		cin>>balance;
		cout<<"\npress 1 to deposite and 2 for withdraw : ";
		cin>>choice;
		
		if(choice==1){
				int bal;
				cout<<"enter amount to deposite : ";
				cin>>bal;
				balance=balance+bal;
				cout<<"your total balance is:";
				cout<<balance;
				}
				else if(choice==2){
							
				
				int bala;
				cout<<"enter amount to withdraw : ";
				cin>>bala;
				balance=balance-bala;
				cout<<"your total balance is:";
				cout<<balance;
				}
				else{
					cout<<"your total balance is :";
					cout<<balance;
				}
				
				
			
					
	}
  
	
};

	
	int main(){
		bank bk;
		bk.info();
	}
