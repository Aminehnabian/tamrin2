#include <iostream>

using namespace std;
int main()
{
	int num;
	cout << "please enter the length of the snake : " ;
	cin >> num;
	
	int i;
	for(i = 0; i < num; i++)
	{
		if(i % 2 == 0)
		{
			cout << "*";
		}
		else
		{
			cout << "#";
		}
	}
	return 0;
}