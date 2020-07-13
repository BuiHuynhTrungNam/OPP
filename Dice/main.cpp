#include"Dice.h"
int main()
{
	srand(time(NULL));
	Dice dice;
	cout << "Roll Times : " << dice.roll() << endl;
	cout << "Average Roll Values  : " << dice.averageRollValue() << endl;
	cout << "Detail : " << endl;
	dice.show();
	system("pause");
	return 0;
}