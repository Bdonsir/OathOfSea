#include<cstdlib>
using namespace std;
/*
#define InitSize 10//顺序表的初始长度
typedef struct {
	ElemType* data;//指示动态分配数组的指针
	int length;//顺序表的当前长度
	int MaxSize;//顺序表的最大容量
}SqList;//顺序表的类型定义（动态分配方式）
*/
#define InitSize 10
typedef struct {
	int* data;
	int length;
	int MaxSize;
}SqList;

void InitList(SqList &L) {
	//用malloc函数申请一片连续的内存空间
	L.data = new int[InitSize];
	L.length = 0;
	L.MaxSize = InitSize;
}

//动态增加顺序表的长度
void InCreaseSize(SqList &L,int len) {
	int* p = L.data;
	L.data = new int[InitSize + len];
	for (int i = 0; i < L.length; i++) {
		L.data[i] = p[i];//将数据复制到新区域
	}
	L.MaxSize = L.MaxSize + len;//顺序表的最大长度增加len
	delete p;//释放原来的内存空间
}
int main() {
	SqList L;//
	InitList(L);
	InCreaseSize(L, 5);
	return 0;
}