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
#include<cstdlib>
using namespace std;
typedef struct LNode {
	int data;
	struct LNode* next;
}LNode, * LinkList;
//初始化一个空的单链表
bool InitList(LinkList* L) {
	(*L) = (LNode*)malloc(sizeof(LNode));//分配一个头结点,头结点不存储数据
	//内存不足，分配失败
	if (*L == NULL)
		return false;
	(*L)->next = NULL;//头结点之后暂时没有结点
	return true;
}
/*
判断单链表是否为空
if(L==NULL) 空
*/

//在第i个位置插入元素e，带头结点
bool ListInsert(LinkList& L, int i, int e) {
	if (i < 1)
		return false;
	LNode* p;//指针p指向当前扫描到的结点


}
int main() {
	LinkList L;//声明一个头指针，指向单链表的第一个结点，并没有创建一个结点
	InitList(&L);
	return 0;
}