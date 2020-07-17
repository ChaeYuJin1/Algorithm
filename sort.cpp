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

// 34. 버블정렬(뒤부터 값이 확정됨)
/*
int main() {
	// freopen("input.txt", "rt", stdin);
	int i, j, n, a[101], tmp;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	// 정렬 시작
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j + 1]) { // 뒤부터 값이 확정됨
				// swap
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
*/

// 35. special sort(구글 인터뷰)
/*
int main() {
	// freopen("input.txt", "rt", stdin);
	int i, j, n, a[101], tmp;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	//
	for (i = 0; i < n-1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (a[j] > 0 && a[j + 1] < 0) {
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	
	return 0;
}
*/

// 36. 삽입정렬
/*
int main() {
	freopen("input.txt", "rt", stdin);
	int i, j, n, tmp, a[101];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 1; i < n; i++) {
		tmp = a[i];
		for (j = i - 1; j >= 0; j--) {
			if (tmp < a[j]) a[j + 1] = a[j];
			else break;
		}
		a[j + 1] = tmp;
	}
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
*/

// 37.Least Recently Used(카카오 캐시문제 변형)
/*
int main() {
	//freopen("input.txt", "rt", stdin);
	int n, k, i, j, a, c[20], pos;
	scanf("%d %d", &n, &k); // 캐시크기 n개, 입력 값 k개

	for (i = 0; i < k; i++) {
		scanf("%d", &a); 
		pos = -1;
		// 현재 캐시배열 c에 있는지 없는지 확인(hit/miss)
		for (j = 0; j < n; j++) if (a == c[j]) pos = j;

		// miss
		if (pos == -1) {
			for (j = n - 1; j >= 1; j--) c[j] = c[j - 1];
		}
		// hit
		else {
			for (j = pos; j >= 1; j--) c[j] = c[j - 1];
		}
		c[0] = a;
	}
	for (i = 0; i < n; i++) {
		printf("%d ", c[i]);
	}
	return 0;
}
*/


// 38. Inversion Sequence
/*
int main() {
	freopen("input.txt", "rt", stdin);
	int i, j, n, a[101], b[101], pos;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = n; i >= 1; i--) {
		pos = i;
		for (j = 0; j < a[i]; j++) {
			b[pos] = b[pos+1];
			pos++;
		}
		b[pos] = i;
	}

	for (i = 1; i <= n; i++) printf("%d ", b[i]);
	return 0;
}
*/

//39. 두 배열 합치기
/*
int main() {
	freopen("input.txt", "rt", stdin);
	int n, m, i, j, a[101], b[101], c[201], pa=1,pb=1,pc=1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &m);
	for (i = 1; i <= m; i++) {
		scanf("%d", &b[i]);
	}
	// 병합하기
	while (pa <= n && pb <= m) {
		if (a[pa] > b[pb]) {
			c[pc++] = b[pb++];
		}
		else {
			c[pc++] = a[pa++];
		}
	}
	while (pa <= n) c[pc++] = a[pa++];
	while (pb <= m) c[pc++] = b[pb++];
	// 출력
	for (i = 1; i < pc; i++) {
		printf("%d ", c[i]);
	}
	return 0;
}
*/

//40. 교집합(투포인트 알고리즘)
// sort함수 사용
/*
#include <algorithm>
int main() {
	//freopen("input.txt", "rt", stdin);
	int n, m, i, ap=0,bp=0,cp=0;
	// A배열
	scanf("%d", &n);
	std::vector<int> A(n);
	for (i = 0; i < n; i++) scanf("%d", &A[i]);
	// B배열
	scanf("%d", &m);
	std::vector<int> B(m);
	for (i = 0; i < m; i++) scanf("%d", &B[i]);
	// C배열
	std::vector<int> C(n+m);
	
	// 먼저, A와 B의 배열을 오름차순으로 정렬
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	// 작은 값부터 교집합이 있는지 확인
	while (ap < n && bp < m) {
		if (A[ap] == B[bp]) {
			C[cp] = A[ap];
			ap++; bp++; cp++;
		} 
		else if(A[ap] < B[bp]) ap++;
		else bp++;
	}
	// 교집합 배열 출력
	for (i = 0; i < cp; i++) {
		printf("%d ", C[i]);
	}
	return 0;
}
*/

// 41. 연속된 자연수의 합 (mine 비효율 )
/*
int main() {
	//freopen("input.txt", "rt", stdin);
	int i, j, k, n, sum, cnt=0;
	scanf("%d", &n);
	for (i = n/2+1; i > 0; i--) {
		sum = 0;
		j = i;
		while (1) {
			sum += j;
			if (sum > n) break;
			else if (sum == n) {
				cnt++;
				// j부터 i까지 출력
				printf("%d ", j);
				for (k = j + 1; k <= i; k++) printf("+ %d ", k);
				printf("= %d\n", n);
				break;
			}
			j--;
		}
	}
	printf("%d", cnt);
	return 0;
}
*/

// 41. 연속된 자연수의 합 (전략적인 알고리즘-꼭 다시)
/*
int main() {
	//freopen("input.txt", "rt", stdin);
	int i, n, digit=1, tmp, cnt=0;
	scanf("%d", &n);
	tmp = n;
	n--;
	while (n>0) { //a>0이어야 몫이 나옴.
		n -= ++digit; //
		if (n%digit == 0) {
			for (i = 1; i < digit; i++) printf("%d + ", n / digit + i);
			printf("%d = %d\n", n / digit + digit, tmp);
			cnt++;
		}
	}
	printf("%d", cnt);



}
/*
