#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

typedef struct listNode{
	char *val;
	struct listNode *next;
}listNode;

typedef struct listQueue{
	struct listNode *start;
	struct listNode *end;
}listQueue;

listQueue listInit(void);
void listAdd(listQueue *queue, char *val);
void listDel(listQueue *queue);
