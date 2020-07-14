// #include "pch.h"
#include <iostream>
#include <stdio.h>

#pragma warning(disable:4996)
// 대문자 A~Z 65~90
// 소문자 a~z 97~122
// 숫자 0은 아스키 48

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

//1. 1부터 N까지 M의 배수들의 합
/*

#include "pch.h"
#include <iostream>

int main()
{
	int n, m, i, sum = 0;
	std::cin >> n >> m;
	for (i = 1; i <= n; i++) {
		if (i%m == 0) {
			sum += i;
		}
	}
	std::cout << sum;
	return 0;
}
*/

//2. 자연수의 합
/*
#include "pch.h"
#include <iostream>

int main()
{
	int A, B, sum = 0;
	std::cin >> A >> B;
	for (int i = A; i < B; i++) {
		std::cout << i << " + ";
		sum += i;
	}
	sum += B;
	std::cout << B << " = " << sum;

	return 0;
}
*/

//3. 진약수의 합
/*
#include "pch.h"
#include <iostream>

int main() {
	int n, i, sum = 0;
	std::cin >> n;
	std::cout << 1;
	sum++;
	for (i = 2; i < n; i++) {
		if (n%i == 0) {
			std::cout << " + " << i;
			sum += i;
		}
	}
	std::cout << " = " << sum;
	return 0;
}
*/

//4. 나이 차이
/*
int main() {
	freopen("input.txt","rt", stdin);
	int i, n, k = 0;
	int max = 0;
	int min = 200;

	std::cin >> n;

	for (i = 0; i < n; i++) {
		std::cin >> k;
		if (k > max) max = k;
		if (k < min) min = k;
	}
	std::cout << (max - min);
	return 0;
}
*/

//5. 나이 계산(문자열 컨트롤)
/*
int main() {
//	freopen("input.txt", "rt", stdin);
	char a[20];
	int year, age;
	scanf("%s", &a);
	if (a[7] == '1' || a[7] == '2')
		year = 1900 + ((a[0]-48) * 10 + (a[1] - 48));
	else
		year = 2000 + ((a[0] - 48) * 10 + (a[1] - 48));
	age = 2019 - year + 1;
	printf("%d ", age);
	if (a[7] == '1' || a[7] == '3') printf("M\n");
	else printf("W\n");

	return 0;
}
*/

//6. 숫자만 추출(문자열 컨트롤)
// 복습하기 - 특히 조건문 속 코드 다시보기
/*
int main() {
//	freopen("input.txt", "rt", stdin);
	char a[100];
	int res = 0, cnt = 0, i;
	scanf("%s", &a);

	// 첫번째 줄에는 자연수를 출력
	for (i = 0; a[i] != '\0'; i++){
		if (a[i] >= 48 && a[i] <= 57) {
			res = res * 10 + (a[i]-48); // 이거 신기함. 잘 봐두기. 028을 28로 변환
		}
	}
	printf("%d\n", res);

	// 약수의 개수를 출력
	for (i = 1; i <= res; i++) {
		if (res%i == 0) cnt++;
	}
	printf("%d", cnt);
	return 0;
}
*/

//7. 영어단어 복구(문자열 컨트롤)
// 복습하기 - 안보고 혼자 짜기, 아스키코드
/*
// A: 65, a: 97 (차이는 32)
// Z: 90
int main() {
	freopen("input.txt", "rt", stdin);
	char a[101], b[101];
	int i, p = 0;
	gets_s(a); //gets: 한 줄읽기. scanf쓰면 공백 앞에서 끊긴다.
	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] != ' ') {
			if (a[i] >= 65 && a[i] <= 90) { // 대문자는 65~90
				b[p++] = a[i] + 32;
			}
			else {
				b[p++] = a[i];
			}
		}
	}
	b[p] = '\0'; //배열 마지막에 널값 넣어서 끝을 알린다.

	printf("%s\n", b);

	return 0;
}
*/

//8.올바른 괄호(문자열 컨트롤)
// 스택 안쓰고 해보는 것
/*
int main() {
//	freopen("input.txt", "rt", stdin);
	int i, cnt = 0;
	char a[31];

	scanf("%s", a);

	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] == '(')
			cnt++;
		else if (a[i] == ')')
			cnt--;

		if (cnt < 0) {
			printf("NO");
			return 0;
		}
	}
	if (cnt == 0)
		printf("YES");
	else
		printf("NO");
	return 0;
}
*/

//9. 모두의 약수
/*
int cnt[50001]; // 전역변수로 정의 why? 0으로 초기화
int main() {
	freopen("input.txt", "rt", stdin);
	int i, j, n = 0;
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		for (j = i; j <= n; j = j + i) {
			cnt[j]++;
		}
	}
	for (i = 1; i <= n; i++) {
		printf("%d", cnt[i]);
	}
	return 0;
}
*/


//10.자릿수의 합
/*
int digit_sum(int n)
{
	int sum = 0;
	while (n>0)
	{
		sum += n % 10;
		n = n / 10;
	 }
	return sum;
}

int main()
{
	freopen("input.txt", "rt", stdin);
	int i, n, sum, max=-2147000000, num, res;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num);
		sum = digit_sum(num);

		if (sum > max) {
			max = sum;
			res = num;
		}
		else if (sum == max) {
			if(num > res) res = num;
		}
	}
	printf("%d",res);
	return 0;
}
*/

// 11. 숫자의 총 개수(small)
/*
int main() {
//	freopen("input.txt", "rt", stdin);
	int x, i, cnt=0, tmp;
	scanf("%d", &x);

	for (i = 1; i <= x; i++) {
		tmp = i;
		while (tmp > 0) {
			tmp = tmp / 10;
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}
*/

// 12. 숫자의 총 개수(large)
/*
int main() {
	freopen("input.txt", "rt", stdin);
	int N, sum=0, d=9, c=1, result=0;
	scanf("%d", &N);
	while (sum + d < N) {
		result += d * c;
		sum += d;		// 0,9,99,999...
		d = d * 10;		// 9,90,900...
		c++;			// 1,2,3...
	}
	result += (N - sum)*c;
	printf("%d", result);
	return 0;
}

/*

sum	d	c	result
0	9	1	9
99	90	2	180
999	900	3	270
...

*/

// 13. 가장 많이 사용된 자릿수
/*
int cnt[10];
int main() {
	//freopen("input.txt", "rt", stdin); // 1230565625
	int i, digit, max = 0, result;
	char a[101];
	scanf("%s",a);

	for (i = 0; a[i] != '\0'; i++)
	{
		digit = a[i] - 48; // '0'의 아스키코드가 48
		cnt[digit]++;
	}
	for (i = 0; i < 10; i++) {
		if (max <= cnt[i]){
			max = cnt[i];
			result = i;
		}
	}
	printf("%d", result);
	return 0;
}
*/

// 14. 뒤집은 소수
/*
int reverse(int x) {	// 29
	int result=0, tmp = 0;
	while (x > 0) {
		tmp = x % 10;
		result = result * 10 + tmp;
		x = x / 10;
	}
	return result;
}

bool isPrime(int x) {
	int i;
	// 아래 한줄이 꼭 있어야 함. 중요!!!
	if (x == 1) return false;
	for (i = 2; i < x; i++) {
		if (x%i == 0) return false;
	}
	return true;
}

int main() {
	//freopen("input.txt", "rt", stdin);
	int n, num, i, tmp, result;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &num);
		tmp = reverse(num);
		if (isPrime(tmp))
			printf("%d ", tmp);
	}
	return 0;
}
*/

// 15. 소수의 개수: 1초 안에 하려면, j*j로 해야함. 절반만 확인.
/*
int main() {
//	freopen("input.txt", "rt", stdin);
	int n, i, j, cnt=0, flag;
	scanf("%d", &n);

	for (i = 2; i <= n; i++) {
		flag = 1;
		for (j = 2; j*j <= i; j++) {
			if (i%j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1) cnt++;
	}
	printf("%d ", cnt);
	return 0;
}
*/

// 16. 아나그램_구글 인터뷰 문제
/*

// 대문자 A~Z 65~90
// 소문자 a~z 97~122
// 대문자이면 -64해서 1~26로 변환
// 소문자이면 -70해서 27~52 변환

int A_cnt[60];	//대소문자 52개 카운팅 배열
int B_cnt[60];

int main() {
//	freopen("input.txt", "rt", stdin);
	char str[101];
	int i;

	// 첫번째 string
	scanf("%s", str);
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 65 && str[i] <= 90) {
			A_cnt[str[i] - 64]++;	// 대문자이면 1~26번 배열 안에 카운트
		}
		else
			A_cnt[str[i] - 70]++;	// 소문자이면 27~52번 배열 안에 카운트
	}
	/// 두번째 string
	scanf("%s", str);
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 65 && str[i] <= 90) {
			B_cnt[str[i] - 64]++;	// 대문자이면 1~26번 배열 안에 카운트
		}
		else
			B_cnt[str[i] - 70]++;	// 소문자이면 27~52번 배열 안에 카운트
	}

	// 첫번째 string을 카운트 한 배열과 두번째 string을 카운트한 배열을 비교.
	for(i = 1; i <= 52; i++) {
		if (A_cnt[i] != B_cnt[i]) {
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}

*/

// 17.선생님 퀴즈
/*
int main() {
	//freopen("input.txt", "rt", stdin);
	int N, i, a, b, result;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d %d", &a, &b);
		result = a * (a + 1) / 2;
		if (result == b) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
*/

//18. 층간소음
/*
int main() {
	// freopen("input.txt", "rt", stdin);
	int n, val, i, num, cnt = 0, max=0;
	scanf("%d %d", &n, &val);
	for (i = 1; i <= n; i++) {
		scanf("%d", &num);
		if (num > val) {
			cnt++;
		}
		else cnt = 0;
		if (max <= cnt)	max = cnt;
	}
	if (max == 0) printf("-1");
	else printf("%d", max);
	return 0;
}
*/

// 19. 분노유발자
/*
int a[101];
int main() {
	//freopen("input.txt", "rt", stdin);
	int n, i, num, cnt=0, max=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &num);
		a[i] = num;
	}
	max = a[n - 1];
	for (i = n - 2; i >= 0; i--) {
		if (max < a[i]) {
			cnt++;
			max = a[i];
		}
	}
	printf("%d", cnt);
	return 0;
}
*/


// 20. 가위바위보
/*
//가위:바위:보 = 1:2:3
int main() {
	//freopen("input.txt", "rt", stdin);
	int n, i;
	int a[101], b[101];
	scanf("%d", &n);
	for (i = 0; i < n; i++) scanf("%d", &a[i]);
	for (i = 0; i < n; i++) scanf("%d", &b[i]);

	for (i = 0; i < n; i++) {
		if (a[i] == b[i]) printf("D\n");
		// A가 이기는 경우
		else if((a[i]==1 && b[i] == 3) || (a[i] == 2 && b[i] == 1) || (a[i] == 3 && b[i] == 2))
		{
			printf("A\n");
		}
		// B가 이기는 경우
		else {
			printf("B\n");
		}
	}
	return 0;
}
*/

// 21. 카드게임
/*
int main() {
	//freopen("input.txt", "rt", stdin);
	int i, a_score = 0, b_score = 0;
	int a[10], b[10];
	char win = 'D'; // 초기값 무승부
	for (i = 0; i < 10; i++) scanf("%d", &a[i]);
	for (i = 0; i < 10; i++) scanf("%d", &b[i]);

	for (i = 0; i < 10; i++) {
		// 무승부 1점씩
		if (a[i] == b[i]) {
			a_score++;
			b_score++;
		}
		// a 승 +3점
		else if (a[i] > b[i]) {
			a_score+=3;
			win = 'A';
		}
		// b 승
		else{
			b_score += 3;
			win = 'B';
		}
	}
	printf("%d %d\n", a_score, b_score);
	printf("%c", win);

	return 0;
}
*/

// 22. 온도의 최대값
// vector 사용*********
/*
#include <vector>
int main() {
	//freopen("input.txt", "rt", stdin);
	int n, k, i, j, sum=0, max =-200000000;
	scanf("%d %d", &n, &k);

	//입력받은 n만큼만 1차원 배열 만들 수 있음.
	std::vector<int> a(n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	// 이렇게 해야 time limited 안 걸린다.
	// for문을 이중으로 하지 않고, 덧셈뺄셈 한번씩/
	sum = 0;

	for (i= 0; i < k; i++) {
		sum += a[i];
	}
	max = sum;
	for (i = 0; i < n - k; i++) {
		sum = sum - a[i] + a[i + k];
		if (sum > max) max = sum;
	}
	printf("\n%d", max);
	return 0;
}
*/
/*
// 이렇게 하면 time limited 된다...
for (i = 0; i < n - k + 1; i++) {
	for (j = 0; j < k; j++) {
		sum += a[i + j];
	}
	if (sum > max) max = sum;
	sum = 0;
}
*/

// 23. 연속부분 증가수열
/*
int main() {
	// freopen("input.txt", "rt", stdin);
	int n, i, now, pre=0,cnt=0, max=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &now);
		if (now >= pre){
			cnt++;
			pre = now;
			if (max < cnt) max = cnt;
		}
		else //하락
		{
			cnt = 1;
			pre = now;
		}
	}
	printf("%d", max);
	return 0;
}
*/

// 24. jolly jumpers
/*
#include <vector>
int main() {
	//freopen("input.txt", "rt", stdin);
	int n, i, pre, now, pos;
	scanf("%d", &n);
	std::vector<int> a(n);
	scanf("%d", &now);
	pre = now;

	for (i = 1; i < n; i++) {
		scanf("%d", &now);
		pos = abs(pre - now);
		if (pos > 0 && pos < n && a[pos] == 0) {
			a[pos] = 1;
		}
		else {
			printf("NO");
			return 0;
		}
		pre = now;
	}
	printf("YES");
	return 0;
}
*/

// 25. 석차 구하기
/*
#include <vector>
int main() {
	//freopen("input.txt", "rt", stdin);
	int n, i, j;
	scanf("%d", &n);
	std::vector<int> a(n);
	std::vector<int> b(n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		b[i] = 1;
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (a[i] < a[j]) {
				b[i]++;
			}
		}
	}
	for (i = 0; i < n; i++)
		printf("%d ", b[i]);
	return 0;
}
*/

//26. 마라톤
/*
#include <vector>
int main() {
	// freopen("input.txt", "rt", stdin);
	int n, i,j, cnt;
	scanf("%d", &n);
	// 배열을 1부터 시작할거니까 배열크기는 n+1로!
	std::vector<int> a(n+1);
	for (i = 1; i <= n; i++) scanf("%d", &a[i]);

	for (i = 1; i <= n; i++) {
		cnt = 1;
		for (j = 1; j < i; j++) {
			if (a[i] <= a[j]) cnt++;
		}
		printf("%d ", cnt);
	}
	return 0;
}
*/

//27. N!
/*
#include <vector>
int main() {
	//freopen("input.txt", "rt", stdin);
	int i, j, n, tmp;
	scanf("%d", &n);
	std::vector<int> ch(n + 1);

	for (i = 2; i <= n; i++) {
		j = 2; // 소인수분해용
		tmp = i;
		while (1) {
			if (tmp%j == 0) {
				ch[j]++;
				tmp = tmp / j;
			}
			else j++;
			if (tmp == 1) break;
		}
	}
	printf("%d! = ", n);
	for (i = 0; i <= n; i++) {
		if(ch[i] != 0) printf("%d ", ch[i]);
	}
	return 0;
}

*/


// 28. N!에서 0의 개수
/*
int main() {
	//freopen("input.txt", "rt", stdin);
	int i, n, j, tmp, cnt1=0, cnt2 = 0;
	scanf("%d", &n);
	// 최대 1000!까지 이므로 int형 변수에 담을 수 없다. (아래처럼 하면 안 된다.)
	//for (i = 1; i <= n; i++) {
	//	nf = nf*i;
	//	printf("%d ", nf);
	//}
	//printf("%d! = %d\n", n, nf);
	for (i = 2; i <= n; i++) {
		tmp = i;
		j = 2;
		while (tmp > 1) {
			if (tmp%j == 0) {
				if (j == 2) cnt1++;
				else if (j == 5) cnt2++;
				tmp = tmp / j;
			}
			else
				j++;
		}
	}
	if (cnt1 > cnt2) printf("%d", cnt2);
	else printf("%d", cnt1);
	return 0;
}
*/

// 29. 3의 개수는? small형
/*
int main() {
	//freopen("input.txt", "rt", stdin);
	int n, i, cnt = 0, tmp;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		tmp = i;
		while(tmp > 1){
			if (tmp % 10 == 3) {
				cnt++;
			}
			tmp = tmp / 10;
		}
	}
	printf("%d", cnt);
}
*/

// 30. 3의 개수는? large형
//?????????????????????????????????????????????

//31. 탄화수소 질량(내 풀이)
/*int main() {
	//freopen("input.txt", "rt", stdin);
	char c[10];
	int i,j, hp = 0, ep = 0, cnt = 0;
	scanf("%s", c);

	for (i = 1; c[i] != '\0'; i++) {
		if (c[i] == 'H') {
			hp = i;
		}
	}
	ep = i;

	if (hp == 1) cnt  = 12;
	else {
		j = 1;
		for (i = hp-1; i >= 1; i--) {
			cnt = cnt + 12 * (c[i] - 48)*j;
			j = j * 10;
		}
	}

	if (ep - hp == 1) cnt++;
	else {
		j = 1;
		for (i = ep - 1; i > hp; i--) {
			cnt = cnt + 1 * (c[i] - 48)*j;
			j = j * 10;
		}
	}

	printf("%d", cnt);
	return 0;
}

*/

//31. 탄화수소 질량(다른 풀이)
/*
int main() {
	// freopen("input.txt", "rt", stdin);
	int i, n, c=0, h=0, pos;
	char a[10];
	scanf("%s", a);

	// C의 개수
	if (a[1] == 'H') {
		c = 1;		//C의 개수
		pos = 1;	//H의 위치
	}
	else {
		for (i = 1; a[i] != 'H'; i++) {
			c = 10 * c + (a[i] - 48);
		}
		//'H'의 위치
		pos = i;
	}

	// H의 개수
	if (a[pos+1] == '\0') h = 1;
	else {
		for (i = pos+1; a[i] != '\0'; i++) {
			h = 10 * h + (a[i] - 48);
		}
	}

	printf("%d", 12 * c + 1 * h);
	return 0;
}
*/