#define MaxSize 10
typedef struct {
	int data[MaxSize];
	int length;
}SqList;

void InitList(SqList* L) {
	L->length = 0;
}

//在表L中第i个位置（位序）插入指定元素e
int ListInsert(SqList* L, int i, int e) {
	//判断i的范围是否有效
	if (i<1 || i>L->length + 1)
		return 0;
	//当前存储空间已满，不能插入
	if (L->length >= MaxSize)
		return 0;
	for (int j = L->length; j >= i; j--) {
		L->data[j] = L->data[j - 1];
	}
	L->data[i - 1] = e;//在位置i处放入e
	L->length++;//长度加1
	return 1;
}
int ListDelete(SqList* L, int i, int* e) {
	//判断i的范围是否有效
	if (i<1 || i>L->length)
		return 0;
	e = L->data[i - 1];
	for (int j = i; j < L->length; j++)
		L->data[j - 1] = L->data[j];//把第i个位置后的元素往前移
	L->length--;//线性表长度减1
	return 1;
}
int main() {
	SqList L;
	InitList(&L);
	int e = -1;//用变量e把被删除的元素“带回来”
	ListDelete(&L, 3, 0);
	return 0;
}