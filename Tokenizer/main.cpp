#include"Tokenizer.h"


int main()
{
	string haystack = "HELLO WORLD WAR 3";
	string needle = " W";
				
	cout << "QUESTION 1:\nhaystack :" << haystack << endl					//question 1
		 << "needle : " << needle << endl;
	vector <string> result = Tokenizer::parse(haystack, needle);
	Tokenizer::show(result);				// show sub string
	


	haystack = "5 14 23 56 89";												//question 2
	cout << "QUESTION 2:\nhaystack :" << haystack << endl
	     << "needle is space" << endl
		 << "Convert to int type, sort and find 1 smallest and 3 biggest number " << endl;
	vector <int> result2 = Tokenizer::convert(Tokenizer::parse(haystack));		//convert string to int type
	Tokenizer::show(result2);				// show 
	Tokenizer::sort(result2);				//sort
	Tokenizer::findMinMax(result2);			//1 smallest and 3 biggest
}	