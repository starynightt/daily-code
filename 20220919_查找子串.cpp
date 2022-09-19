#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int arr1[100], arr2[100], i = 0, j = 0, n = 0,b,a;
	char c;
	while ((c = getchar()) != '\n') {
		arr1[i++] = c;
		++j;
	}
	//输入第一行数据
	arr1[j] = '\0';
	i = 0;
	while ((c = getchar()) != '\n') {
		arr2[i++] = c;
		++n;
	}
	//输入第二行数据
	arr2[n] = '\0';
	for (i = 0; i < j; ++i) {/*从第一个字母开始判断*/ 
		for (a = 0; a <= n;++a) {/*若判断完所有字母仍然未退出循环，则结束程序*/
			if (a == n) {
				printf("%d", i);
				return 0;
			}
			if (arr1[i + a] != arr2[a]) {/*判断是否为子串*/
				break;
			}
		}
	}
	printf("-1");
	return 0;
}