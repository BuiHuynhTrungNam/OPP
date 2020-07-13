#pragma once
#include"../Random/Random.h"

class Dice
{
private:
	Random rng;
	int rollCount;			
	int value[7];
	int sum;
public:
	Dice();
	
	float averageRollValue();		//Average
	void show();					//show Detail
	int roll();						//return rollCount
	
};