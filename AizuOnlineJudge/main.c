﻿// コメントアウト Ctrl + K + C
// 解除 Ctrl + K + U

#define _CRT_SECURE_NO_WARNINGS // scanf()の警告文に対しての解決策
#include <stdio.h>

int main(){
	int i, n;
	double x1, y1, x2, y2, x3, y3, x4, y4, sl1, sl2;
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
		sl1 = (y2 - y1) / (x2 - x1);
		sl2 = (y4 - y3) / (x4 - x3);
		if (sl1 == sl2)	puts("YES");
		else puts("NO");
	}
	return 0;
}