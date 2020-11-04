#include<iostream>
using namespace std;
void  MinMaxAvg(int Arr[],int n , int* min, int* max, float* avg);
int main()
{
	int A[10];
	for (int i = 0;i < 10;i++)
	{
		cin >> A[i];
	}
	int min, max;
	float avg;
	MinMaxAvg(A, 10, &min, &max , &avg);
	cout << "Minimum value = " << min << endl;
	cout << "Maximum value = " << max << endl;
	cout << "Average value = " << avg << endl;
}
void  MinMaxAvg(int Arr[],int n , int* min, int* max, float* avg)
{
	*min = Arr[0];
	*max = Arr[0];
	*avg = Arr[0];
	for (int i = 1;i < n;i++)
	{
		*avg += Arr[i];
		if (Arr[i] > *max)
		{
			*max = Arr[i];
		}
		if (Arr[i] < *min)
		{
			*min = Arr[i];
		}
	}
	*avg /= n;
}