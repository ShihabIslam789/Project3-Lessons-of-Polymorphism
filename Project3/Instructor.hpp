//
/** @file  teachingassistant.hpp */
//  Project1
//  Description: A simple class to illustrate basic OOP and inheritance concept
//               instructor is a derived class that specifically finds this type of person
//  Created by Shihab Islam
//  Modified on 5/30/20

#ifndef INSTRUCTOR
#define INSTRUCTOR
#include "Person.hpp"
#include <string>

class Instructor :public Person {
public:

	Instructor(); //default constructor 

	// paramertized constructor
	// @param id: is id of instructor
	// @param first: is first name of instructor
	//@ param LAST : is last naame of instructor
	Instructor(int id, std::string first, std::string last);

	//access function: return office room
	std::string getOffice() const;

	//access function: return contact info.
	std::string getContact() const;

	//mutator fucntion: return valid office info.
	void setOffice(const std::string office);

	//mutator fucntion: return valid contact info.
	void setContact(const std::string contact);
private:
	std::string office_;
	std::string contact_;
};

#endif
