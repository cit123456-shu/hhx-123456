// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// #include<math.h>
// #include<string.h>

// int main()
// {
	
// 	return 0;
// }
#include <stdio.h>

void Print_Factorial ( const int N );

int main()
{
    int N;
    
    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

void Print_Factorial ( const int N )
{
	int n=N;
	int weishu=1;
	if(n<0||n>1000)
	{
		printf("Invalid input");
		return;
	}
	int i=1;
	int arr[3000]={1};
	while(n!=0)
	{
		for(int j=0;j<weishu;j++)
		{
			arr[j]*=i;
		}
		for(int j=0;j<weishu;j++)
		{
			if(arr[j]>=10)
			{
				arr[j+1]+=arr[j]/10;
				arr[j]%=10;
			}
		}
		while(arr[weishu]>0)
		{
			if(arr[weishu]>=10)
			{
				arr[weishu+1]+=arr[weishu]/10;
				arr[weishu]%=10;
			}
			weishu++;
		}
		n--;
		i++;
	}
	for(int j=weishu-1;j>=0;j--)
	{
		printf("%d",arr[j]);
	}
}