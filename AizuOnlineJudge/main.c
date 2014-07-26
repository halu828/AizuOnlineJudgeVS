// コメントアウト Ctrl + K + C
// 解除 Ctrl + K + U

#define _CRT_SECURE_NO_WARNINGS // scanf()の警告文に対しての解決策
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char buf[512];
	int i;

	gets(buf);
	for (i = 0; i < strlen(buf); i++)
		buf[i] = toupper(buf[i]);
	printf("%s\n", buf);
	return 0;
}