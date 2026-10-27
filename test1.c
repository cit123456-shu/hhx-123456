#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main()
{
	printf("Please select I number to be printed:\n");
	int i;
	scanf("%d",&i);
	int arr[100]={1,1};
	for(int j=2;j<=i-1;j++)
	{
		arr[j]=arr[j-1]+arr[j-2];
	}
	printf("The number is %d",arr[i-1]);
	return 0;
}