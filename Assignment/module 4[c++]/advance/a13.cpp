#include<iostream>
using namespace std;

class math{
	
	public:
		int a;
		int b;
		int c;
	
	void sum(int a,int b);
	void sum(double a,double b);
	void sum(int a,double b);
	void sum(double a,int b);
};

void math::sum(int a,int b){
	cout<< a+b<<endl;
	

}

void math::sum(double a,double b){
	cout<< a-b<<endl;
}

void math::sum(int a,double b){
	cout<< a*b<<endl;
}

void math::sum(double a,int b){
	cout<< a/b;
}

int main(){
	
	math obj;
	obj.sum(5,5);
	obj.sum(5.5,5.1);
	obj.sum(5,5.5);
	obj.sum(15.5,5);	

}
