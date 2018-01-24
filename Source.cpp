#include <iostream>
using namespace std;
int main (){
	int input;
	cout << "input a number pls" << endl;
	cin >> input;
	if(input<50)
		cout << "you suck"<<endl;
	if (input > 100)
		cout << "you cool" << endl;
	else
		cout << "meh";
}