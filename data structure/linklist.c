/*
typedef struct LNode {
	ElemType data;//������
	struct LNode* next;//ָ����

}LNode,*LinkList;
*/
/*
struct LNode {
	ElemType data;
	struct LNode* next;
};
typedef struct LNode LNode;
typedef struct LNode* LinkList;
ǿ������һ����㣬ʹ��LNode*
ǿ������һ��������ʹ��LinkList
LinkList L;//����һ��ָ�������һ������ָ��
Ҫ��ʾһ��������ʱ��ֻ������һ��ͷָ��L��ָ������ĵ�һ�����
*/
#include<stdlib.h>
typedef struct LNode {
	int data;
	struct LNode* next;
}LNode,*LinkList;
//��ʼ��һ���յĵ�����
int InitList(LinkList* L) {
	L = NULL;//�ձ���ʱ��û���κν��
	return 1;
}
/*
�жϵ������Ƿ�Ϊ��
if(L==NULL) ��
*/
int main() {
	LinkList L;//����һ��ͷָ�룬ָ������ĵ�һ����㣬��û�д���һ�����
	InitList(&L);
	return 0;
}