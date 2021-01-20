/*
#define MaxSize 10//定义最大长度
typedef struct {
	ElemType data[MaxSize];//用静态的“数组”存放数据元素
	int length;//顺序表的当前长度
}SqList;//顺序表的类型定义（静态分配方式）
*/
#include<stdio.h>
#define MaxSize 10
typedef struct {
	int data[MaxSize];
	int length;
}SqList;

//初始化一个顺序表
void InitList(SqList* L) {
	for (int i = 0; i < MaxSize; i++)
		L->data[i] = 0;//为所有的数据元素设置默认初始值
	L->length = 0;//顺序表初始化长度为0
}
int main() {
	SqList L;//声明一个顺序表
	InitList(&L);
	return 0;
}
