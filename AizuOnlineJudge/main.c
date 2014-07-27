// コメントアウト Ctrl + K + C
// 解除 Ctrl + K + U

#define _CRT_SECURE_NO_WARNINGS // scanf()の警告文に対しての解決策
#include <stdio.h>

int main(){
	int n, i, j, in[5010], temp, sol;

	while (scanf("%d", &n)) {
		if (n == 0) break;
		sol = 0;
		for (i = 0; i < n; i++)
			scanf("%d", &in[i]);
		for (i = 0; i < n; i++) {
			temp = 0;
			for (j = i; j < n; j++) {
				temp += in[j];
				if (sol < temp)	sol = temp;
			}
		}
		printf("%d\n", sol);
	}		
	return 0;
}