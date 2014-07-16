#define _CRT_SECURE_NO_WARNINGS // scanf()の警告文に対しての解決策
#include <stdio.h>

int main() {
	int i, d, s;
	
	while (scanf("%d", &d) != EOF) {
		s = 0;
		for (i = 1; i*d < 600; i++) s += (i*d)*(i*d)*d;
		printf("%d\n", s);
	}
	return 0;
}