#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int kor[10], eng[10], math[10], com[10]; //과목 배열로 성적입력받기 
	char *name[10];//[20]; //이름 받기
	char buf[512];
	int total[10]; // 성적 합 받기 
	double average[10]; // 성적 평균 
	int i, j, k;
	
	for(i = 0; i<10; i++)
	{
		printf("이름 : "); scanf("%s", buf); 

		for(k = 0;; k++)
		{
			if(buf[k] == 0) break; // null만나면 탈출해라
		}
		name[i] = (char*)malloc(k+1); //stack에 있는걸 heap에다가 저장해라 why? 스택에 있는건 날라감.
		for(k = 0;; k++)
		{
			*(name[i] + k) = buf[k];
			if(buf[k] == 0) break; // null만나면 탈출해라
		}
	}
	for(i=0; i<10; i++)
	{
		printf("%s\n", name[i]); // heap에 있는 name을 출력해라
	}
	getch();
}
