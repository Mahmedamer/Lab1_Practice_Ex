#include<iostream>
using namespace std;
int CountSimilar(int A[], int B[]) 
{
	int count = 0;
	for (int i = 0;i < 5;i++)
	{
		if (A[i] == B[i])
		{
			count++;
		}
	}
	return count;
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
	cout << "Count of Similar Elements = " << CountSimilar(A, B) << endl;
}