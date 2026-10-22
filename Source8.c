#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "RUS");
	task_0();
	task_1();
	task_1A();
	task_2();
	homework();
	return 0;
}

int task_0() {
	int count;
	char ch1, ch2;
	printf("введите количество символов и два вида символов (пример: 10 * -)\n");
	scanf("%d %c %c", &count, &ch1, &ch2);
	putchar('+');
	for (int start = 1; start <= count; start++) {
		if (start <= count / 2) {
			putchar(ch1);
			putchar('!');
		}
		else {
			putchar(ch2);
			putchar('!');
		}
	}
	putchar('+');
	return 0;
}

int task_1() {
	int m, n, s = 0, k = 1;
	printf("введите значения m и n:\n");
	scanf("%d %d", &m, &n);
	if (m > n) {
		for (int i = m; i >= n; i--) {
			s += i;
			printf("выполенено %d раз\n", k);
			k++;
		}
	}
	else {
		for (int i = m; i <= n; i++) {
			s += i;
			printf("выполенено %d раз\n", k);
			k++;
		}
	}
	printf("результат %d", s);
	return 0;
}

int task_1A() {
	int n;
	printf("введите степень n:\n");
	scanf("%d", &n);
	printf("таблица степеней\n");
	for (int i = 0; i <= n; i++) {
		long long res = (long long)pow(2, i);
		printf("2^%d = %10lld\n", i, res);
	}
	long long max_res = (long long)pow(2, n);
	double kb = (double)max_res / 1024.0;
	printf("результат: %.1f К\n", kb);
	return 0;
}

int task_2() {
	// вариант 9
	double start_x = 2.0, end_x = 4.0, step, x, fx;
	printf("функция: y = x^3 + 3*x^2 - 3 \n");
	printf("интервал: [2; 4] \n");
	printf("введите шаг табуляции: \n");
	scanf("%lf", &step);
	printf("\n-----------------\n");
	printf("|   x   |   f(x)   |\n");
	printf("-----------------\n");
	for (x = start_x; x <= end_x + 0.001; x += step) {
		fx = pow(x, 3) + 3 * pow(x, 2) - 3;
		printf("| %5.2f | %6.2f |\n", x, fx);

	}
	printf("-----------------\n");
	return 0;
}

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