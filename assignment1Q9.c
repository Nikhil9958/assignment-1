/* program to delete the second last digit */
#include<stdio.h>
int main()
{
	int a,f,g;
	printf("enter the number");
	scanf("%d",&a);
	f=a%10;
	g=a/100;
	printf("new number:%d",((g*10)+f));
}
	


