/*
typedef struct LNode {
	ElemType data;//数据域
	struct LNode* next;//指针域

}LNode,*LinkList;
*/
/*
struct LNode {
	ElemType data;
	struct LNode* next;
};
typedef struct LNode LNode;
typedef struct LNode* LinkList;
强调这是一个结点，使用LNode*
强调这是一个单链表，使用LinkList
LinkList L;//声明一个指向单链表第一个结点的指针
要表示一个单链表时，只需声明一个头指针L，指向单链表的第一个结点
*/
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
	LinkList L;//声明一个头指针，指向单链表的第一个结点，并没有创建一个结点
	InitList(&L);
	return 0;
}