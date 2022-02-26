#include<stdio.h>
int lcm(int a,int b);
int main()
{
	int num1,num2,LCM;
	printf("enter any two numbers to find lcm");
	scanf("%d%d",&num1,&num2);
	if(num1>num2)
	LCM=lcm(num2,num1);
	else
	LCM=lcm(num2,num1);
	printf("lcm of %d and %d =%d,num1,num2,lcm");
	
}
int lcm(int a,int b)
{
	static int multiple =0;
	if((multiple %a==0)&&(multiple%b==0))
	{
		return multiple;
	}
	else
	{
		return lcm(a,b);
	}
}
