# Загальне завдання

1. Знайти детермінант матриці, якщо це можливо.
2. Використовувати взаємодію з файлом.
**ВИКОНАННЯ РОБОТИ**
3.1 Функціональне призначення:
	Програма призначена для визначення та підрахунку детермінанту матриці.
3.2 Написання коду програми:
```
void datafile (int num1, int num2){
	char fname [100];
	printf ("Please, enter name for file: ");
	gets (fname);
	FILE *fp; //покажчик на файл
	fp = fopen(fname, "r"); //відкриваємо файл для читання
	fscanf(fp, "%d %d", &num1, &num2);
	if(num1 != num2)
  	{
    	fclose(fp); //завершуємо роботу з файлом
    	printf("\nError: The determinant cannot be found. Your matrix must be square\n\n");
	exit(1);
	/*інакше знаходимо детермінант матриці*/
	}else{
	printf ("File was created");
	int N = num1;
	int mas[size][size] = {0};
	determinant(mas, N, fp);
	fclose(fp); //завершуємо роботу з файлом
	}
}
```
	
![](./doc/блок-схема.png)

2.4 Блок-схема до головної функції.

![](./doc/result.png)

2.5 Результат виконання програми у консолі.

Висновок: під час виконання лабораторної роботи я закріпила навички взаємодії з файлом.
