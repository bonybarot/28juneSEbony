#include<iostream>
using namespace std;

class lectures{
	public:
	char lecturer[10];
    char sub[10];
	char course[10];
	int no_of_lec;
	void setdata();
	void displaydata();
};

void lectures::setdata(){
	
	cout<<"enter the name of lecturer: ";
	cin>>lecturer;
	cout<<"\nenter the subject: ";
	cin>>sub;
	cout<<"\nenter the course: ";
	cin>>course;
	cout<<"\nenter number of lectures: ";
	cin>>no_of_lec;
	
	
}

void lectures::displaydata(){
	
	cout<<"\n\nLECTURER: ";
	cout<<lecturer;
	cout<<"\n\nSUBJECT: ";
	cout<<sub;
	cout<<"\n\nCOURSE NAME: ";
	cout<<course;
	cout<<"\n\nNUMBER OF LECTURES: ";
	cout<<no_of_lec;
}


int main(){
	lectures lec;
	lec.setdata();
	lec.displaydata();
}
