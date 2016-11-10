#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

int main(void)
{
	FILE *fp1, *fp2;

	char file1[SIZE], file2[SIZE];
	char buffer[SIZE];

	printf("파일 이름: ");
	scanf("%s", file1);
							
	printf("파일 이름: ");
	scanf("%s", file2);
									
	if( (fp1 = fopen(file1, "r")) == NULL )
	{
		fprintf(stderr,"파일 %s을 열 수 없습니다.\n", file1);
		exit(1);
	}
										
	if( (fp2 = fopen(file2, "w")) == NULL )
	{
		fprintf(stderr,"파일 %s을 열 수 없습니다.\n", file2);
		exit(1);
	}		

	while( fgets(buffer, SIZE, fp1) != NULL ) 
	{
		char *pos = strtok(buffer, " ");

		while(pos != NULL) 
		{
			if( strcmp("Android" , pos) == 0 )
				fprintf(fp2, "안드로이드 ");
			else
				fprintf(fp2, "%s ", pos);

			pos = strtok(NULL, " ");
		}
	}

	fclose(fp1);
	fclose(fp2);
														
	return 0;
}
