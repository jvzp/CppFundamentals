#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {

	string j("4+8j");
	if(regex_match(j, std::regex("[0-9]+[+-][0-9]+j"))) {
	
	} else {

	}

	return 0;

}
