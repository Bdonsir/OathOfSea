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
#include<cstdlib>
using namespace std;
typedef struct LNode {
	int data;
	struct LNode* next;
}LNode, * LinkList;
//��ʼ��һ���յĵ�����
bool InitList(LinkList* L) {
	(*L) = (LNode*)malloc(sizeof(LNode));//����һ��ͷ���,ͷ��㲻�洢����
	//�ڴ治�㣬����ʧ��
	if (*L == NULL)
		return false;
	(*L)->next = NULL;//ͷ���֮����ʱû�н��
	return true;
}
/*
�жϵ������Ƿ�Ϊ��
if(L==NULL) ��
*/

//�ڵ�i��λ�ò���Ԫ��e����ͷ���
bool ListInsert(LinkList& L, int i, int e) {
	if (i < 1)
		return false;
	LNode* p;//ָ��pָ��ǰɨ�赽�Ľ��


}
int main() {
	LinkList L;//����һ��ͷָ�룬ָ������ĵ�һ����㣬��û�д���һ�����
	InitList(&L);
	return 0;
}