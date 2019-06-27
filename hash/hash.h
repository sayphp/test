#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * hash表的查询复杂度为O(1),标准的空间换时间
 * 简单来说，就是通过h哈希算法，直接计算出指针的位置，从而获取到指针指向的内容
 * 也正因为如此，一般的哈希表，只能使用占用空间的一半，同时还有可能会出现碰撞，即哈希算法后f(a)和f(b)得出了同一个指针，这就需要一些额外的方法来让哈希表能够兼容这种情况
 * 不过，当我们把hash表简化到一定程度的时候，会发现，其实本质就是一个数组（C的数组）
 * 这里，我会一步步的从最简单的数组开始，知道实现一个真正的hash表
 * 1.数组的最简易hash表				hashArray.h
 * 2.结构体+固定长度的替换hash表		hashStruct.h
 * 3.支持kv的hash表					hash3.h
 * 4.支持hash碰撞处理				hash4.h
 * 有一篇很好的文章简单明了的介绍了什么是哈希表，散列函数是其关键
 * https://stackoverflow.com/questions/31930046/what-is-a-hash-table-and-how-do-you-make-it-in-c
 */
