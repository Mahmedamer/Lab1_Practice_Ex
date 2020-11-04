#include<iostream>
using namespace std;
void CalcSumOfCorresponding(int A[], int B[])
{
	for (int i = 0;i < 5;i++)
	{		
		A[i] += B[i];
	}
}
int main()
{
	int A[5], B[5];
	for (int i = 0;i < 5;i++)
	{
		cin >> A[i];
	}
	for (int i = 0;i < 5;i++)
	{
		cin >> B[i];
	}
	CalcSumOfCorresponding(A, B);
	cout << "First Array = ";
	for (int i = 0;i < 5;i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	cout << "Second Array = ";
	for (int i = 0;i < 5;i++)
	{
		cout << B[i] << " ";
	}
	cout << endl;
}