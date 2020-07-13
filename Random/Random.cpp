#pragma once
#include"Random.h"
int Random::next(){
	return rand();
}
int Random::next(int x){
	return rand()%x;
}
int Random::next(int x, int y){
	return (rand()%y)+x;
}