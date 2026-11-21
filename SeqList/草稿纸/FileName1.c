#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"headfile.h"



int main()
{
	SeqList*list=createSeqList();
	if (!list)
	{
		printf("list is NULL");
		return 1;
	}
	int n;
	scanf("%d", &n);
	switch (n)
	{
		case 1:
		{
			printf("遍历顺序表\n");
			show_list(list);
			break;
		}
		case 2:
		{
			printf("头部插入元素，输入插入元素：");
			int val;
			scanf("%d", &val);
			push_head(list, val);
			break;
		}
		case 3:
		{
			printf("尾部插入元素，输入插入元素：");
			int val;
			scanf("%d", &val);
			push_back(list, val);
			break;
		}
		case 4:
		{
			printf("插入元素，输入插入元素及插入位置：");
			int val,pos;
			scanf("%d %d", &val,&pos);
			insert(list, val,pos);
			break;
		}
		printf("hello?");
	}
	free(list->arr);
	free(list);
	return 0;
}