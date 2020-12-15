#include <stdio.h>


int main(void) {
	char c; /* код состояния */
	char f; /* признак ошибки */
	char b; /* признак занятости */
	unsigned char n; /* количество байт */
	unsigned int UnitStateWord; /* слово состояния */
	 /* ввод слова состояния устройства */
	printf("Введите cлово состояния устройства \n");
	printf("(16-ричное число от 0 до 0xFFFF) >");
	scanf_s("%x", &UnitStateWord);
	/* Выделение составных частей */
	c = (UnitStateWord >> 11) & 0x1F;
	f = (UnitStateWord >> 9) & 1;
	b = (UnitStateWord >> 8) & 1;
	n = UnitStateWord & 0xFF;
	/* вывод результатов */
	putchar('\n');
	printf("Код состояния                  = %d\n", c);
	printf("Признак ошибки             = %d\n", f);
	printf("Признак занятости          = %d\n", b);
	printf("Количество переданных байт = %d\n", n);
	return 0;
}