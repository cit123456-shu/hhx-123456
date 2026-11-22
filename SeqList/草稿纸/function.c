#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"headfile.h"

LNode* Create()
{
	int n;
	printf("输入链表节点个数（不包括哨兵位）:");
	scanf("%d", &n);
	LNode* L = (LNode*)malloc(sizeof(LNode));
	LNode* tail = L;
	L->data = n;
	L->next = NULL;
	printf("请输入链表各节点数据:");
	for (int i = 0;i < n;i++)
	{
		LNode* s = malloc(sizeof(LNode));
		scanf("%d", &s->data);
		s->next = NULL;
		tail->next = s;
		tail = s;
	}
	return L;
}

void Printf(LNode* L)
{
	L = L->next;
	while (L != NULL)
	{
		printf("%d ", L->data);
		L = L->next;
	}
	printf("\n");
	return;
}

void Free(LNode* L)
{
	LNode* p = L;			//free链表
	while (p != NULL)
	{
		LNode* temp = p->next;
		free(p);
		p = temp;
	}
}

LNode* Find(LNode* L, DATA find)
{
	LNode* p = L->next;
	int count = 1;
	while (p != NULL && p->data != find)
	{
		count++;
		p = p->next;
	}
	if (p == NULL)
	{
		printf("failed to find");
		return NULL;
	}
	else
	{
		printf("the data place in %d", count);
		return p;
	}
}

LNode* FindKth(LNode* L, int k)
{
	if (k < 0)
	{
		return NULL;
	}
	int count = 0;
	while (L != NULL && count != k)
	{
		count++;
		L = L->next;
	}
	return L;
}

void insert(LNode* L, DATA datain, int where)
{
	if (where < 1)
	{
		printf("failed to insert");
		return;
	}
	LNode* temp1 = malloc(sizeof(LNode));
	LNode* p = FindKth(L, where - 1);
	if (p == NULL || temp1 == NULL)
	{
		printf("failed to insert");
		free(temp1);
		return;
	}
	temp1->data = datain;
	temp1->next = p->next;
	p->next = temp1;
}

void delete(LNode* L, int where)
{
	LNode* p = FindKth(L, where-1);
	if (p == NULL || p->next == NULL)
	{
		printf("failed to delete");
		return;
	}
	LNode* temp = p->next->next;
	free(p->next);
	p->next = temp;
}