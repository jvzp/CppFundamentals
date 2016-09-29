#include <iostream>
#include <string>

using namespace std;

int main() {

	string str1("");

	for(int i = 0; i < 20000; i++) {

		str1.append("J");
//		cout << "String has a length of " << str1.size() << " and a capacity of " << str1.capacity() 
//			<< " and a sizeof() " << sizeof(str1) << endl;

	}

	return 0;

}
