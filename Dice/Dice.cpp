#include "Dice.h"
#include"../Random/Random.cpp"

Dice::Dice(){
	rollCount = 0;
	value[0] = -1;
	for (int i = 1; i < 7; i++)	value[i] = 0;
	sum = 0;
}
float Dice::averageRollValue(){
	return (float)sum / rollCount;
}
void Dice::show(){
	for (int i = 1; i < 7; i++)
	{
		cout << i << " : " << value[i] << " times" << endl;
	}
}
int Dice::roll(){
	int option, result;
	while (true)
	{
		cout << "Do you want to roll the dice ? "
			<< "\n 1: Yes "
			<< "\n 0: No "
			<< "\n Enter your choose : ";
		cin >> option;

		if (option == 0)	break;

		rollCount++;
		result = rng.next(1, 6);
		sum += result;
		value[result]++;
	}
	return rollCount;
}
