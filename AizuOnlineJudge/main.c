// http://www.atelier-blue.com/contest/pc-concours/2004-y/2004y01-18.htm
// http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=502606

#define _CRT_SECURE_NO_WARNINGS // scanf()の警告文に対しての解決策
#include <stdio.h>

int main() {
	int i, j, n;
	int tmp, carry = 0;
	int alen, blen;
	char a[82], b[82], out[82];
	
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", a);
		scanf("%s", b);
		alen = strlen(a);
		blen = strlen(b);
		alen--;
		blen--;

		for (j = 80; j >= 0; j--) {
			tmp = carry;
			if (alen >= 0) tmp += a[alen--] - '0';
			if (blen >= 0) tmp += b[blen--] - '0';
			out[j] = tmp % 10 + '0';
			carry = tmp / 10;
		}
		if (out[0] != '0') {
			printf("overflow\n");
		}
		else {
			out[81] = '\0';
			for (j = 0;; j++) {
				if (out[j] != '0') {
					printf("%s\n", &out[j]);
					break;
				}
			}
		}

	}
	return 0;
}