#include<iostream>
using namespace std;
void CountAvgOdds(int Arr[], int& Count, float* AVG);
int main()
{
	int A[5];
	for (int i = 0;i < 5;i++)
	{
		cin >> A[i];
	}
	int count;
	float Avg;
	CountAvgOdds(A, count, &Avg);
	cout << "Count of Odds = " << count << endl;
	cout << "Avg of Odds = " << Avg << endl;
}
void CountAvgOdds(int Arr[], int& Count, float* AVG)
{
	Count = 0;
	*AVG = 0;
	for (int i = 0;i < 5;i++)
	{
		if (Arr[i] % 2 == 1)
		{
			Count++;
			*AVG += Arr[i];
		}
	}
	*AVG = *AVG / Count;
}