#include <iostream>
#include <vector>

using namespace std;

void printmatrix(vector<long> matrix, int n);

int main(){
	//Input
	int n;
	cin >> n;
	++n;
	
	//Initialize
	vector<long> numpaths(n*n);
	for(int i = 0; i<n; ++i){
		numpaths[i] = 1;
	}
	for(int i = 0; i<n*n; i+=n){
		numpaths[i] = 1;
	}
	

	//Solve
	for(int i = n+1; i<n*n; i+=n){
		for(int j = i; j<i+n-1; ++j){
			numpaths[j] = numpaths[j-n] + numpaths[j-1];
		}
	}	

	printmatrix(numpaths, n);	
	cout << numpaths[n*n-1] << endl;
	return 0;
}

void printmatrix(vector<long> matrix, int n){
	for(int i = 0; i<n*n; i+=n){
		for(int j = i; j<i+n; ++j){
			cout << matrix[j] << " ";
		}
		cout << endl;
	}
}
