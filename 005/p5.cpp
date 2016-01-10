#include <iostream>
#include <vector>

using namespace std;

bool solutionFound(const vector<int> solutions){
	bool retval = true;

	for(int i = 1; i < solutions.size(); ++i){
		retval = retval && (solutions[0] == solutions[i]);
	}
	return retval;
}

//find smallest number divisble by 1 through n
int main(){
	
	int n;
	cin >> n;
	
	int mod = 1;
	for(int i = 1; i<=n; ++i){
		mod *= i;
	}
	
	vector<int> solutions(n);
	for(int i = 0; i<n; ++i){
		solutions[i] = i+1;
	}	
	
	while(!solutionFound(solutions)){
		for(int i = 0; i<n; ++i){
			while(solutions[i] < solutions[(i+1) % n]){
				solutions[i] += i+1;
			}
		}
	}
	cout << solutions[0] << endl;
	return 0;
}
