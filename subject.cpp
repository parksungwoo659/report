#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#define _CRT_SECURE_NO_WARNINGS

void report(int n);
int kor[10], eng[10], math[10], com[10]; //���� �迭�� �����Է¹ޱ� 1
char *name[10];//[20]; //�̸� �ޱ�
 
int main(void)
{
	int i, j, k;
	char buf[512];
	int total[10]; // ���� �� �ޱ� 
	double average[10]; // ���� ��� 
	
	for(i = 0; i<10; i++) //�Է� 
	{
		printf("�̸� : "); scanf("%s", buf); 

		for(k = 0;; k++)
		{
			if(buf[k] == 0) break;
		}
		name[i] = (char*)malloc(k+1);
		for(k = 0;; k++)
		{
			*(name[i] + k) = buf[k];
			if(buf[k] == 0) break;
		}
		printf("���� : "); scanf("%d", &kor[i]);
		printf("���� : "); scanf("%d", &eng[i]);
		printf("���� : "); scanf("%d", &math[i]);
		printf("��ǻ�� : "); scanf("%d", &com[i]);
	}
	for(i=0; i<10; i++)
	{
		printf("%s\n", name[i]);
	}
	report(10); //��� 
	getch();
}

void report(int n)
{
	for(int i = 0; i<n; i++)
	{
		printf("[%s]: %5d %5d %5d %5d\n", name[i], kor[i], eng[i], math[i], com[i]);
	}
}
