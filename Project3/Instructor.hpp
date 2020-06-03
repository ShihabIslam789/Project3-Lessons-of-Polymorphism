//
/** @file  teachingassistant.hpp */
//  Project1
//  Description: A simple class to illustrate basic OOP and inheritance concept
//               instructor is a derived class that specifically finds this type of person
//  Created by Shihab Islam
//  Modified on 5/30/20

#ifndef _INSTRUCTOR_
#define _INSTRUCTOR_
#include "Person.hpp"
#include <string>

class Instructor :public Person {
public:
	//default constructor 
	Instructor();

	//constructor
	//@param id the id of the instructor
	//@param first the first name of the instructor
	//@param last the last name of the instructor
	Instructor(int id, std::string first, std::string last);

	//accessor  function
	//returns: the office name
	std::string getOffice() const;

	//accessor funcntion
	//returns: contact info of the instructor
	std::string getContact() const;

	//mutator function: changes room number
	//@param office the office of the instructor
	void setOffice(const std::string office);

	//mutator function: changes contact info 
	//@param contact the contact info of the instructor
	void setContact(const std::string contact);
private:
	std::string office_;
	std::string contact_;
};


#endif

