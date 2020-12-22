/**
 * @mainpage
 * # Загальне завдання
 * 1. **Визначити**, чи є задане число досконалим
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

/**
 * @function findivisors
 *
 * Функція для визначення чи є задане число простим
 * Послідовність дій:
 * - Цикл від 0 до n:
 * 	- Якщо n % i=0, то sum = sum + i;
 * - Якщо sum = n, то ideal = 1;
 * @return успішний код повернення результату роботи функції (ideal)
 */
 
int findivisors (int n);

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - оголошення змінних 
 *	@param а початкове число
 * - Звернення до @function findivisors
 * @return успішний код повернення з програми (0)
 */
 
  int main(){
  	srand (time(0));
  	int a = rand()%10, ideal = 0;
  	ideal = findivisors(a);
  	printf("%d, %d", ideal, a);
  return 0;
  } 
  int findivisors(int n){
int ideal = 0, sum = 0;
	for (int i=1; i<n; i++){
	if(n%i==0){
	sum = sum + i;
	} else { continue;
	}
	}
	if (sum==n){
	ideal = 1;
}
  return ideal;
}

