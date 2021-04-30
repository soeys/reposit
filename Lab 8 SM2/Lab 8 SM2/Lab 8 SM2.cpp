#include <iostream>
#include "foo.h"
using namespace std;


int main()
{
	int option;
	cout << "Выберите действие: " << endl;
	MENU
	cin >> option;
	while (true)
	{
		switch (option)
		{
		case 1:
			create();
			break;
		case 2:
			print_();
			break;
		case 3:
			search_();
			break;
		case 4:
			add_();
			break;
		case 5:
			delete_();
			break;
		case 6:
			sort();
			break;
		case 7:
			write_file();
			break;
		case 8:
			print_file();
			break;
		case 9:
			exit(0);
			break;
		}
	}
}
