//����ͷ���ĵ�����
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
	LinkList L;//����һ��ָ�������ָ�룬��û�д���һ�����
	InitList(&L);
	return 0;
}