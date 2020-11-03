#include<iostream>
using namespace std;
void  AbsNegatives(int Arr[], int& count, int& sum);
int main()
{
	int A[10];
	for (int i = 0;i < 10;i++)
	{
		cin >> A[i];
	}
	int count, sum;
	AbsNegatives(A, count, sum);
	cout << "Array after Call = " ;
	for (int i = 0;i < 10;i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	cout << "Count of Negatives = " << count << endl;
	cout << "Sum of Negatives = " << sum << endl;
}
void  AbsNegatives(int Arr[], int& count, int& sum)
{
	count = 0;
	sum = 0;
	for (int i = 0;i < 10;i++)
	{
		if (Arr[i] < 0)
		{
			count++;
			sum += Arr[i];
			Arr[i] = abs(Arr[i]);
		}
	}
}