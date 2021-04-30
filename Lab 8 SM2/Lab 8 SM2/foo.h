#pragma once
#ifndef _FOO_
#define _FOO_
#define MENU 	cout << "1. Создание списка\n2. Печать списка.\n3. Поиск по критерию.\n4. Добавление элемента.\n5. Удаление  любого элемента.\n6. Сортировка.\n7. Запись нового списка в файл.\n8. Печать нового списка из файла.\n9. Выход из программы\n> ";
#define NULL 0
#define N 3

void create();
void print_();
void search_();
void add_();
void delete_();
void sort();
void write_file();
void print_file();

#endif
