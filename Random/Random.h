#pragma once
#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
class Random
{
public:
	
	int next();
	int next(int x);
	int next(int x, int y);
};