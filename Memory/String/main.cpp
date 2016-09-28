#include <iostream>
#include "string.hpp"

using namespace std;

int main() {

	JString j = "Jonas";
	JString k = " is zo cool!";
	JString result = j + k;
	cout << result << endl;

	JString l = "test";
	JString m = "test";
	if(l == m) {
		cout << l << " is inderdaad gelijk aan " << m << endl;
	}
	if(l!=m){
		cout << "Wat een zinloze test zeg..." << endl;
	} else {
		cout << "Jaaaaa! " << l << " is nog steeds gelijk aan " << m << endl;
	}
	return 0;

}
