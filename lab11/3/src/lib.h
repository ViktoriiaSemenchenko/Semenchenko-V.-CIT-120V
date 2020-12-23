/**
 * @file lib.h
 * @brief Файл з демонстрацією роботи структури та методів
 * оперування ним.
 *
 * @author Yaylo D.
 * @date 13-dec-2020
 * @version 1.0
 */

#ifndef LAB13_LIB_H
#define LAB13_LIB_H

#include "stdio.h"
#include "stdarg.h"
#include "string.h"

/**
 * @function task
 *
 * Послідовність дій:
 * - оголошеня змінних 
 *	 @param mas Масив вказівників на числа, 
 * 	        які передаються за допомогою варівтивної функції
 *	 @param masr Масив масивів вказівників з строками,
 *	 	які утворюють безперервні послідовності чисел з не-зменшуваними значеннями.
 * - Заповнення масиву mas за допомогою варівтивної функції
 * - Перевірка на виконання умови
 * - Виписування всих ділянок, які утворюють безперервні послідовності 
 *   чисел з не-зменшуваними значеннями.
 * - Знаходження найбільшої, за сумою всих елементів, ділянки
 * - Вивід на екран результату виконання операцій
 */
void task(char str[],int N);

/**
 * @function print
 *
 * Послідовність дій:
 */
 
void print(char * str_res, double * res, int N);


#endif