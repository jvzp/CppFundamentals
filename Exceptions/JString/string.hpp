#ifndef _JSTRING_H_
#define _JSTRING_H_

#include <iostream>
#include <exception>

using namespace std;

class JString {

public:
	
	class NullPointerException : public exception {
	
	public:
		virtual const char * what() const throw();

	};

	/*
	 * Default constructor for the JString
	 */
	JString();

	/*
	 * Copy constructor for the JString
	 */
	JString(const JString& s);

	/*
	 * Constructor for the JString
	 */
	JString(const char * s);
	
	/*
	 * Destructor for the JString
	 */
	~JString();

	/*
	 * Calculate the length of the String
	 */
	int getLength() const;

	/*
	 * Assignment operator overload
	 */
	JString& operator=(const JString& s);

	/*
	 * Conversion to C string
	 */
	const char * c_str() const;
	
	friend bool operator==(const JString& lhs, const JString& rhs);
	friend bool operator!=(const JString& lhs, const JString& rhs);
	friend JString operator+(const JString& lhs, const JString& rhs);
	friend ostream& operator<<(ostream& x, JString str);

private:
	char * s;
};

/*
 * Comparison equality operator overload
 */
bool operator==(const JString& lhs, const JString& rhs);

/*
 * Comparison nonequality operator overload
 */
bool operator!=(const JString& lhs, const JString& rhs);

/*
 * Concatinate operator overload
 */
JString operator+(const JString& lhs, const JString& rhs);

/*
 * Streaming operator overload
 */
ostream& operator<<(ostream& x, JString str);

#endif
