#include<iostream>
using namespace std;

class marks{
	public:
	int n;
	int sub1[50];
	int sub2[50];
	int sub3[50];
	int roll[50];
	int total;
	float percentage;
	void setdata();
	void getdata();
};

void marks::setdata(){
		cout<<"enter number of students between 1 to 50:";
		cin>>n;
	
	for(int i=0;i<n;i++){
		
		cout<<"enter roll no:";
		cin>>roll[i];
		cout<<"\t enter marks of sub 1:";
		cin>>sub1[i];
		cout<<"\t enter marks of sub 2:";
		cin>>sub2[i];
		cout<<"\t enter marks of sub 3:";
		cin>>sub3[i];
		cout<<"\n";
	}
}
	
void marks::getdata(){
	
	for(int i=0;i<n;i++){
		
		cout<<"roll no:";
		cout<<roll[i];
		cout<<"\t marks of sub 1:";
		cout<<sub1[i];
		cout<<"\t marks of sub 2:";
		cout<<sub2[i];
		cout<<"\t marks of sub 3:";
		cout<<sub3[i];
		total=sub1[i]+sub2[i]+sub3[i];
		cout<<"\ttotal:";
		cout<<total;
		percentage=total*100/300;
		cout<<"\tpercentage:";
		cout<<percentage;
		cout<<"\n";
	
}
	
	
}


int main(){
	
	
	marks m;
	m.setdata();
	m.getdata();
}
