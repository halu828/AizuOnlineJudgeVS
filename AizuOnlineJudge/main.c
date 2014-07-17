// http://www.atelier-blue.com/contest/pc-concours/2004-y/2004y01-18.htm
// http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=502606
// http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=587902
// http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=874199 ← これ強い
// コメントアウト Ctrl + K + C
// 解除 Ctrl + K + U

#define _CRT_SECURE_NO_WARNINGS // scanf()の警告文に対しての解決策
#include <stdio.h>
#include <string.h>

int main() {
	int n, i, alen, blen, carry, out[80];
	char a[80], b[80];

	scanf("%d", &n);
	while (n--) {
		scanf("%s", a);
		scanf("%s", b);
		alen = strlen(a);
		blen = strlen(b);
		if (alen > 80 || blen > 80){
			printf("overflow\n");
			continue;
		}
		i = carry = 0;
		while (alen || blen) {
			out[i] = carry;
			if (alen) out[i] += a[--alen] - '0';
			if (blen) out[i] += b[--blen] - '0';
			carry = out[i] / 10;
			out[i++] %= 10;
		}
		if (carry) out[i] = 1;
		else i--;
		if (i >= 80) {
			printf("overflow\n");
			continue;
		}
		for (; i >= 0; i--)
			printf("%d", out[i]);
		printf("\n");
	}
	return 0;
}