//带头结点的单链表
#include<stdlib.h>
typedef struct LNode {
	int data;
	struct LNode* next;
}LNode, * LinkList;
//初始化一个带头结点的单链表
int InitList(LinkList L) {
	L = (LNode*)malloc(sizeof(LNode));//分配一个头结点,头结点不存储数据
	//内存不足，分配失败
	if (L == NULL)
		return 0;
	L->next = NULL;//头结点之后暂时没有结点
	return 1;
}
/*
判断单链表是否为空（带头结点）
if(L->next==NULL) 空
*/
int main() {
	LinkList L;//声明一个指向单链表的指针，并没有创建一个结点
	InitList(&L);
	return 0;
}