#include<iostream>
using namespace std;
#define N 12
void Reorder(int A[], int B[] , int x);
int main()
{
	int X;
	cin >> X;
	int Arr1[N], Arr2[N];
	for (int i = 0; i < N; i++)
	{
		cin >> Arr1[i];
	}
	Reorder(Arr1, Arr2 , X);
	cout << "Array before reorder: " << endl;
	for (int i = 0; i < N; i++)
	{
		cout<< Arr1[i] <<" ";
	}
	cout << endl;
	cout << "Reorder Value: " << X << endl;
	cout << "Arrays after reorder: " << endl;
	cout << "Arr1: ";
	for (int i = 0; i < N; i++)
	{
		cout << Arr1[i] << " ";
	}
	cout << endl;
	cout << "Arr2: ";
	for (int i = 0; i < N; i++)
	{
		cout << Arr2[i] << " ";
	}
	cout << endl;
}
void Reorder(int A[], int B[] , int x)
{
	int j = 0;
	for (int i = 0; i < N; i++)
	{
		if (A[i] < x)
		{
			B[j] = A[i];
			j++;
		}
	}
	for (int i = 0; i < N; i++)
	{
		if (A[i] >= x)
		{
			B[j] = A[i];
			j++;
		}
	}
}