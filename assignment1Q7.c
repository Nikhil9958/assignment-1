/* program to calculate the sum of last two digits */
#include<stdio.h>
int main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	printf("sum of last two digits is:%d",(a%10)+((a/10)%10));
}
