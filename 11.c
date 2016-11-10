//C_express 16_11
//Creative By LEE 

#include <stdio.h>
#include <string.h>

#define SIZE 100

typedef struct BOOK { 
	char title[SIZE];
	char writer[SIZE];
	char publisher[SIZE];
} BOOK;

void addLibrary(BOOK library[], int count); // 기록
void printMenu(); // 메뉴 
void searchLibrary(BOOK library[], int count); // 검색 
void printLibrary(BOOK library[], int count); // 출력 

int main()
{
	int num, count = 0; 
	BOOK library[SIZE]; 

	while(1)
	{
		printMenu();
		scanf("%d", num); 

		switch(num)
		{
			case 1 :
				{
					addLibrary(library, count); 
					count++; 
					break; 
				}

			case 2 :
				{
					printLibrary(library, count); 
					break;
				}

			case 3 :
				{
					searchLibrary(library, count); 
					break; 
				}

			case 4 : 
				return -1; 

			default :
				printf("다시 입력하세요!!\n\n"); 
		}
	}

	return 0; 
} 

void addLibrary(BOOK library[], int count) // 기록
{
	int type; 
	fflush(stdin); 

	printf(" 도서 이름 : "); 
	scanf("%s", library[count].title); 

	printf(" 저자 : "); 
	scanf("%s", library[count].writer); 

	printf(" 출판사 : "); 
	scanf("%s", library[count].publisher); 
}

void printMenu() // 메뉴 
{
	printf("\n\n----------도서관리 프로그램 v1.0----------\n\n");
	printf(" 1. 추가\n 2. 출력\n 3. 검색\n "); 
}

void searchLibrary(BOOK library[], int count) // 검색 
{
	int i; 
	char tmpTitle[SIZE];

	fflush(stdin); 

	printf("제목 : "); 
	scanf("%s", tmpTitle); 

	for(i=0; i<count; i++)
	{
		if(strcmp(library[i].title, tmpTitle) == 0)
			printf("출판사는 %s \n", library[i].publisher);  
	}
	
	printf("존재하지 않는 도서 입니다.\n");
}
void printLibrary(BOOK library[], int count) // 출력
{
	int i; 

	fflush(stdin);

	for(i=0; i<count; i++)
	{
		printf("제목 : %s\n", library[i].title);
		printf("저자 : %s\n", library[i].writer);
		printf("출판사 : %s\n", library[i].publisher);
	}
}
