#define  _CRT_SECURE_NO_WARNINGS
#define pi 3.1415926
//char//字符数据类型  char ch = 'A';
//short//短整型
//int//整形
//long//长整型
//float//单精度浮点整形
//double//双精度浮点整形
//%c——打印字符格式的数据
//%d——打印整形十进制数据 
//%f——打印浮点型数字--单精度，%lf——双精度,在%f中的f前加.n表示保留到第几位小数
//%p——以地址的形式打印
//%x——打印16进制
//{}代码块
//scanf（）——输入函数
//&——取地址符号 
//sacnf输入
//printf输出
//0开头8进制，0x开头16进制
// 1.const-常属性-不能再次改变（常数性的变量） const int a = 8
// 2.enum-关键字-枚举常量
//例：
//#include<stdio.h>
//#include<math.h>
//
//enum ZIMU {
//	a,b,c ,d, e,f ,g ,h, i, j, k ,l ,m, n , o ,p ,q,r ,s,t ,u ,v ,w,x ,y, z
//};
//
//int main() {
//	printf("%d", z);
//	return 0;
//}
#include<stdio.h>
#include<stdio.h>
int main()
{
	char x, y;
	scanf("%c %c", &x, &y);
	printf("%c %c\n", x + 32, y + 32);
	return 0;
}