/**
 * @mainpage
 * # Загальне завдання
 * 1. **Визначити** кількість слів у рядку тексту.
 * @author Semenchenko V.
 * @date 20-dec-2020
 * @version 1.0
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи структури та методів
 * оперування ним.
 *
 * @author Semenchenko V.
 * @date 20-dec-2020
 * @version 1.0
 */

#include "stdio.h"
#include "string.h"
#define N 100

void word(char str[N]);

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - Заповнення массиву строкою 
 * - Звернення до @function word
 * @return успішний код повернення з програми (0)
 */
int main() {
	
    char str[N]="";
    printf("Введите строку: ");
    fgets(str,N, stdin);
    word(str);
    return(0);
}

/**
 * @function word
 *
 * Функція для визначення всих парних додатніх чисел
 * Послідовність дій:
 * - оголошення змінних 
 *	@param res кількість слів
 * - Пошук першого пробілу (якщо такого нема, то слово 1, а программа завершується)
 * - Пошук другого пробілу (якщо він не йде наступним за першим, то кількість слів++)
 * - Цикл пошуку до тих пір, поки не завершаться пробіли
 */
void word(char str[N]){
   int res=0;
	int stop=0; //create a variable to stop the cycle (формальная переменная чтобы остановить цикл)
	char *s;
	char *f;
	char *end=strchr(str, '\0'); //end of line (конец строки)
	while(stop<1){ 
	
        s=strchr(str, '!'); //replace character '!' with spaces (заменяем символ '!' на пробелы)
        if(s==NULL){
            break;
        }
        int a = s-str;
        *(str+a)=' ';
    }
    while(stop<1){
        s=strchr(str, '/'); //replace character '/' with spaces (заменяем символ '/' на пробелы)
        if(s==NULL){
            break;
        }
        int a = s-str;
        *(str+a)=' ';
    }
    while(stop<1){
        s=strchr(str, '.'); //replace character '.' with spaces (заменяем символ '.' на пробелы)
        if(s==NULL){
            break;
        }
        int a = s-str;
        *(str+a)=' ';
    }
    while(stop<1){
        s=strchr(str, '?'); //replace character '?' with spaces (заменяем символ '?' на пробелы)
        if(s==NULL){
            break;
        }
        int a = s-str;
        *(str+a)=' ';
    }
    while(stop<1){
        s=strchr(str, ','); //replace character ',' with spaces (заменяем символ ',' на пробелы)
        if(s==NULL){
            break;
        }
        int a = s-str;
        *(str+a)=' ';
    }
	s = strchr(str, ' '); //find the first character (поиск первого символа)
	
	if(s==NULL){
		res++;
		printf("%d", res);
		return 0;
	}
		
	*(str+(s-str))='_'; //replacing a space with _, space element number - difference between the address of the space and the address of the zero element (замена пробела на _, номер елемента пробела - разница адреса пробела и адреса нулевого елемента)
		
	if(s-str!=0){ //if the space is not in the zero element of the string, then there is a word in front of it (если пробел не в нулевом елементе строки, значит перед ним есть слово)
		res++;
	}
		
	f = strchr(str, ' '); //find the second character (ищем второй пробел)
	
	while(stop<1){
		if(f==NULL){
			if(s-str!=end-str){ //if the last space is not the last element of the line, then there is one more word (если последний пробел не является последним елементом строки, то есть еще одно слово)
				res++;
				break;
			}else{
				break;
			}
		}
		if(f-s==1){
			s=f; //the first space is assigned the address of the second (первому пробелу присваиваем адрес второго)
			*(str+(s-str))='_'; //replace the first space with _ (первый пробел заменяем на _)
			f = strchr(str, ' '); //looking for the last space (ищем последний пробел)
		} else{
			s=f;//the first space is assigned the address of the second (первому пробелу присваиваем адрес второго)
			*(str+(s-str))='_';//replace the first space with _ (первый пробел заменяем на _)
			f = strchr(str, ' ');//looking for the last space (ищем последний пробел)
			res++;//word +1
		}
		
	}	
	
	printf("%d", res);
    
}

