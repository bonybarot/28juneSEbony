#include<iostream>
using namespace std;

class SI{
	public:
	int p;
	int r;
	int t;
	
SI(int p,int r,int t){
	
		cout<<"\nsimple intrest on principle amount: "<<p<<"\nwith interest rate of: "<<r<<"\nfor:"<<t<<"\nyears is: "<<p*r*t/100;
	}
	
	
	};
	

	

int main(){
	int p;
	int r;
	int t;
	
		cout<<"enter principle amount: ";
		cin>>p;
		cout<<"\nenter rate of interest: ";
		cin>>r;
		cout<<"\nenter years: ";
		cin>>t;
		
		
	SI s(p,r,t);
}
