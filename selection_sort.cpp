#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <vector>

#pragma warning(disable:4996)

// 32. 선택정렬(앞부터 값이 확정됨)
/*
int main() {
	freopen("input.txt", "rt", stdin);
	int n, i, j, idx, a[101],tmp;
	scanf("%d", &n); 
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	printf("정렬 전 배열:\n");
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	for (i = 0; i < n-1; i++) {
		idx = i;
		
		// a[idx]가 기준, 최소인 a[j]의 인덱스를 idx에 저장. 
		for (j = i + 1; j < n; j++) {
			if (a[idx] > a[j]) idx = j;
		}

		// a[i]와 최소값 a[idx]를 swap
		tmp = a[i];
		a[i] = a[idx];
		a[idx] = tmp;
	}
	// 오름차순 정렬 출력
	printf("\n정렬 후 배열:\n");
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
*/

// 33. 3등의 성적은?(선택정렬)
/*
int main() {
	//freopen("input.txt", "rt", stdin);
	int n, a[101], tmp, third=1, i, j, idx;
	// n= 7명
	scanf("%d", &n);
	// 80 96 75 82 96 92 100 점수가 들어옴.
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	// 선택정렬 
	// 100 // 96 96 // 92(3등)
	for (i = 0; i < n - 1; i++) {
		idx = i;
		// 내림차순으로 정렬
		for (j = i; j < n; j++) {
			if (a[idx] < a[j]) idx = j;
		}
		tmp = a[idx];
		a[idx] = a[i];
		a[i] = tmp;
	}
	// 그중에서 3등을 찾아야 함.
	for (i = 0; i < n-1; i++) {
		if (a[i] > a[i + 1]) third++;
		if (third == 3) {
			printf("%d", a[i+1]);
			break;
		}
	}

	return 0;
}
*/
