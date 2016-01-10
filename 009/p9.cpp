#include <iostream>

using namespace std;

//solved using ouramdane's formula
int main(){
	int a = 1;
	int b = 1;
	int c = 1;
	while (1){
		int aSquared = a*a;
		for(int i = 2; i < a; ++i){
			if(aSquared % i == 0){
				if((a % 2 == 0 && i % 2 == 0 && aSquared/i % 2 == 0) || a% 2 == 1) {
					b = (aSquared - i*i)/(2*i);
					c = (aSquared + i*i)/(2*i);
					if(a + b + c == 1000){
						cout << a << " " << b << " " << c << endl;
						cout << "Product is " << a*b*c << endl;
						return 0;
					}
				}
			}
		}
		++a;
	}

	return 0;
}
