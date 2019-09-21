/* program to input 4 numbers a,b,c,p and print f(p) */
#include<stdio.h>
#include<math.h>/* to perform mathematical operations */
int main()
{
	int a,b,c,p,f;
	printf("enter the four numbers a,b,c,p");
	scanf("%d%d%d%d",&a,&b,&c,&p);
	f=(a*pow(p,2))+(b*p)+c;
	printf("f(p)=%d",f);
}
