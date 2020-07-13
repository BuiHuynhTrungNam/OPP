#include"Random.h"

int main()
{
	srand(time(NULL));
	Random rng;
	//Generate  random integer number
	cout << rng.next() << endl;
	//Generate radom integer from 0 - 9(10-1)
	cout << rng.next(10) << endl;
	system("pause");
	return 0;
}