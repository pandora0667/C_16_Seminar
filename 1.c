//Seminar 16_1 
//Creative By LEE 

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

#define NAME_SIZE 10
#define BUFFER_SIZE 500

int main()
{
	FILE *fp1, *fp2;
	char fName1[NAME_SIZE], fName2[NAME_SIZE]; 
	char bufferCompare1[BUFFER_SIZE];
	char bufferCompare2[BUFFER_SIZE];

	printf("첫번째 파일 이름 : ");
	scanf("%s", fName1);
	printf("두번쩨 파일 이름 : ");
	scanf("%s", fName2);

	if((fp1 = fopen(fName1, "r")) == NULL)
	{
		fprintf(stderr, "No %s file!!\n\n", fName1); 
		exit(1);
	}

	if((fp2 = fopen(fName2,"r")) == NULL)
	{
		fprintf(stderr, "No %s file\n\n", fName2); 
		exit(1);
	}

	fgets(bufferCompare1, BUFFER_SIZE, fp1); 
	fgets(bufferCompare2, BUFFER_SIZE, fp2);

	if(!strcmp(bufferCompare1, bufferCompare2))
		printf("%s와 %s는 동일한 파일입니다.\n", fName1, fName2 );
	else 
		printf("%s와 %s는 다른  파일입니다.\n", fName1, fName2 );

	return 0;
}
