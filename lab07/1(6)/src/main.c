/**
 * @mainpage
 * # Загальне завдання
 * 1. **Визначити** кількість голосних букв у слові
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
 
#include <stdio.h>

#define n 22

int cycle(char arr[n]);

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - оголошення змінних 
 *	@param аrr слово у якому будемо рахувати кількість голосних
 * - Звернення до @function cycle
 * @return успішний код повернення з програми (0)
 */
 
int main (){
 char arr[n] = "viktoriia  viktoriia"; 
 int rez=cycle(arr); 
 return 0;
 }

/**
 * @function cycle
 *
 * Функція для визначення чи є задане число простим
 * Послідовність дій:
 * - оголошення змінних 
 *	@param v кількість голосних
 * - Цикл до тих пір поки не завершаться символи:
 * 	- Якщо символ = голосна літера - v++
 */
 
int cycle(char arr[n]){
int i=0, v=0 ;
while (arr[i] != '\0') {    // create a cycle for counting vowels
        switch (arr [i]){
        case 'a': v++; break;
        case 'e': v++; break;
        case 'i': v++; break;
        case 'o': v++; break;
        case 'u': v++; break;
        case 'y': v++; break;
 }
 i++;
 }
printf("%d", v);
return v;
}
