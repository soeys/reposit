#include <iostream>
#include <string>

using namespace std;
#define a 100

int main()
{
	int seats[a];
	int i, n = 0, y, no, k = 0, j;
	string answer;

	for (i = 0; i < 100; i++)
	{
		seats[i] = i + 1;
	}

	for (i = 0; i < 10 ; )
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
				i++;
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
				i++;
				break;
			}
		}

		if (k > 4)
		{
			cout << "Places for  smokes are already booked\n";
			continue;
		}
		if (n > 4)
		{
			cout << "Places for non smokes are already booked\n";
			continue;
		}
		if (n + k > 9)
		{
			cout << "All places are already booked";
			break;
		}
	}
	return 0;
}