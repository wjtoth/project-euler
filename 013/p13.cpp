#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

//outputs digits of sum
int main(){
	vector<vector<int>> numbers(100);
	
	//initialize
	for(int i = 0; i< 100; ++i){
		numbers[i].reserve(50);
	}

	//read in
	for(int i = 0; i < 100; ++i){
		for(int j = 0; j < 50; ++j){
			char c;
			cin >> c;
			numbers[i][j] = atoi(&c);
		}
	}

	//check that I read in correctly
	for(int i = 0; i < 100; ++i){
		for(int j = 0; j < 50; ++j){
			cout << numbers[i][j];
		}
		cout << endl;
	}
		
	vector<int> sum_of_column(50);
	int carry_value = 0;

	for(int i = 49; i>=0; --i){
		sum_of_column[i] = carry_value;
		for(int j = 0; j < 100; ++j){
			sum_of_column[i] += numbers[j][i];
		}
		carry_value = sum_of_column[i] / 10;
	}
	
	cout << carry_value;	

	for(int i = 0; i < 50; ++i){
		cout << sum_of_column[i] % 10;
	}
	cout << endl;

	return 0;
}
