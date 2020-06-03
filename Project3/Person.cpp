//
/** @file  Person.hpp */
//  Project1
//  Description: A simple class to illustrate basic OOP and inheritance concept
//               Person is a base class for people enrolled in a course
//
//  originally Created by Tiziana Ligorio on 1/14/19.
//  Modified on 5/27/20

#include "Person.hpp"
#include <string>

Person::Person() {
	id_ = 0;
	first_name_ = "";
	last_name_ = "";
}

//parameterized constructor
//@param id: returns id of person
//@param first: returns first name of person
//@param last: returns lastname of person  
Person::Person(int id, std::string first, std::string last) {
	id_ = id;
	first_name_ = first;
	last_name_ = last;
}

//access function:  returns ID
int Person::getID() const {
	return id_;
}

//access function: returns first name
std::string Person::getFirstName() const {
	return first_name_;
}

//access function: returns last name
std::string Person::getLastName() const {
	return last_name_;
}