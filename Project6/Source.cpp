#include <iostream>
#include <time.h>

using namespace std;


int* Init(int size)
{
	int* cap = new int[size];
	for (int i = 0; i < size; i++)
	{
		cap[i] = rand() % 3;
	}
	return cap;
}

void radota()
{
	srand(time(0));
	int size = 10;
	int* cap = Init(size);
	int* trol = new int[size];
	for (int i = 0; i < size; i++)
	{
		*(trol + i) = *(cap + i);
	}
	for (int i = 0; i < size; i++)
	{
		cout << " " << cap[i];
	}
	cout << "\n\n";
	for (int i = 0; i < size; i++)
	{
		cout << " " << trol[i];
	}
}
int main()
{
	radota();
	return 0;
}