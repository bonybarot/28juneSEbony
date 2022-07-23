#include<iostream>
using namespace std;

class area{
	public:

	int a;
	int b;
	int c;
	int d;
	double e;
	double pi=3.14;

	void sum(double c);
	void sum(double b, double c);
	void sum(int b,int c);
};

void area::sum(double e){
	
	cout<<"\nto find area of circle enter the radius: ";
	cin>>c;
	a=pi*c*c;
	cout<<"\nthe area of circle is: ";
	cout<<a;
} 
void area::sum(double b, double c){
	
	cout<<"\n\nto find area of rectangle enter the length: ";
	cin>>b;
	cout<<"\nenter the width: ";
	cin>>c;
	a=b*c;
	cout<<"\narea of rectangle is: ";
	cout<<a;
	
}
void area::sum(int b,int c){
	
	cout<<"\n\nto find area of triangle enter the height: ";
	cin>>b;
	cout<<"\nenter the base: ";
	cin>>c;
	a=b*c/2;
	cout<<"\narea of triangle is: ";
	cout<<a;
}



int main(){
	int n;
	int num;
	int a;
	int b;
	int c;
	float pi=3.14;
	

	
	do{
			area ae;
	cout<<"to find the area of circle press 1\n 2 for rectangle\n 3 for triangle : ";
	cin>>num;
		
		if(num==1){
			ae.sum(1.1);
		}
		else if(num==2){
			ae.sum(1.1,1.1);
		}
		else if(num==3){
			ae.sum(1,1);
		}
		else{
			cout<<"wrong input...";
		}
	
	cout<<"\n\npress 1 for another opration and 0 to stop: ";
	cin>>n;
					
	}while(n==1);
	}
	





