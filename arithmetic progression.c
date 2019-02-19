#include <stdio.h>
//#include<conio.h>
void main() 
{
	int n,a,d,sum;
	int N,D,A,S;
	printf("enter the number of terms");
	scanf("%d",&n);
	printf("enter the start value");
	scanf("%d",&a);
	printf("enter the difference");
	scanf("%d",&d);
	N=n-1;
	D=N*d;
	A=2*a;
	S=A+D;
	sum=S*n/2;
	printf("%d",sum);
	getch();
}
