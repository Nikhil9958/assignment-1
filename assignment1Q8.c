/* program to double last digit of a number assuming last digit is less than 5 */
#include<stdio.h>
int main()
{
	int a,f;
	printf("enter the number");
	scanf("%d",&a);
	f=a/10;
	printf("new number:%d",(2*(a%10))+(f*10));
}

