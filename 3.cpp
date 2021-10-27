#include <iostream>
#include <conio.h>
void bubblesort(const int A[], int n);
using namespace std;
int main()
{
	int n;
	cout << "please enter the number : ";
	cin >> n;
	
	int A[100];
	cout << "please enter the array : " << "\n";
	int i;
	for(i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	
	cout << "\n";
	
	bubblesort(A,n);

	return 0;
}

void bubblesort(const int A[], int n)
{
	
	int i, j;
	int sw = 0;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n - 1; j++)
		{
			if(A[j] > A[j + 1])
			{
				sw = 1;
			}
		}
		if(!sw) break;
	}

	if(sw == 1)
		cout << "no";
	else 
		cout << "yes";
}

