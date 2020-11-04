#include<iostream>
using namespace std;
#define N 7
void ReorderMe(int Arr[], int n);
int main()
{
	int A[10];
	for (int i = 0;i < N;i++)
	{
		cin >> A[i];
	}
	cout << "Reorder Value " << A[0] <<endl;
	ReorderMe(A, N);
	cout << "Array after reorder: " ;
	for (int i = 0;i < N;i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}
void ReorderMe(int Arr[], int n)
{
	int value = Arr[0];
	int* B = new int [n];
	for (int i = 0; i < n; i++)
	{
		B[i] = Arr[i];
	}
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (B[i] < value)
		{
			Arr[j] = B[i];
			j++;
		}
	}
	Arr[j++] = value;
	for (int i = 0; i < n; i++)
	{
		if (B[i] > value)
		{
			Arr[j] = B[i];
			j++;
		}
	}
	delete[] B;
}