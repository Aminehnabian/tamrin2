#include <iostream>
#include <conio.h>
#include <time.h>
#include <random>
using namespace std;
int main()
{
	int random[20];
	int n;
	cout << "please enter the N : ";
	cin >> n;

	srand(time(0));
	
	int i;
	for(i = 0; i < n; i++)
	{
		random[i] = rand() % 100;
	}
	
	int j;
	cout << "{";
	for(j = 0; j < n; j++)
	{
		cout << random[j] << " ";
	}
	cout << "}";

	return 0;
}