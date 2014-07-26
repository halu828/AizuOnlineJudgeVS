// コメントアウト Ctrl + K + C
// 解除 Ctrl + K + U

#define _CRT_SECURE_NO_WARNINGS // scanf()の警告文に対しての解決策
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char buf[82];
	int i, j;

	while (fgets(buf, 82, stdin) != NULL) {
		for (i = 0; i < 26; i++) {
			for (j = 0; j < strlen(buf); j++) {
				if (buf[j] == 'z') buf[j] = 'a';
				else if (isalpha(buf[j])) buf[j]++;
			}
			if (strstr(buf, "the") != NULL ||
				strstr(buf, "this") != NULL ||
				strstr(buf, "that") != NULL)
				printf("%s", buf);
		}
	}
	return 0;
}