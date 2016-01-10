#include <iostream>
#include <cmath>

using namespace std;

int count_divisors(int n){
	int count = 2;
	int sqrt_n = floor(sqrt(n));

	for(int i = 2; i <= sqrt_n; ++i){
		if(n % i == 0)
			count += 2;
	}
	return count;
}


//output first triangle number with > n divisors
int main(){
	int triangle_number = 1;
	int count = 1;
	int divisors = count_divisors(triangle_number);
	int n;
	cin >> n;

	while(divisors <= n){
		++count;
		triangle_number = triangle_number + count;
		divisors = count_divisors(triangle_number);
	}
	cout << triangle_number << endl;
}
