#ifndef HEADFILE
#define HEADFILE

typedef int DATA;
typedef struct LNode
{
	DATA data;
	struct LNode* next;
}LNode;

LNode* Create();
void Printf(LNode* L);
void Free(LNode* L);
LNode* Find(LNode* L, DATA find);
LNode* FindKth(LNode* L, int k);
void insert(LNode* L, DATA data, int where);
void delete(LNode* L, int where);

#endif