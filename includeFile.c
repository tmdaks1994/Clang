#include <stdio.h>
#include <conio.h>
#include "factorial.h"

void main() {
	int x;
	scanf("%d",&x);
	printf("%d! - %d", x, factorial(x));
	getchar();
}