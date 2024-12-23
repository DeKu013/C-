#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int hr = 0, min = 0, sec = 0;
	int h1 = 0, m1 = 0, s1 = 0;

	cout << "Enter the time in the format:  HH : MM : SS" << endl;
	cin >> hr >> min >> sec;

	cout << "Set the alarm time in the format: HH : MM : SS" << endl;
	cin >> h1 >> m1 >> s1;

	if (hr < 24 && min < 60 && sec < 60)
	{
	start:
		for (hr; hr < 24; hr++)
		{
			for (min; min < 60; min++)
			{
				for (sec; sec < 60; sec++)
				{
					system("CLS");
					
					cout << hr << ":" << min << ":" << sec;
					
					if (hr < 12)								//AM/PM
						cout << "PM" << endl;
					else
						cout << "AM" << endl;

					if (hr == h1 && min == m1 && sec == s1)		//alarm
						cout << "\a\a\a\a\a\a\a\a\a\a";

					for (double i = 0; i < 99999999; i++)		//hold time loop for 1 sec
					{
						i++;
						i--;
					}
				}
				sec = 0;
			}
			min = 0;
		}
		hr = 0;

		goto start;
	}
	else
		cout << "Enter the correct time format in: HH : MM : SS";

	return 0;
}