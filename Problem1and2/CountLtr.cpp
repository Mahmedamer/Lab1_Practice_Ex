#include<iostream>
using namespace std;
int CountLtr(char LTR, int N);
int main()
{
	char ltr;
	int n;
	cin >>ltr>> n;
	cout << "Letter " << ltr << " Appeared " << CountLtr(ltr, n) << " Times." << endl;
	return 0;
}
int CountLtr(char LTR, int N)
{
	int count = 0;
	char c;
	if (LTR >= 'A' && LTR <= 'Z')
	{
		LTR += 'a' - 'A' ;
	}
	for (int i = 0;i < N;i++)
	{
		cin >> c;
		if (c >= 'A' && c <= 'Z')
		{
			c += 'a' - 'A';
		}
		if (c == LTR)
		{
			count++;
		}
	}
	return count;
}