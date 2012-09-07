#include<iostream>

using std::cout;

int main(){
	int sum = 0; //to keep track of sum
	int f1 = 1; //previous fibonacci number
	int f2 = 2; //current fibonacci number
	int limit = 90; //number fibonacci numbers must be less than
	for(;f2 < limit;){
		if(f2 % 2 == 0)
			sum += f2; //sums if fibonacci is even
		int temp = f2;  //temporary variable to hold our current num
		cout << f2 << "\n"; // print each fibonacci num starts with 2
		f2 = f1 + f2; // get the new fibonacci num in f2
		f1 = temp; // store the previous fibonacci
	}
	cout << "Total is " << sum << "\n";
	return 0;
}
