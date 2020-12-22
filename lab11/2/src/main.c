/**
 * @mainpage
 * # Загальне завдання
 * 1. Дано масив з N*N цілих чисел. У кожному рядку **знайти** кідькість парних додатних чисел.
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

#define N 5
void cycle(int arr[][N], int arr_res[]); //task execution function prototype (прототип функции выполнения задания)

void filling(int arr[][N]); //array fill function prototype (прототип функции заполнения массива)

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - Звернення до @function filling
 * - Звернення до @function cycle
 * @return успішний код повернення з програми (0)
 */
int main() {
	int arr[N][N]; //create a two dimensional array (создаем массив наших чисел)
	int arr_res[N*N]={0}; //create an array for the result (создаем массив для результата)
	filling(arr); //fill the array with random numbers (заполняем массив случайными числами)
	cycle(arr, arr_res); //perform a task (выполнение задания)
	return 0;
}

/**
 * @function filling
 *
 * Функція для заповнення вхідного массиву псевдовипадковими числами
 */
void filling(int arr[][N]){
	srand(time(0)); 
	for(int i=0;i<N;i++){ 
	for(int j=0;j<N;j++){
		*(*(arr+i)+j)=rand()%20-10; // from -10 tо 10
	}
	}
}

/**
 * @function cycle
 *
 * Функція для визначення всих парних додатніх чисел
 * Послідовність дій:
 * - оголошення змінних 
 *	@param а кількість парних додатніх чисел
 * - Цикл для перевірки кожного елементу двовимірного массиву:
 * 	- Якщо число додатне і парне - а++ і число записується у одновимірний массив
 */
void cycle(int arr[][N], int arr_res[]){ //passing an array to a function (передаем массивы в нашу функцию)
	int a=0;
	for(int i=0;i<N;i++){ //iteration over all array elements (перебрать все елементы массива)
	for(int j=0;j<N;j++){
		if(*(*(arr+i)+j)%2==0 && *(*(arr+i)+j)>0){  
			*(arr_res+a+1)=*(*(arr+i)+j); //write numbers into array elements starting from the first (начинаяя с первого елемента массива выписываем числа) 
			a++; //amound of numbers (количество чисел)
			*(arr_res)=a; //in the zero element os the array write the number of peired numbers (в нулевой елемент записываем количество парных чисел)
		}
	}
	}
	for(int i=0;*(arr_res+i)!=0;i++){ // output to the first zero (вывод до первого нуля)
		printf("%d ", *(arr_res+i));
	}
}
