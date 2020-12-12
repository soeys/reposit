#include <iostream>
#include <string>

using namespace std;
#define a 10

int main()
{
	int seats[a];
	int i, n = 0, y, no, k = 0, j;
	string answer;

	for (i = 0; i < a; i++)
	{
		seats[i] = i + 1;
	}

	for (i = 0; i < a && k < 5 && n < 5; i++)
	{
		cout << seats[i] << endl;
	}

	for (i = 0; i < a; i++)
	{
		cout << "Do you smoke? ";
		getline(cin, answer);
		if (answer == "Yes" && k <= 5)
		{

			for (; k < 5;)
			{
				y = seats[k];
				cout << "Seat #" << y << " is taken" << endl;
				k++;
				break;
			}
		}
		else if (answer == "No")
		{

			for (; n < 5; )
			{

				no = seats[n] + 5;
				cout << "Seat #" << no << " is taken" << endl;
				n++;
				break;
			}
		}


	}
	if (k == 4)
	{
		cout << "Places for smokes are already booked\n";
	}
	if (n == 4)
	{
		cout << "Places for smokes are already booked\n";
	}

	//int c = a - i;
	//cout << "There are " << c << " free seats" << endl;
	return 0;
}