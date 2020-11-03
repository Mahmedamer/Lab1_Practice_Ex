#include<iostream>
using namespace std;
void CalcMaxMinEvens(int Arr[], int& MAX, int* MIN);
int main()
{
	int A[10];
	for (int i = 0;i < 10;i++)
	{
		cin >> A[i];
	}
	int max,min;
	CalcMaxMinEvens(A, max, &min);
	cout << "Max of Evens = " << max << endl;
	cout << "Min of Evens = " << min << endl;
}
void CalcMaxMinEvens(int Arr[], int& MAX, int* MIN)
{
	MAX = 0;
	*MIN = 0;
	for (int i = 0;i < 10;i++)
	{
		if (Arr[i] % 2 == 0)
		{
			if (*MIN == 0)
			{
				*MIN = Arr[i];
			}
			if (Arr[i] > MAX)
			{
				MAX = Arr[i];
			}
			if (Arr[i] < *MIN)
			{
				*MIN = Arr[i];
			}
		}
	}
}