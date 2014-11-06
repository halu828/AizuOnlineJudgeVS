#define _CRT_SECURE_NO_WARNINGS // scanf()の警告文に対しての解決策
#include <stdio.h>
#include <math.h>

int main() {
	double v, t, y;
	while (scanf("%lf", &v) != EOF) {
		printf("%d\n", (int)ceil((4.9 * (v / 9.8) * (v / 9.8) + 5.0) / 5.0));
	}
	return 0;
}