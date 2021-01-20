#define MaxSize 10
typedef struct {
	int data[MaxSize];
	int length;
}SqList;

void InitList(SqList* L) {
	L->length = 0;
}

//�ڱ�L�е�i��λ�ã�λ�򣩲���ָ��Ԫ��e
int ListInsert(SqList* L,int i,int e) {
	//�ж�i�ķ�Χ�Ƿ���Ч
	if (i<1 || i>L->length + 1)
		return 0;
	//��ǰ�洢�ռ����������ܲ���
	if (L->length >= MaxSize)
		return 0;
	for (int j = L->length; j >= i; j--) {
		L->data[j] = L->data[j - 1];
	}
	L->data[i - 1] = e;//��λ��i������e
	L->length++;//���ȼ�1
	return 1;
}

int main() {
	SqList L;
	return 0;
}