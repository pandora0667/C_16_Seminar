// C_Express 16_3
// Creative By LEE

#include <stdio.h>
#include <stdlib.h>

#define SIZE 500 

int main()
{
	FILE *fp1, *fp2; 
	char buffer[SIZE];
	int count; 

	if((fp1 = fopen("binary.bin", "rb")) == NULL)
	{
		fprintf(stderr, "No File\n\n");
		exit(1); 
	}

	if((fp2 = fopen("binary2.bin", "wb")) == NULL)
	{
		fprintf(stderr, "No Write\n\n");
		exit(1);
	}

	while((count = fread(buffer, sizeof(char), SIZE, fp1)) != 0)
		fwrite(buffer, sizeof(char), count, fp2);
	
	fclose(fp1);
	fclose(fp2);
	return 0; 
}
		

