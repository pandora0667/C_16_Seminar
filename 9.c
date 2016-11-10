//C_express 15_9 
//Creative By LEE 

#include <stdio.h>
#include <stdlib.h>

#define SIZE  256

int main(int argc, char *argv[])
{
	FILE *fp1, *fp2, *fp3;
	char buffer[SIZE];

	if(argc != 4)
	{
		printf("형식이 맞지 않습니다. 파일이름1, 파일이름2, 파일이름3 이 필요합니다.\n");
		exit(1);
	}

	if((fp1 = fopen(argv[1], "r")) == NULL || (fp2 = fopen(argv[2], "r")) == NULL || (fp3 = fopen(argv[3], "a")) == NULL)
	{
		fprintf(stderr, "파일을 정상적으로 열수가 없습니다. 확인해 주세요.\n\n");
		exit(1);
	}

	while( fgets(buffer, SIZE, fp1) != NULL )
		fputs(buffer, fp3);

	while( fgets(buffer, SIZE, fp2) != NULL )
		fputs(buffer, fp3);
	
	printf("%s와 %s를 합하여 %s를 만들었습니다. \n\n", argv[1], argv[2], argv[3]);
	return 0; 
}
