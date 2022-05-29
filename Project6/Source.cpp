#include <iostream>
#include <time.h>

using namespace std;

int* Init(int size)
{
	int* mas = new int[size];
	for (int i = 0; i < size; i++)
	{
		mas[i] = rand() % 3;
	}
	return mas;
}

void radota()
{
	srand(time(0));
	int size = 10;
	int* cap = Init(size);
	int* trol = new int[size];
	for (int i = size - 1, j = 0; i >= 0; i--, j++)
	{
		*(trol + j) = *(cap + i);
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