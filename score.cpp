#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int kor[10], eng[10], math[10], com[10]; //���� �迭�� �����Է¹ޱ� 
	char *name[10];//[20]; //�̸� �ޱ�
	char buf[512];
	int total[10]; // ���� �� �ޱ� 
	double average[10]; // ���� ��� 
	int i, j, k;
	
	for(i = 0; i<10; i++)
	{
		printf("�̸� : "); scanf("%s", buf); 

		for(k = 0;; k++)
		{
			if(buf[k] == 0) break; // null������ Ż���ض�
		}
		name[i] = (char*)malloc(k+1); //stack�� �ִ°� heap���ٰ� �����ض� why? ���ÿ� �ִ°� ����.
		for(k = 0;; k++)
		{
			*(name[i] + k) = buf[k];
			if(buf[k] == 0) break; // null������ Ż���ض�
		}
	}
	for(i=0; i<10; i++)
	{
		printf("%s\n", name[i]); // heap�� �ִ� name�� ����ض�
	}
	getch();
}
