// コメントアウト Ctrl + K + C
// 解除 Ctrl + K + U

#define _CRT_SECURE_NO_WARNINGS // scanf()の警告文に対しての解決策
#include <stdio.h>

int main() {
	int buf[5];
	int i, j, temp;

	scanf("%d %d %d %d %d", &buf[0], &buf[1], &buf[2], &buf[3], &buf[4]);
	for (i = 0; i < 4; i++) {
		for (j = 4; j > i; j--) {
			if (buf[j - 1] < buf[j]) {
				temp = buf[j];
				buf[j] = buf[j - 1];
				buf[j - 1] = temp;
			}
		}
	}
	printf("%d %d %d %d %d\n", buf[0], buf[1], buf[2], buf[3], buf[4]);
	return 0;
}