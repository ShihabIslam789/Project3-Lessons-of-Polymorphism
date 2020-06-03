//
/** @file  teachingassistant.hpp */
//  Project1
//  Description: A simple class to illustrate basic OOP and inheritance concept
//               instructor is a derived class that specifically finds this type of person
//  Created by Shihab Islam
//  Modified on 5/30/20


#include "Instructor.hpp"

//default constructor 
Instructor::Instructor() :Person() {
	office_ = "";
	contact_ = "";
}


//constructor
//@param id the id of the instructor
//@param first the first name of the instructor
//@param last the last name of the instructor
Instructor::Instructor(int id, std::string first, std::string last) :Person(id, first, last) {
	office_ = "";
	contact_ = "";
}

//mutator function: changes room number
//@param office the office of the instructor
std::string Instructor::getOffice() const {
	return office_;
}

//accessor funcntion
//returns: contact info of the instructor
std::string Instructor::getContact() const {
	return contact_;
}


//mutator function: changes room number
//@param office the office of the instructor
void Instructor::setOffice(const std::string office) {
	office_ = office;
}

// mutator function : changes contact info
//@param contact the contact info of the instructor
void Instructor::setContact(const std::string contact) {
	contact_ = contact;
}
