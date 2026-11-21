#include"headfile.h"
#include<stdio.h>
#include<stdlib.h>

SeqList* createSeqList()
{
	SeqList* list = calloc(1, sizeof(SeqList));
	if (!list)
	{
		printf("error create list\n");
		free(list);
		return NULL;
	}
	list->capacity = SeqList_INIT_size;
	list->arr = calloc(list->capacity, sizeof(int));
	list->size =0;
	if (!list->arr)
	{
		printf("error create arr\n");
		free(list->arr);
		free(list);
		return NULL;
	}
	return list;
}

void push_back(SeqList* list, int val)
{
	if (list->size >= list->capacity)
	{
		printf("fail to push\n");
		return;
	}
	else
	{
		list->arr[list->size] = val;
		list->size++;
	}
	return;
}

void show_list(SeqList* list)
{
	for (int i = 0;i < list->size;i++)
	{
		printf("%d  ", list->arr[i]);
	}
	printf("\n");
}

void push_head(SeqList* list, int val)
{
	if (list->size >= list->capacity)
	{
		printf("put failed, space full\n");
		return;
	}
	for (int i = list->size;i > 0;i--)
	{
		list->arr[i] = list->arr[i - 1];
	}
	list->arr[0] = val;
	list->size++;
}