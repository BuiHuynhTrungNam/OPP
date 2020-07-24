#include"Tokenizer.h"


int main()
{
	string haystack = "HELLO WORLD WAR 3";
	string needle = " W";
				
	cout << "QUESTION 1:\nhaystack :" << haystack << endl					//question 1
		 << "needle : " << needle << endl;
	vector <string> result = Tokenizer::parse(haystack, needle);
	cout << "After sub have : " << result.size() << " string (Not including null string)" << endl;
	Tokenizer::show(result);				// show sub string
	


	haystack = "5 14 23 56 89";												//question 2
	cout << "QUESTION 2:\nhaystack :" << haystack << endl
	     << "needle is space" << endl
		 << "Convert to int type, sort and find 1 smallest and 3 biggest number " << endl;
	vector <int> result2 = Tokenizer::convert(Tokenizer::parse(haystack));		//convert string to int type
	cout << "After sub have " << result2.size() << " numbers" << endl;
	Tokenizer::show(result2);				// show 
	Tokenizer::sort(result2);				//sort
	vector<int>biggest = Tokenizer::getBiggestNumber(result2, 3);				//get 3 biggest numbers
	vector<int>smallest = Tokenizer::getSmallestNumber(result2, 1);				//get 1 biggest numbers
	cout << "Three biggest numbers : " << endl;
	Tokenizer::show(biggest);
	cout << "Three smallest numbers : " << endl;
	Tokenizer::show(smallest);
}	