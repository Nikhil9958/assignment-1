/* program to print the second last digit */
#include<stdio.h>
int main()
{
	int a,f;
	printf("enter the number");
	scanf("%d",&a);
	f=a/10;
	printf("the second last digit:%d",(f%10));
}

