#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main()
{
	int num;
	a: scanf("%d",&num);
	if(num==1)
	{
		printf("hello world");
	}
	else
	{
		printf("false");
		goto a;
	}
	
	return 0;
}