#define _CRT_SECURE_NO_WARNINGS // scanf()‚ÌŒx•¶‚É‘Î‚µ‚Ä‚Ì‰ğŒˆô
#include <stdio.h>

int main() {
	int a[4], b[4], i, j, hit, blow;
	while (scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]) != EOF) {
		scanf("%d %d %d %d", &b[0], &b[1], &b[2], &b[3]);
		hit = 0;
		blow = 0;
		for (i = 0; i < 4; i++) {
			if (a[i] == b[i]) hit++;
			for (j = 0; j < 4; j++) {
				if (a[i] == b[j] && a[i] != b[i]) blow++;
			}
		}
		printf("%d %d\n", hit, blow);
	}
	return 0;
}