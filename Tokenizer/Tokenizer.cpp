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
void Tokenizer::findMinMax(vector <int> A)
{
	cout << "The smallest number : " << A[0] << endl;
	cout << "The biggest number : ";
	for (int i = A.size() - 1; i > A.size() - 4; i--)
		cout << A[i] << " ";
}