#include<iostream>
using namespace std;
#define N 9
bool Reverse(int Arr[], int n);
int main()
{
	int A[10];
	for (int i = 0;i < N;i++)
	{
		cin >> A[i];
	}
	if (Reverse(A, N))
	{
		cout << "Array is symmetric" << endl;
	}
	else 
	{
		cout << "Array is NOT symmetric" << endl;
	}
	cout << "Array after reverse: " << endl;
	for (int i = 0;i < N;i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}
bool Reverse(int Arr[], int n)
{
	bool flag = true;
	for (int i = 0; i < (n/2); i++)
	{
		if (Arr[i] != Arr[n-1-i])
		{
			flag = false;
			int temp = Arr[i];
			Arr[i] = Arr[n - 1 - i];
			Arr[n - 1 - i] = temp;
		}
	}
	return flag;
}