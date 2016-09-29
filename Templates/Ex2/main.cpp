#include <iostream>

using namespace std;

template<class T>
T my_max(T lhs,T rhs) {

	if(lhs >= rhs) {
		return lhs;
	} else {
		return rhs;
	}

}

template<class T>
void my_swap(T& lhs, T& rhs) {

	T temp = lhs;
	lhs = rhs;
	rhs = lhs;

}

//TO DO: sum_of #ToLazyAtThisVeryMoment #Let'sMakeTheNextExercise
