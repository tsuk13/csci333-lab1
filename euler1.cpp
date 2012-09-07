#include<iostream>

using std::cout;

int main(){
	int n = 10; //how high we are going
	int sum = 0; //keep running total
	for(int i =1; i<n; ++i){
		if(i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	cout << "Total up to " << n << " is " << sum <<"\n";
	return 0;
}
