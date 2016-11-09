//C_Express 15_7
//Creative By LEE 

#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main()
{
	FILE *fp;
	char fName[20];
	char string[SIZE];

	printf("생성할 파일의 이름을 입력해 주세요!! : ");
	scanf("%s" , fName);

	if((fp = fopen(fName,"w")) == NULL)
	{
		fprintf(stderr, "%s 파일을 생성할 수 없습니다.\n\n");
		exit(1); 
	}

	while(1)
	{
		scanf("%s", string); 
		fprintf(fp, "%s", string);
	
		if(fgets(string, SIZE, fp) == 0)
			break;
	}

	fclose(fp);

	return 0;
}
