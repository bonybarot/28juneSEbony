#include<iostream>

using namespace std;

class matrix{
 int a;
 int b;
 int A[3][3];
 public:
  void readmatrix();
  void displaymatrix();
};

void matrix::readmatrix()
{
 for(int i=1;i<=3;i++)
 {
  for(int j=1;j<=3;j++)
  {
   cout<<"A["<<i<<"]["<<j<<"] : ";
   cin>>A[i][j];
  }
 }
}

void matrix::displaymatrix()
{
 for(int i=1;i<=3;i++)
 {
  for(int j=1;j<=3;j++)
  {
   cout<<" "<<A[i][j];
  }
  cout<<endl;
 }
}

int main()
{
 matrix m;
 m.readmatrix();
 m.displaymatrix();
 return(0);
}
