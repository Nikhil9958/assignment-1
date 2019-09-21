/*program to print the sum of the square of the first number and cube of the second number*/
#include<stdio.h>
#include<math.h>/*for performing mathematical operations*/
int main()
{
	int a,b,sum;
	printf("enter the two numbers");
	scanf("%d%d",&a,&b);
	sum=pow(a,2)+pow(b,3);
	printf("the sum is:%d",sum);
}
