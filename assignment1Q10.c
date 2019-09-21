/* program to exchange the last two digits */
#include<stdio.h>
int main()
{
	int a,f,g,h,i;
	printf("enter the number");
	scanf("%d",&a);
	f=a%10;
	g=a/10;
	h=g%10;
	i=a/100;
	printf("new number:%d",(i*100)+(f*10)+h);
}


