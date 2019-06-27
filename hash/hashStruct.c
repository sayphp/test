#include "hashStruct.h"

int main(int argc, char **argv){
    int size = 10;
	hashTable ht;
	hashInit(&ht, 10);
	for(int i=0; i<size; i++){
	
	}
	hashAdd(ht, 9, "哇哈哈哈哈");
	hashAdd(ht, 5, "这是一个基于array的hash表");
	hashAdd(ht, 3, "这就是个测试");
	hashDel(ht, 9);
	for(int i = 0; i< size; i++){
		if(&(ht.ht[i]) == NULL){
			printf("ht[%d]尚未初始化\n", i);
		}else{
			printf("%p\n", &(ht.ht[i]));
		}
	}
	printf("===============\n");
	char *a = hashGet(&ht, 1);
//	char *b = hashGet(ht, 5);
//	char *c = hashGet(ht, 9);
	if(strcmp(a, "")==0){
		printf("a为空值\n");
	}
/*	if(*c==0){
	    printf("c为空值\n");
	}
*/
	printf("a=%s\n", a);
//	printf("b=%s\n", b);
//	printf("c=%s\n", c);
    hashClr(&ht, size);
    return 0;
}

void hashInit(hashTable *ht, int size){
	ht = malloc(sizeof(hashTable));
	ht->ht = malloc(sizeof(hashNode)*size);
	for(int i=0; i<size; i++){
		ht->ht[i]->key = i;
		ht->ht[i]->val = NULL;
		printf("%p\n", ht->ht[i]);
	}
	printf("================\n");
	ht->size = size;
}

void hashAdd(hashTable ht, int key, char *val){
	//nodec组装
	hashNode *node = NULL;
	node = malloc(sizeof(hashNode));
	node->key = key;
	node->val = strdup(val);
	int hashVal = hashCode(key);
	ht.ht[hashVal] = node;
	printf("%d:%s|%p|%s\n", key, node->val, &(ht.ht[hashVal]), ht.ht[hashVal]->val);
}

void hashDel(hashTable ht, int key){
	hashAdd(ht, key, "");
}

int hashCode(int key){
	return key;
}

char *hashGet(hashTable *ht, int key){
	int hashVal = hashCode(key);
	printf("%p\n", ht);
	printf("%p\n", ht->ht);
	printf("%p\n", ht->ht[hashVal]);
	printf("%p\n", NULL);
//	printf("%p\n", ht->ht.hashVal);
	if(ht->ht[hashVal]==NULL){
		return "";
	}else{
		return ht->ht[hashVal]->val;

	}
}

void hashClr(hashTable *ht, int size){
	for(int i=0; i<size; i++){
		free(ht->ht[i]);
	}
	free(ht);
}
