#include <iostream>
#include <string>

using namespace std;

//unsafe but simple controlled problem
long ctoi(char c){
	return c - '0';
}

long buildProduct(string s){
	long product = 1; 
	for(int i = 0; i < s.length(); ++i){
		product = product * ctoi(s[i]);
	}
	return product;
} 

//find largest adjacent product of 13 numbers in input 1000 digit number
int main(){

	string s;
	cin >> s;

	int n = 13;

	long maxProduct=1;	

	for(int i = 0; i < s.length() - n; ++i){
		cout << "Substr " << s.substr(i, n) << endl;
		long product = buildProduct(s.substr(i, n));
		cout << "Product " << product << endl;
		if(maxProduct < product){
			maxProduct = product;
		}
	}

	cout << maxProduct << endl;	

	return 0;
}
