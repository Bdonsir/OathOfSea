/*
#define InitSize 10//˳���ĳ�ʼ����
typedef struct {
	ElemType* data;//ָʾ��̬���������ָ��
	int length;//˳���ĵ�ǰ����
	int MaxSize;//˳�����������
}SqList;//˳�������Ͷ��壨��̬���䷽ʽ��
*/

#include<stdio.h>
#include<stdlib.h>
#define InitSize 10//˳���ĳ�ʼ����
typedef struct {
	int* data;//ָʾ��̬���������ָ��
	int length;//˳���ĵ�ǰ����
	int MaxSize;//˳�����������
}SqList;//˳�������Ͷ��壨��̬���䷽ʽ��

void InitList(SqList* L) {
	//��malloc��������һƬ�������ڴ�ռ�
	L->data = (int*)malloc(InitSize * sizeof(int));
	L->length = 0;
	L->MaxSize = InitSize;
}

//��̬����˳���ĳ���
void InCreaseSize(SqList* L,int len) {
	int* p = L->data;
	L->data = (int*)malloc((InitSize + len) * sizeof(int));
	for (int i = 0; i < L->length; i++) {
		L->data[i] = p[i];//�����ݸ��Ƶ�������
	}
	L->MaxSize = L->MaxSize + len;//˳������󳤶�����len
	free(p);//�ͷ�ԭ�����ڴ�ռ�
}
int main() {
	SqList L;//
	InitList(&L);
	InCreaseSize(&L, 5);
	return 0;
}