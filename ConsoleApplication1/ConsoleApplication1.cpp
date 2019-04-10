#include "pch.h"
#include <iostream>
#include "fstream"
#include <conio.h>
#include <clocale>
using namespace std;

struct books {
	char avtor[60];
	int page;
	int count;
	char date[64];

};

int main()
{
	const int n = 3;
	books array[n] = {};
	setlocale(LC_ALL, "rus");

	for (int z = 0; z < n; z++)
	{
		cout << "\n Имя \t";
		cin.getline(array[z].avtor, 60);
		cout << "\n Страницы \t";
		cin >> array[z].page;
		cout << "\n Тираж \t";
		cin >> array[z].count;
		cout << "\n Год издания (день,месяц год)\t";
		cin >> array[z].date;
		cin.get();
	}

	for (int i = 0; i < n; i++)
	{
		
		if (array[i].page > 150)
			cout <<"Автор книги-"<< array[i].avtor<< "  Кол-во страниц-" << array[i].page<<"  Тираж книги-"<<array[i].count<<" Дата издания-"<<array[i].date<< endl;
		else {
			cout << "Книг с количеством меньше 150 страниц не существует" << endl;
		}
		
	}
}
