#include <iostream>
#include <vector>
#include <boost/lexical_cast.hpp>
#include <iterator>

using namespace std;

int main(int argc, char* argv[]) {

	using boost::lexical_cast;
	using boost::bad_lexical_cast;

	vector<int> args;
	args.reserve(argc);

	while(*(++argv)) {

		try {

			args.push_back(lexical_cast<int>(*argv));

		} catch(bad_lexical_cast &e) {

			cout << "Casting failed" << endl;
			args.push_back(0);

		}
	}

	for(auto i : args) {

		cout << i << endl;

	}

	cout << endl; 

	vector<int>::const_reverse_iterator it;
	for(it=args.rbegin(); it!=args.rend(); ++it) {
		cout << *it << endl;
	}
	
	return 0;

}