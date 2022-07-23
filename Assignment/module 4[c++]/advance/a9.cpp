#include<iostream>
using namespace std;

class sum{
	public:
			int a;
			float b;
	sum(){
		cout<<"enter first number: ";
		cin>>a;
		cout<<"\nenter second number: ";
		cin>>b;
	
		cout<<endl<<a<<"+"<<b<<"="<<a+b;
		cout<<endl<<a<<"-"<<b<<"="<<a-b;
		cout<<endl<<a<<"/"<<b<<"="<<a/b;
		cout<<endl<<a<<"*"<<b<<"="<<a*b;
	}
};

int main(){

	
		
	sum s;
}
