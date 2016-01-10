#include <iostream>
#include <vector>

using namespace std;

//compute sum of primes up to n
int main(){
	unsigned long long n;
	cin >> n;

	vector<bool> sieve(n+1);
	for(auto b : sieve){
		b = true;
	}
	
	unsigned long long sum = 0;
	
	for(unsigned long long p = 2; p<n+1; ++p){
		if(sieve[p]){
			sum += p;
			 for(int i = p; i<n+1; i+=p){
				sieve[i] = false;
			}
		}	
	}

	cout << sum << endl;

	return 0;
}
