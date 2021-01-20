//不带头结点的单链表
#include<stdlib.h>
typedef struct LNode {
	int data;
	struct LNode* next;
}LNode,*LinkList;
//初始化一个空的单链表
int InitList(LinkList* L) {
	L = NULL;//空表，暂时还没有任何结点
	return 1;
}
/*
判断单链表是否为空
if(L==NULL) 空
*/
int main() {
	LinkList L;//声明一个指向单链表的指针，并没有创建一个结点
	InitList(&L);
	return 0;
}