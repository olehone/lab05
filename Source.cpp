// Лабораторна робота № 5.5
#include <iostream>
#include <cmath>
using namespace std;
int C(int n, int k, int level, int& depth)
{
	if (level > depth)
		depth = level;
	if (n == k || k == 0)
		return 1;
	else
		if (n > 0)
			return C(n-1, k-1, level + 1, depth) + C(n - 1, k, level + 1, depth);}int main()
{
	int depth = 0;
	int n, k, result;
	cout << "n ="; cin >> n;
	cout << "k ="; cin >> k;
	result = C(n, k, 1, depth);
	cout << "Depth =" << depth << endl;
	cout << "C =" << result << endl;
	return 0;
}