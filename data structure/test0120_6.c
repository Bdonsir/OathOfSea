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
*/
//要表示一个单链表时，只需声明一个头指针L，指向单链表的第一个结点
//LinkList L;//声明一个指向单链表第一个结点的指针