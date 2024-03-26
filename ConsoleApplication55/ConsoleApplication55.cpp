#include <iostream>
#include <vector>
using namespace std;
/*
* идеальная ситуация, средняя, худшая
* сложность поиска элемента contains
*	О(1),			   O(N/2),	O(N),
*
* бинарный поиск (масив отсортирован)
*	O(1),			  O(log N), O(log N)
*/



int main()
{
	int* arr = new int[10];
	cout << *(arr + 5);
}