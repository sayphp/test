#include "hashArray.h"

int main(int argc, char **argv){
	int size = 10;
	char **hashTable;
	hashInit(&hashTable, 10);
	hashAdd(hashTable, 9, "哇哈哈哈哈");
	hashAdd(hashTable, 5, "这是一个基于array的hash表");
	hashAdd(hashTable, 3, "这就是个测试");
	hashDel(hashTable, 9);
	char *a = hashGet(hashTable, 1);
	char *b = hashGet(hashTable, 5);
	char *c = hashGet(hashTable, 9);

	if(strcmp(a, "")==0){
		printf("a为空值\n");
	}
	if(*c==0){
		printf("c为空值\n");
	}
	printf("a=%s\n", a);
	printf("b=%s\n", b);
	printf("c=%s\n", c);

	hashClr(hashTable, 10);
	return 0;
}

void hashInit(char ***ht, int size){
	*ht = malloc(size*sizeof(char **));
	for(int i=0; i<size; i++){
		(*ht)[i] = malloc(SIZE*sizeof(char));
	}
}

void hashAdd(char **ht, int key, char *val){
	strcpy(ht[key], val);
}

void hashDel(char **ht, int key){
	hashAdd(ht, key, "");
}

char *hashGet(char **ht, int key){
	return ht[key];
}

void hashClr(char **ht, int size){
	for(int i=0; i<size; i++){
		free(ht[i]);
	}
	free(ht);
}
