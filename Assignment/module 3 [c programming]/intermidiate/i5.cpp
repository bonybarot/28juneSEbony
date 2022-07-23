#include<stdio.h>
int main()
{
	int a,b,c,d,e,total;
	float per;
	printf("enter marks of five subjects ::\n");
	scanf("%d\n",&a);
	scanf("%d\n",&b);
	scanf("%d\n",&c);
	scanf("%d\n",&d);
	scanf("%d",&e);
	total=a+b+c+d+e;
	printf("total = %d\n",total);
	per=total/5;
	printf("percentage = %0.2f\n",per);

	if(per>100 || per <0)
 {
  printf("\n Your Input is out of Range");
 }
 else if(per>=70)
 {
  printf("\n You got Distinction");
 }
 else if(per>=60)
 {
  printf("\n You got First Class");
 }
 else if(per>=50)
 {
  printf("\n You got Second Class");
 }
 else if(per>=35)
 {
  printf("\n You got pass Class");
 }
 else
 {
  printf("\n You got Fail");
 }
}
