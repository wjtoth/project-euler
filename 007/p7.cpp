#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

//finds nth prime
int main(){
	vector<int> primes;
	primes.push_back(2);

	int n;
	cin >> n;
	int consider = 3;

	while(primes.size() < n){
		int root = sqrt(consider);
		bool isPrime = true;
		for(auto p : primes){
			if(p <= root){
				if(consider % p == 0){
					isPrime = false;
					break;
				}
			}else{
				break;
			}
		}
		if(isPrime){
			primes.push_back(consider);
		}
		consider += 2;
	}

	cout << primes[n-1] << endl;
	return 0;
}
