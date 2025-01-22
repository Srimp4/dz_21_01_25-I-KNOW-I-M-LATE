#include <iostream>
using namespace std;
int main()
{
	//ughhhhh fuck it i'll do it later, [comment left 21.01.25]
	//sry that i'm late, i was a bit more depressed than usual
	int min = INT_MAX;
	int	max = INT_MIN;
	int const size = 10;
	int arr[size];
	int i = 0;
	while (i < size)
	{
		arr[i] = rand() % 10 - 5;
		i++;
	}
	i = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "\nmin: " << min << "\nmax: " << max;
	//task 1 done, yes i ctrl+c ctrl+ved previos code
	//now how the fuck do i do this one?
	int const size2 = 100;
	int arr2[size2];
	for (int i = 0; i < size2; i++)
	{
		arr2[i] = rand() % 20;
	}
	cout << "\ninput a number between 0 and a 100\n";
	int choise;
	cin >> choise;
	int summ = 0;
	for (int i = 0; i < size2; i++)
	{
		if (arr2[i] < choise)
		{
			summ = summ + arr2[i];
		}
		else
		{
			continue;
		}
	}
	cout << summ;
	//holy shit it works, task 2 done
	int const size3 = 13;
	int input1, input2;
	int months[size3];
	cout << "\ninput the company profit month by month\n";
	for (int i = 1; i < size3; i++)
	{
		cin >> months[i];
	}
	cout << "now input the time period in wich you want me to find months with maximum andd minimum profits\n";
	cin >> input1 >> input2;
	int min_month, max_month;
	int min2 = INT_MAX;
	int	max2 = INT_MIN;
	for (int i = 1; i < size3; i++)
	{
		if (input1 < months[i] && months[i] < input2)//WHY WON'T YOU WORK ASSHOLE?!
		{
			if (arr[i] < min2)
			{
				max_month = i;
			}
			if (arr[i] > max2)
			{
				min_month = i;
			}
		}
		else
		{
			continue;
		}
	}
	cout << max_month << "\n" << min_month;
	//uhhh it semi? works, dunno how to fix it, i'm too stoopid
	return 0;
}
