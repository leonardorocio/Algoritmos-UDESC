#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int copyArrayAndIncreaseCounting(int* B, int* A, int size) {
	int i;
	for (i = 0; i < size; i++) {
		B[i] = A[i];
	}
	return 1;
}

void permutation(int *arr, int **generated, int* counting, int start, int end) {
	
	if (start == end) {
		*counting += copyArrayAndIncreaseCounting(generated[*counting], arr, end+1);
	}
	int i;
	for (i = start; i <= end; i++) {
		swap((arr+i), (arr+start));
		permutation(arr, generated, counting, start+1, end);
		swap((arr+i), (arr+start));
	}
}

int fatorial(int n) {
	int fat = 1, i;
	for (i = 1; i <= n; i++) {
		fat *= i;
	}
	return fat;
}


//int main() {
//	int i, j, n;
//	scanf("%d", &n);
//	int numbers[n];
//	for (i = 0; i < n; i++) {
//		numbers[i] = i+1;
//	}
//	int fat = fatorial(n);
//	int** generated = (int**) malloc(sizeof(int*) * fat);
//	for (i = 0; i < fat; i++) {
//		generated[i] = (int*) malloc(sizeof(int) * n);
//	}
//	int counting = 0;
//	int* ptr = &counting;
//	permutation(numbers, generated, ptr, 0, n-1);
//	for (i = 0; i < fat; i++) {
//		for (j = 0; j < n; j++) {
//			printf("%2d", generated[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
