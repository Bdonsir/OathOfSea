#define MaxSize 10
typedef struct {
	int data[MaxSize];
	int length;
}SqList;

void InitList(SqList* L) {
	L->length = 0;
}

//在表L中第i个位置（位序）插入指定元素e
int ListInsert(SqList* L,int i,int e) {
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

int main() {
	SqList L;
	return 0;
}