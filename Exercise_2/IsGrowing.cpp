#include<iostream>
using namespace std;
bool IsGrowing(int & Largest);
int main()
{
	int Largest;
	bool result = IsGrowing(Largest);
	if (Largest == 0)
	{
		cout << "No Valid Numbers Entered" << endl;
	}
	else 
	{
		if (result)
		{
			cout << "Input values are in growing order" << endl;
		}
		else
		{
			cout << "Input values are NOT in growing order" << endl;
		}
		cout << "Largest value entered is: " << Largest << endl;
	}
}
bool IsGrowing(int &Largest)
{
	Largest = 0;
	int X;
	//do
	//{
	//	cin >> X;
	//	if (X <= 0)
	//	{
	//		break;
	//	}
	//	if (X <= Largest)
	//	{
	//		return false;
	//	}
	//	Largest = X;
	//} while (X > 0);
	cin >> X;
	while (X > 0)
	{
		if (X <= Largest)
		{
			return false;
		}
		Largest = X;
		cin >> X;
	}
	return true;
}