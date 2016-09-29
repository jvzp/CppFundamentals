#include <iostream>
#include <vector>

using namespace std;

int main() {

	std::vector<int> str1;

	for(int i = 0; i < 200; i++) {

		str1.push_back(i);
		cout << "Vector has a length of " << str1.size() << " and a capacity of " << str1.capacity() << endl;

	}

	return 0;

}
