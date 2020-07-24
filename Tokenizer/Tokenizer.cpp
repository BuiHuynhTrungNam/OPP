#pragma once
#include"Tokenizer.h"

vector <string> Tokenizer::parse(string haystack, string separator)
{
	int startPos = 0;
	string token;
	vector <string> result;
	while (true)
	{
		size_t foundPos = haystack.find(separator, startPos);
		if (foundPos != string::npos) {
			token = haystack.substr(startPos, foundPos - startPos);
		}
		else {
			token = haystack.substr(startPos, haystack.size() - startPos);
			break;
		}
		result.push_back(token);
		startPos = foundPos + separator.size();
	}
	result.push_back(token);
	return result;
}
vector<int> Tokenizer::convert(vector < string> A)
{
	vector <int> result;
	for (int i = 0; i < A.size(); i++) {
			result.push_back(atoi(A[i].c_str()));
		}
	return result;
}

void Tokenizer::sort(vector <int> &A)
{
	for (int i = 0; i < A.size() - 1; i++)
	{
		for (int j = i + 1; j < A.size(); j++)
		{
			if (A[i] > A[j])	swap(A[i], A[j]);
		}
	}
}
vector <int> Tokenizer::getBiggestNumber(vector<int> a, int number)
{
	vector <int> result;
	for (int i = a.size() - 1; i > a.size() - number-1; i--) result.push_back(a[i]);
	return result;
}
vector<int> Tokenizer::getSmallestNumber(vector<int> a, int number)
{
	vector<int>result;
	for (int i = 0; i < number; i++)	result.push_back(a[i]);
	return result;
}