#include<iostream>
using namespace std;
/*
#define MaxSize 10//������󳤶�
typedef struct {
	ElemType data[MaxSize];//�þ�̬�ġ����顱�������Ԫ��
	int length;//˳���ĵ�ǰ����
}SqList;//˳�������Ͷ��壨��̬���䷽ʽ��
*/
#define MaxSize 10
typedef struct {
	int data[MaxSize];
	int length;
}SqList;

//��ʼ��һ��˳���
void InitList(SqList &L) {
	/*
	��Ȼ�ڴ����������������ݣ���һ�㲻��Υ�����
	for (int i = 0; i < MaxSize; i++)
		L->data[i] = 0;//Ϊ���е�����Ԫ������Ĭ�ϳ�ʼֵ
	*/
	L.length = 0;//˳����ʼ������Ϊ0
}
//����������ڱ�L�е�i��λ�ã�λ�򣩲���ָ��Ԫ��e
bool ListInsert(SqList &L, int i, int e) {
	//�ж�i�ķ�Χ�Ƿ���Ч
	if (i<1 || i>L.length + 1)
		return false;
	//��ǰ�洢�ռ����������ܲ���
	if (L.length >= MaxSize)
		return false;
	for (int j = L.length; j >= i; j--) {
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = e;//��λ��i������e
	L.length++;//���ȼ�1
	return right;
}
//ɾ��˳���L�ĵ�i��Ԫ�أ���e����
bool ListDelete(SqList &L, int i, int &e) {
	//�ж�i�ķ�Χ�Ƿ���Ч
	if (i<1 || i>L.length)
		return false;
	e = L.data[i - 1];
	for (int j = i; j < L.length; j++)
		L.data[j - 1] = L.data[j];//�ѵ�i��λ�ú��Ԫ����ǰ��
	L.length--;//���Ա��ȼ�1
	return right;
}
//��λ���Ҳ�������ȡ��L�е�i��λ�õ�Ԫ�ص�ֵ
int GetElem(SqList L, int i) {
	return L.data[i - 1];
}
//��ֵ���Ҳ������ڱ�L�в��Ҿ��и����ؼ���ֵ��Ԫ�أ�������λ��
int LocateElem(SqList L, int e) {
	for (int i = 0; i < L.length; i++)
		if (L.data[i] == e)
			return i + 1;
}
int main() {
	SqList L;
	InitList(L);
	ListInsert(L, 3, 3);
	int e = -1;//�ñ���e�ѱ�ɾ����Ԫ�ء���������
	ListDelete(L, 3, e);
	if (ListDelete(L, 3, e))
		cout << "��ɾ����3��Ԫ��" << e << endl;
	else
		cout << "λ��i���Ϸ���ɾ��ʧ��" << endl;

	return 0;
}