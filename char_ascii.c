#include <stdio.h>

void main() {
	printf("키보드입력값 변환\n");
	char human;
	
	while(1){
		printf("문자입력 : ");
		scanf("%c",&human);
		getchar();
		printf("사람이 인식하는 문자값:%c 인식한 아스키 코드값 : %d\n",human,human);
		
		if(human==48){
			printf("프로그램을 종료합니다. 중지 아스키코드는 : %d\n", human);
			break;
		}
		
	}
}