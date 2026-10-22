# Домашнее задание к работе 8
# Вариант 18
# Условие задачи
Вычислите для заданного натурального n и действительного х с использованием цикла for значение cos(x) + cos(x^2) + cos(x^3) + ... + cos(x^n)
# Блок схема
<img width="476" height="655" alt="Снимок экрана 2026-10-22 191603" src="https://github.com/user-attachments/assets/ee1a79f7-3c88-42d6-98e5-cc97cf2d955e" />

# Код

#include <stdio.h>
#include <math.h>

int homework() {
	// вариант 18
	int n;
	double x, fx = 0;
	printf("вычисление функции: f(x) = cos(x) + cos(x^2) + ... + cos(x^n)\n");
	printf("введите значение х:\n");
	scanf("%lf", &x);
	printf("введите значение степени n:\n");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		fx += cos(pow(x, i));
	}
	printf("f(x) = %.4f", fx);
	return 0;
}

