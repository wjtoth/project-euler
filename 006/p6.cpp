#include <iostream>

using namespace std;

int sumOfSquares(int n){
	return n*(n+1)*(2*n+1) / 6;
}

int sumOfN(int n){
	return n*(n+1)/2;
}

//finds difference between square of sum
//and sum of squares of n
int main(){
	int n;
	cin >> n;

 	cout << sumOfN(n)*sumOfN(n) - sumOfSquares(n) << endl;

	return 0;
}
