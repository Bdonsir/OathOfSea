//��ͷ���ĵ�����
#include<stdlib.h>
typedef struct LNode {
	int data;
	struct LNode* next;
}LNode, * LinkList;
//��ʼ��һ����ͷ���ĵ�����
int InitList(LinkList L) {
	L = (LNode*)malloc(sizeof(LNode));//����һ��ͷ���,ͷ��㲻�洢����
	//�ڴ治�㣬����ʧ��
	if (L == NULL)
		return 0;
	L->next = NULL;//ͷ���֮����ʱû�н��
	return 1;
}
/*
�жϵ������Ƿ�Ϊ�գ���ͷ��㣩
if(L->next==NULL) ��
*/
int main() {
	LinkList L;//����һ��ָ�������ָ�룬��û�д���һ�����
	InitList(&L);
	return 0;
}