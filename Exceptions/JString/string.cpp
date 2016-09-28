#include "string.hpp"
#include <cstring>

const char * JString::NullPointerException::what() const throw() {

	return "NullPointerException";

}

/*
 * Default constructor for the JString
 */
JString::JString(): 
	s()
{

} 

/*
 * Copy constructor for the JString
 */
JString::JString(const JString& str): 
	s( new char[ str.getLength() + 1 ] )
{
	strcpy(s, str.s);
}

/*
 * Constructor for the JString
 */
JString::JString(const char * str) {
	if(str == NULL) {
		throw NullPointerException();
	} else {
		s = new char[ strlen(str) +1 ];
		strcpy(s, str);
	}
}

/*
 * Destructor for the JString
 */
JString::~JString() { 

	delete[] s;

}

/*
 * Calculate the length of the String
 */
int JString::getLength() const { 

	return strlen(s); 

}

/*
 * Assignment operator overload
 */
JString& JString::operator=(const JString& str) {

	this->s = str.s;
	return *this;

}

/*
 * Conversion to C string
 */
const char * JString::c_str() const { return s; }

/*
 * Comparison equality operator overload
 */
bool operator==(const JString& lhs, const JString& rhs) {

	if(strcmp(lhs.s, rhs.s)==0){
		return true;
	} else {
		return false;
	}

}

/*
 * Comparison nonequality operator overload
 */
bool operator!=(const JString& lhs, const JString& rhs) {

	if(strcmp(lhs.s, rhs.s)==0) {
		return false;
	} else {
		return true;
	}

}

/*
 * Concatinate operator overload
 */
JString operator+(const JString& lhs, const JString& rhs) {

	JString temp;
    	temp.s = strcat(lhs.s,rhs.s);
	return temp;

}

ostream& operator<<(ostream& x, JString str) {

	x << str.s;
	return x;

}