/**
 * @mainpage
 * # Загальне завдання
 * 1. Дано масив з N*N цілих чисел. У кожному рядку **знайти** кількість парних додатних чисел.
 * Отримані результати записати в одновимірний масив. Використати функції введення та виведення.
 * @author Semenchenko V.
 * @date 9-mar-2021
 * @version 1.0
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи структури та методів
 * оперування ним.
 *
 * @author Semenchenko V.
 * @date 9-mar-2021
 * @version 1.0
 */

#include "stdio.h"


void cycle(int **arr, int N); //task execution function prototype 
void filling(int **arr, int N); //array fill function prototype 
void output (int **arr, int N); //output function prototype
void writeread(){
char massword[50]="";
	char word="";
	printf("");
	gets(massword);
	printf("Введите какое-то слово или предложение: ");
	gets(massword);
	printf("Введите какой-то символ:");
	word=getc(stdin);
	printf("Ваше слово или предложение: ");
	puts(massword);
	printf("Ваш символ: ");
	putc(word,stdout);
	printf("\n");
	printf("\n");
}

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - Звернення до @function filling
 * - Звернення до @function cycle
 * @return успішний код повернення з програми (0)
 */
int main() {
	char mas[]="\nХотите проверить как работают функции write и read?(1-да, 0-нет):";
	write(1,&mas,sizeof(mas));	
	char check='1';
	read(0,&check,1);
	if(check=='1'){
		writeread();	
	}
	int n;
	printf ( "\nВведите размер матрицы:");
	scanf ("%d", &n);
	int N=n;
	int **arr=(int**)malloc(N* sizeof(int*)); //create a two dimensional array 
	for (  int i=0; i < N; i++){
	arr[i] = (int*)malloc(N* sizeof(int*));
	}
	int *arr_res=(int)malloc(N* sizeof(int)); //create a two dimensional array 
	for (int i=0;i<N;i++){	
	filling(arr, N); //fill the array with numbers 
	output(arr,N);
	cycle(arr, N); //perform a task 
	return 0;
	for (int i=0;i<N;i++){
	free (arr[i]);
	}
	free (arr);
	for (int i=0;i<N;i++){
	free (arr_res[i]);
	}
	free(arr_res);
}
}

/**
 * @function filling
 *
 * Функція для заповнення вхідного массиву числами
 */
void filling(int **arr, int N){ 
	srand(time(0)); 
	for(int i=0;i<N;i++){ 
	for(int j=0;j<N;j++){
		*(*(arr+i)+j)=rand()%20-10; // from -10 tо 10 
	}
	}
}
/**
 * @function output
 * Функція для виведення масиву чисел
 */
void output(int **arr, int N){ 
	for(int i=0;i<N;i++){ 
	for(int j=0;j<N;j++){
		printf ("%d\t", arr[i][j]);
	}
	printf ("\n");
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
void cycle(int **arr, int N){ //passing an array to a function (передаем массивы в нашу функцию)
	int a=0;
	int result[10]={0};
	int *p_result=&result[0];
	for(int i=0;i<N;i++){ //iteration over all array elements (перебрать все елементы массива)
		for(int j=0;j<N;j++){
		if(*(*(arr+i)+j)%2==0 && *(*(arr+i)+j)>0){  
			*(p_result+a+1)=*(*(arr+i)+j);
			 //write numbers into array elements starting from the first (начинаяя с первого елемента массива выписываем числа) 
			a++; //amound of numbers (количество чисел)
			*(p_result)=a; //in the zero element os the array write the number of peired numbers (в нулевой елемент записываем количество парных чисел)
		}
	}
	}
	for(int i=0;*(p_result+i)!=0;i++){ // output to the first zero (вывод до первого нуля)
		printf("%d ", *(p_result+i));
	}
} 
