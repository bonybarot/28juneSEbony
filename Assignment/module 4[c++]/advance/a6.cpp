#include<iostream>
using namespace std;

class bookshop{
	public:
	
	char author[10];
	char title[10];
	float price;
	char publisher;
	void assign();
	void display();	
};

void bookshop::assign(){
	cout<<"enter the name of author:";
	cin>>author;
	cout<<"enter the title:";
	cin>>title;
	cout<<"enter price :";
	cin>>price;
	cout<<"enter name of publisher:";
	cin>>publisher;
}
void bookshop::display(){
	cout<<"\n\n\n\nAUTHOR'S NAME:";
	cout<<author;
	cout<<"\nTITLE:";
	cout<<title;
	cout<<"\nPRICE :";
	cout<<price;
	cout<<"\nPUBLISHER:";
	cout<<publisher;
	
}


int main(){
	
	bookshop bk;
	bk.assign();
	bk.display();
}
