#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

//*基于Array实现的简单hash，支持自增数字索引（0-n），存储字符串

//字符串固定存储s长度
#define SIZE 255

//hash初始化
void hashInit(char ***ht, int size);
//hash插入
void hashAdd(char **ht, int key, char *val);
//hash删除
void hashDel(char **ht, int key);
//hash查询
char *hashGet(char **ht, int key);
//hash清空
void hashClr(char **ht, int size);
