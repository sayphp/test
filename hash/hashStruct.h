#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

//*自己构造结构体替代array,固定大小，设定key大小，计算指针位置，存储字符串
typedef struct hashNode{
	int key;
	char *val;
}hashNode;
typedef struct hashTable{
	struct hashNode **ht;
	int size;

}hashTable;

void hashInit(hashTable *ht, int size);
void hashAdd(hashTable ht, int key, char *val);
void hashDel(hashTable ht, int key);
int hashCode(int key);
char *hashGet(hashTable *ht, int key);
void hashClr(hashTable *ht, int size);
