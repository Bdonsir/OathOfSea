#include<cstdlib>
using namespace std;
/*
#define InitSize 10//˳���ĳ�ʼ����
typedef struct {
	ElemType* data;//ָʾ��̬���������ָ��
	int length;//˳���ĵ�ǰ����
	int MaxSize;//˳�����������
}SqList;//˳�������Ͷ��壨��̬���䷽ʽ��
*/
#define InitSize 10
typedef struct {
	int* data;
	int length;
	int MaxSize;
}SqList;

void InitList(SqList &L) {
	//��malloc��������һƬ�������ڴ�ռ�
	L.data = new int[InitSize];
	L.length = 0;
	L.MaxSize = InitSize;
}

//��̬����˳���ĳ���
void InCreaseSize(SqList &L,int len) {
	int* p = L.data;
	L.data = new int[InitSize + len];
	for (int i = 0; i < L.length; i++) {
		L.data[i] = p[i];//�����ݸ��Ƶ�������
	}
	L.MaxSize = L.MaxSize + len;//˳������󳤶�����len
	delete p;//�ͷ�ԭ�����ڴ�ռ�
}
int main() {
	SqList L;//
	InitList(L);
	InCreaseSize(L, 5);
	return 0;
}