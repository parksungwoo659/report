#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#define _CRT_SECURE_NO_WARNINGS

void report(int n);
int kor[10], eng[10], math[10], com[10]; //과목 배열로 성적입력받기 1
char *name[10];//[20]; //이름 받기
 
int main(void)
{
	int i, j, k;
	char buf[512];
	int total[10]; // 성적 합 받기 
	double average[10]; // 성적 평균 
	
	for(i = 0; i<10; i++) //입력 
	{
		printf("이름 : "); scanf("%s", buf); 

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
		printf("국어 : "); scanf("%d", &kor[i]);
		printf("영어 : "); scanf("%d", &eng[i]);
		printf("수학 : "); scanf("%d", &math[i]);
		printf("컴퓨터 : "); scanf("%d", &com[i]);
	}
	for(i=0; i<10; i++)
	{
		printf("%s\n", name[i]);
	}
	report(10); //출력 
	getch();
}

void report(int n)
{
	for(int i = 0; i<n; i++)
	{
		printf("[%s]: %5d %5d %5d %5d\n", name[i], kor[i], eng[i], math[i], com[i]);
	}
}
