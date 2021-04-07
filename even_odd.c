#include <stdio.h>

void main() {
	int a;
	printf("정수를 입력하세요");
	scanf("%d",&a);
	if(a%2==0){
		printf("짝수 입니다.\n");
	}else if(a%2==1){
		printf("홀수 입니다.\n");
	}
}