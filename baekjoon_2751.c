#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>		//quick sort (qsort) �˰��� ���


int compare(const void* a, const void* b) {
	if (*(int*)a > *(int*)b) return 1;
	else if (*(int*)a < *(int*)b) return - 1;
	else return 0;
}

int main() {
	int n;
	scanf("%d", &n);

	int num[1000001] = { 0, };

	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	qsort(num, n, sizeof(int), compare);

	for (int i = 0; i < n; i++) printf("%d\n", num[i]);
		
	return 0;
}

/*
qsort �Լ��� ����

qsort(������ �迭,��Ұ���,���ũ��,�� �Լ� copare)
���Լ� compare�� ����� ��� �� ���ϰ��� ��ȯ�� �Լ��� �����

int compare(const void *a,const void *b){
if (*(int*)a > *(int*)b) return 1;
else if (*(int*)a <*(int*)b) return -1;
else return 0;
}

*/