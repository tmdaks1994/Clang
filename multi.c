#include <stdio.h>

int multi(int x,int y) {
	return (x*y);
}

int multi(int x, int y); //함수 선언 인터페이스와 같은 역할
void main() {
	int a,b,c;
	printf("곱하기할 첫번째 수를 입력 하세요 :");
	scanf("%d", &a);
	printf("곱하기할 두번째 수를 입력 하세요 :");
	scanf("%d", &b);
	c = multi(a,b);
	printf("%d * %d 의 곱셈 결과는 %d\n", a,b,c);
}

