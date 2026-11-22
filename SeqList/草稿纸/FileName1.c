#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef int DATA;
typedef struct LNode
{
	DATA data;
	struct LNode* next;
}LNode;

int main()
{
	int n;
	scanf("%d", &n);
	LNode* L = (LNode*)malloc(sizeof(LNode));
	LNode* tail = L;
	L->data = n;
	L->next = NULL;
	for (int i = 0;i < n;i++)
	{
		LNode* s = malloc(sizeof(LNode));
		scanf("%d", &s->data);
		s->next = NULL;
		tail->next = s;
		tail = s;
	}
	for (LNode* p = L->next;p != NULL;p = p->next)
	{
		printf("%d ", p->data);
	}
	LNode* p = L;
	while (p != NULL)
	{
		LNode* temp = p->next;
		free(p);
		p = temp;
	}
	return 0;
}