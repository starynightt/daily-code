#define  _CRT_SECURE_NO_WARNINGS
#define pi 3.1415926
//char//�ַ���������  char ch = 'A';
//short//������
//int//����
//long//������
//float//�����ȸ�������
//double//˫���ȸ�������
//%c������ӡ�ַ���ʽ������
//%d������ӡ����ʮ�������� 
//%f������ӡ����������--�����ȣ�%lf����˫����,��%f�е�fǰ��.n��ʾ�������ڼ�λС��
//%p�����Ե�ַ����ʽ��ӡ
//%x������ӡ16����
//{}�����
//scanf�����������뺯��
//&����ȡ��ַ���� 
//sacnf����
//printf���
//0��ͷ8���ƣ�0x��ͷ16����
// 1.const-������-�����ٴθı䣨�����Եı����� const int a = 8
// 2.enum-�ؼ���-ö�ٳ���
//����
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