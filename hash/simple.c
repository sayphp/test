#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * 基于数组实现的最简易的哈希表
  * key int
  * val char*
  * 这里不考虑hash生成问题，只是通过数字key获得val的指针位置
  */

//初始化
void init(char ***hashTable, int i){
	*hashTable = malloc(i*sizeof(char **));
	int x;
	for(x=0; x<i;x++){
		(*hashTable)[x] = malloc(50*sizeof(char));
	}
}
//添加
void add(char **ht, int k, char *v){
	strcpy(ht[k], v);
}
//查找
char *find(char **ht, int k){
	return ht[k];

}
//释放
void close(char **ht, int i){
	int x;
	for(x=0; x<i; x++){
		free(ht[x]);
	}
	free(ht);
}
int main(void){
	char **hashTable;
	init(&hashTable, 10);
	add(hashTable, 1, "This is LoL");
	add(hashTable, 9, "wahahahahaha");
	char *s = find(hashTable, 9);
	printf("%s\n", s);
	close(hashTable, 10);
	return 0;
}
