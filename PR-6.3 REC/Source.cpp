#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
//template <typename T>
//T Create(T* a, T size, T Low, T High, T i);
//template <typename T>
//void Print(T* a, T size, T i);
//template <typename T>
//T quantity(T* a, T size, T& q, T i);
int Create(int* a, int size, int Low, int High,int i);
void Print(int* a, int size,int i);
int quantity(int* a, int size, int& q, int i);
int main()
{
	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
	int q = 0;
	const int n = 10;
	int a[n];
	int Low = 5;
	int High = 90;
	int sum = 0;
	Create(a, n, Low, High,0);
	quantity(a, n, q, 0);
	cout << "quantity" << setw(2) << "=" << setw(2) << q << endl;
	cout << "a[" << setw(1);
	Print(a, n,0);
	return 0;
}
//template <typename T>
//T quantity(T* a, T size, T& q, T i)
//{
	//if (a[i] % 2 != 0)
	//	q++;
	//if (i < size - 1)
	//	quantity((a, size, q, i + 1);)
	//return 0;
//}
//template <typename T>
//T Create(T* a,const T size, T Low, T High, T i)
//{
//	a[i] = Low + rand() % (High - Low + 1);
//	if (i < size - 1)
//		Create(a, size, Low, High, i + 1);
//	return 0;
//}
//template <typename T>
//void Print(T* a, T size, T i)
//{
//		if (i == size - 1)
//			cout << setw(1) << a[i];
//		else
//			cout << setw(1) << a[i] << ",";
//	if (i<size-1)
//		Print(a, size, i+1);
//	else
//	cout << "]" << endl;
//}
int quantity(int* a, int size, int& q,int i)
{
	if (a[i] % 2 != 0)
		q++;
	if( i < size-1) 
		quantity(a, size, q, i+1);
	return 0;
}
int Create(int* a, int size, int Low, int High,int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
	return 0;
}
void Print(int* a, int size,int i)
{
	if (i == size - 1)
		cout << setw(1) << a[i];
	else
		cout << setw(1) << a[i] << ",";
if (i<size-1)
	Print(a, size, i+1);
else
	cout << "]" << endl;
}
