#pragma once

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Tokenizer
{
public:
	static vector <string> parse(string haystack, string separator = " ");
	static vector<int>convert(vector < string> A);
	template <typename T>
	static void show(vector <T> A)
	{
		for (int i = 0; i < A.size(); i++) {
			cout << i + 1 << " : " << A[i] << endl;
		}
	}
	static void sort(vector <int> &A);
	static vector <int> getBiggestNumber(vector<int> a, int number);
	static vector<int> getSmallestNumber(vector<int> a, int number);
};