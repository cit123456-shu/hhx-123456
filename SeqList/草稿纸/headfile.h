#ifndef HEADFILE_h
#define HEADFILE_h
#define SeqList_INIT_size 8

typedef struct SeqList
{
	int* arr;
	int capacity;
	int size;
}SeqList;
SeqList* createSeqList();

void push_back(SeqList* list, int val);
void show_list(SeqList* list);
void push_head(SeqList* list, int val);
void insert(SeqList* list, int val, int pos);

#endif
