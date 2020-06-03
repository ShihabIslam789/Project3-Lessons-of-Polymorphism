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


// paramertized constructor
// @param id: is id of instructor
// @param first: is first name of instructor
//@ param LAST : is last naame of instructor
Instructor::Instructor(int id, std::string first, std::string last) :Person(id, first, last) {
	office_ = "";
	contact_ = "";
}

//access function: return office room
std::string Instructor::getOffice() const {
	return office_;
}

//access function: return contact info.
std::string Instructor::getContact() const {
	return contact_;
}


//mutator fucntion: return changed valid office info.
void Instructor::setOffice(const std::string office) {
	office_ = office;
}

//mutator fucntion: return changed valid contact info.
void Instructor::setContact(const std::string contact) {
	contact_ = contact;
}