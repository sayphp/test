#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
	char *val;
	struct node *next;	
}node;

typedef struct list{
	struct node *start;
	struct node *end;
}list;

list *init(){
	node *start = {NULL, NULL};
	node *end = {NULL, NULL};
	list *l = {
		start,
		end
	};
	return l;
}

int main(void){
}

