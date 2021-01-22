#include<iostream>
using namespace std;
/*
#define MaxSize 10//定义最大长度
typedef struct {
	ElemType data[MaxSize];//用静态的“数组”存放数据元素
	int length;//顺序表的当前长度
}SqList;//顺序表的类型定义（静态分配方式）
*/
#define MaxSize 10
typedef struct {
	int data[MaxSize];
	int length;
}SqList;

//初始化一个顺序表
void InitList(SqList &L) {
	/*
	虽然内存中有遗留的脏数据，但一般不会违规访问
	for (int i = 0; i < MaxSize; i++)
		L->data[i] = 0;//为所有的数据元素设置默认初始值
	*/
	L.length = 0;//顺序表初始化长度为0
}
//插入操作，在表L中第i个位置（位序）插入指定元素e
bool ListInsert(SqList &L, int i, int e) {
	//判断i的范围是否有效
	if (i<1 || i>L.length + 1)
		return false;
	//当前存储空间已满，不能插入
	if (L.length >= MaxSize)
		return false;
	for (int j = L.length; j >= i; j--) {
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = e;//在位置i处放入e
	L.length++;//长度加1
	return right;
}
//删除顺序表L的第i个元素，用e返回
bool ListDelete(SqList &L, int i, int &e) {
	//判断i的范围是否有效
	if (i<1 || i>L.length)
		return false;
	e = L.data[i - 1];
	for (int j = i; j < L.length; j++)
		L.data[j - 1] = L.data[j];//把第i个位置后的元素往前移
	L.length--;//线性表长度减1
	return right;
}
//按位查找操作，获取表L中第i个位置的元素的值
int GetElem(SqList L, int i) {
	return L.data[i - 1];
}
//按值查找操作，在表L中查找具有给定关键字值的元素，返回其位序
int LocateElem(SqList L, int e) {
	for (int i = 0; i < L.length; i++)
		if (L.data[i] == e)
			return i + 1;
}
int main() {
	SqList L;
	InitList(L);
	ListInsert(L, 3, 3);
	int e = -1;//用变量e把被删除的元素“带回来”
	ListDelete(L, 3, e);
	if (ListDelete(L, 3, e))
		cout << "已删除第3个元素" << e << endl;
	else
		cout << "位序i不合法，删除失败" << endl;

	return 0;
}