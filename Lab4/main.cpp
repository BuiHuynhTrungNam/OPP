#include"Lab4.h"
#include"../Tokenizer/Tokenizer.cpp"

int main()
{
	string haystack = "12 14 46 27 3 1 90";
	vector <int> result = Tokenizer::convert(Tokenizer::parse(haystack));
	vector <int> Biggest,Smallest, Prime;
	cout << "Haystack :" << haystack
		 << "\nNeedle is space"
		 << "\nConvert to int type "
		 << "\nAfter sub have " << result.size() << " numbers : " << endl;
	Tokenizer::show(result);
	cout << "Sum : " << lab4::sum(result) << endl;
	Tokenizer::sort(result);
	Biggest = Tokenizer::getBiggestNumber(result, 3);
	cout << "Three Biggest numbers :" << endl;
	Tokenizer::show(Biggest);
	Smallest = Tokenizer::getSmallestNumber(result, 1);
	cout << "Three Smallest numbers :" << endl;
	Tokenizer::show(Smallest);
	cout << "Average : " << lab4::getAverage(lab4::sum(result), result.size());
	Prime = lab4::checkPrime(result);
	Tokenizer::show(Prime);
}