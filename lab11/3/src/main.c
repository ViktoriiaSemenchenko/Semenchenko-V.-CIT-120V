/**
 * @mainpage
 * # Загальне завдання
 * 1. Дано масив з N*N речовинних чисел. У кожному стовпчику **знайти** найбільше число.
 * Отримані результати записати в одновимірний масив.
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
#define N 10
void cycle(double arr[][N], double arr_res[]); 

void filling(double arr[][N]);

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - Звернення до @function filling
 * - Звернення до @function cycle
 * @return успішний код повернення з програми (0)
 */
int main() {
	double arr[N][N]; 
	double arr_res[N*N]={0}; 
	filling(arr);
	cycle(arr, arr_res);
	return 0;
}

/**
 * @function filling
 *
 * Функція для заповнення вхідного массиву псевдовипадковими числами
 */
void filling(double arr[][N]){
	srand(time(0));
	for(int i=0;i<N;i++){
	for(int j=0;j<N;j++){
		*(*(arr+i)+j)=(rand()%100)/10.0; 
	}
	}
}

/**
 * @function cycle
 *
 * Функція для визначення найбільшого числа у стовпчику
 * Послідовність дій:
 * - оголошення змінних 
 *	@param temp найбільше число стовпця
 * - Цикл для перевірки кожного елементу двовимірного массиву:
 * 	- Якщо наступний елемент стовпця більше за попередній, то temp приймає це значення 
 */
void cycle(double arr[][N], double arr_res[]){
	double temp;
	for(int j=0;j<N;j++){ //cycle to iterate over a column (цикл для перебора столбцов) 
	temp=*(*(arr)+j); //write the zero element of the column (записываем нулевой елемент каждого столбца)
	for(int i=1;i<N;i++){ //cycle to iterate over a column element  (цикл для перебора елемента столбца)
		if(temp<*(*(arr+i)+j)){ //cycle over the elements of the column and write the largest number to the zero element of the column (самое больше цисло будет записано в нулевой елемент столбца)
			temp=*(*(arr+i)+j);
		}
	}
	*(arr_res+j)=temp; //write the largest number  of each of the columns into the result array (в массив результата мы записываем самое большое число житого столбца)
	}
	for(int i=0;*(arr_res+i)!=0;i++){ 
		printf("%f ", *(arr_res+i));
	}
}
