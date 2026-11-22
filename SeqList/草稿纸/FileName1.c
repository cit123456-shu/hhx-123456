#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"headfile.h"

int main()
{
	LNode* L=Create();
	Printf(L);
	delete(L, 2);
	Printf(L);
	Free(L);
	return 0;
}