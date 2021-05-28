#ifndef XT
#define XT

#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
#include <time.h>
#include <conio.h>
#include <malloc.h>
#include <stdio.h>

using namespace std;

struct culture {                   //Ñòðóêòóðà äëÿ äàííûõ
	char name[10];                 /*èìÿ*/
	int size;            /*äèàìåòð*/
};

struct Tlist {       //Ñòðóêòóðà äëÿ ïåðåäà÷è äàííûõ è ïåðåìåùåíèÿ 
	culture data;
	struct Tlist* next;    //óêàçàòåëü íà ñëåäóþùèé ýëåìåíò
	struct Tlist* prev;   //óêàçàòåëü íà ïðåäûäóùèé ýëåìåíò
};


void listCreation(Tlist*& head, Tlist*& tail, int& count, int point, int size);  //Ôóíêöèÿ çàïîëíåíèÿ ñïèñêà
void listPrintFromHead(Tlist* head);              //Ôóíêöèÿ âûâîäà ñ íà÷àëà
void listPrintFromTail(Tlist* tail);             //Ôóíêöèÿ âûâîäà ñ êîíöà
int searchByParamFromHead(Tlist* head, int count);   //Ôóíêöèÿ ïîñèêà ñ íà÷àëà
int searchByParamFromTail(Tlist* tail, int count);  //Ôóíêöèÿ ïîñèêà ñ êîíöà
void addToList(Tlist*& head, int& count, int poz);    //Äîáàâèòü â ñïèñîê
void deleteFromList(Tlist*& head, int& count, int poz);     //Óäàëèòü èç ñïèñêà
void listSorting(Tlist* head, int count);              //Ñîðòèðîâêà
void createFile(Tlist* head, int count);             //Ñîçäàíèå ôàéëà
void createListFromFile(Tlist*& head, Tlist*& tail);     //Ñîçäàíèå ñïèñêà èç ôàéëà

#endif