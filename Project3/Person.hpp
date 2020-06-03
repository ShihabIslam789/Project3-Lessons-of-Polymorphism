//
/** @file  Person.hpp */
//  Project1
//  Description: A simple class to illustrate basic OOP and inheritance concept
//               Person is a base class for people enrolled in a course
//
//  originally Created by Tiziana Ligorio on 1/14/19.
//  Modified on 5/27/20

#ifndef PERSON
#define PERSON
#include <string>

class Person {
public:


	Person();

	//@param id: returns id of person
	//@param first: returns first name of person
	//@param last: returns lastname of person 

	Person(int id, std::string first, std::string last);

	/** @param: id the vaule of id_*/
	int setID(int id);

	/** @param:  first will be the value of first_name_ */
	std::string setFirstName(std::string first);

	/** @param: last will be the value of last_name_ */
	std::string setLastName(std::string last);



	//access function:  returns ID
	int getID() const;

	//access function: returns first name

	std::string getFirstName() const;

	//access function: returns last name

	std::string getLastName() const;

	// acessor function to test inherhitance
	std::string inheritanceTest() const;
protected:
	//protected data members(information hiding)
	int id_;
	std::string first_name_;
	std::string last_name_;
};

#endif
