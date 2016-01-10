#include <iostream>
#include <map>

using namespace std;

int next_num(int num){
	if(num % 2 == 0){
		return num/2;
	}
	return 3 * num + 1;
}

int find_length(int n, map<int, int> &dict){
}

//longest collatz sequence starting under 1000000
int main(){
	map<int, int> dict ();
	
	dict.insert(0, 1);
	
	int max_length = 1;
	int max_length_num = 1;
	
	for(int i = 2; i <=1000000; ++i){
		int length = find_length(i, dict);
		if(length > max_length){
			max_length = length;
			max_length_num = i;
		}
	}

	cout << "Maximum length of sequence is " << max_length << " given by " << max_length_num << endl;	

	return 0;
}
