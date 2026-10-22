#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main()
{
	int arr[3][5]={
					{1,2,3,4,5},
					{11,12,13,14,15},
					{101,102,103,104,105}
					};
	int (*p)[5]=arr;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<5;j++)
		{
			printf(" %d",*(*p+j));
		}
		printf("\n");
		p++;
	}
	
	return 0;
}