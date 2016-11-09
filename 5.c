//C_express 16_5
//Creative By LEE 

#include <stdio.h>
#include <stdlib.h>

struct student { 
	char name[20]; 
	int korean, math, english;
	double average;
}; 

int main()
{
	FILE *fp1, *fp2; 

	struct student score;
	int total; 


	if((fp1 = fopen("studentScore.txt", "r")) == NULL) 
	{
		fprintf(stderr, "No studentScore File!!\n\n"); 
		exit(1);
	}

	if((fp2 = fopen("studentAverage.txt", "w")) == NULL) 
	{
		fprintf(stderr, "파일 생성 실패\n\n"); 
		exit(1);
	}

	while(!feof(fp1))
	{
		fscanf(fp1, "%s %d %d %d", score.name, &score.korean, &score.math, &score.english);
		total = (score.korean + score.math + score.english); 

		score.average = (double)(total/3);
		fprintf(fp2, "%s %.2f \n", score.name, score.average); 
	}

	return 0;
} 

