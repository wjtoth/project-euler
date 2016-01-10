#include <iostream>
#include <vector>

using namespace std;

int rowProduct(const vector<vector<int>> grid, const int i, const int j){
	return grid[i][j] * grid[i+1][j] * grid[i+2][j] * grid[i+3][j];
}

int colProduct(const vector<vector<int>> grid, const int i, const int j){
	return grid[i][j] * grid[i][j+1] * grid[i][j+2] * grid[i][j+3];
}

int diagProduct(const vector<vector<int>> grid, const int i, const int j){
	return grid[i][j] * grid[i+1][j+1] * grid[i+2][j+2] * grid[i+3][j+3];
}

int altDiagProduct(const vector<vector<int>> grid, const int i, const int j){
	return grid[i][j] * grid[i-1][j+1] * grid[i-2][j+2] * grid[i-3][j+3];
}

//finds lasrgest adjacent product of 4 numbers in 20x20 grid
int main(){

	vector<vector<int>> grid(20);
	for(int i = 0; i<20; ++i){
		grid[i].resize(20);
	}	
	for(int i = 0; i<20; ++i){
		for(int j = 0; j<20; ++j){
			cin >> grid[i][j];
		}
	}

	int max = 0;
	//scan grid
	for(int i = 0; i<20; ++i){
		for(int j = 0; j<20; ++j){
			int product;
			if(i<17){
				product = rowProduct(grid, i, j);
				if(max < product)
					max = product;
			}
			if(j<17){
				product = colProduct(grid, i, j);
				if(max < product)
					max = product;
			}
			if(i<17 && j < 17){
				product = diagProduct(grid, i, j);
				if(max < product)
					max = product;
			}
			if(i>2 && j < 17){
				product = altDiagProduct(grid, i, j);
				if(max < product)
					max = product;
			}	
		}
	}
	
	cout << max << endl;
	
	return 0;
}
