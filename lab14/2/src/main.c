#include <stdio.h>
#define N 100


long int fs(FILE*pointer){		//Function for counting size
	long int position;
	long int size;
	position = ftell(pointer);
	fseek(pointer, 0L, SEEK_END);
	size = ftell(pointer);
	fseek (pointer,position,SEEK_SET);
	return (size);
}

int main () {
	FILE*pointer;
	pointer = fopen("str.txt", "a+");	//Creating a file
	char str[N] = {0};
	
		if (pointer != NULL)
			{
			printf("\nФайл создан успешно\n");	//Work with user
			printf ("Введите строку:");
			gets(str);
			fprintf (pointer, "%s", str);	
			printf("Размер файла: %ld bytes\n ", fs(pointer));	//Final result
			fclose (pointer);
		}
		else 
		{
			printf ("Увы, файл не был создан\n");
		}
	
return 0;
}
