// コメントアウト Ctrl + K + C
// 解除 Ctrl + K + U

#define _CRT_SECURE_NO_WARNINGS // scanf()の警告文に対しての解決策
#include <stdio.h>

int main() {
	long long int i, n, sol = 1;

	scanf("%lld", &n);
	for (i = 1; i <= n; i++) {
		sol *= i;
	}
	printf("%lld\n", sol);
	return 0;
}