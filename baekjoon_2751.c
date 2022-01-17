#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>		//quick sort (qsort) 알고리즘 사용


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
qsort 함수에 대해

qsort(정렬할 배열,요소개수,요소크기,비교 함수 copare)
비교함수 compare를 만들어 줘야 함 리턴값을 반환할 함수를 만들기

int compare(const void *a,const void *b){
if (*(int*)a > *(int*)b) return 1;
else if (*(int*)a <*(int*)b) return -1;
else return 0;
}

*/