#include"Lab4.h"

int lab4::sum(vector<int> a)
{
	int Sum = 0;
	for (int i = 0; i < a.size(); i++)	Sum += a[i];
	return Sum;
}
double lab4::getAverage(int sum, int size)
{
	return (double)sum / size;
}
vector<int> lab4::checkPrime(vector<int>a)
{
	vector<int> result;
	int count = 0;
	for (int j = 0; j < a.size(); j++) {
		if (a[j] == 1)	continue;
		for (int i = 2; i <= sqrt(a[j]); i++) {
			if (a[j] % i == 0) {
				count++;
			}
		}
		if (count == 0)	result.push_back(a[j]);
	}
	return result;
}