//
/** @file  teachingassistant.hpp */
//  Project1
//  Description: A simple class to illustrate basic OOP and inheritance concept
//               teachingassistant is a derived class that specifically finds this type of perosn
//  Created by Shihab Islam
//  Modified on 5/30/20

#include "TeachingAssistant.hpp"

	//default constructor
TeachingAssistant::TeachingAssistant() :Student() {
	hours_per_week_ = 0;
	role_ = LAB_ASSISTANT;
}

// param constructor
	//@param first the first name of the teachingasssistant object
	//@param last the last name of the teacing assistant object
TeachingAssistant::TeachingAssistant(int id, std::string first, std::string last) :Student(id, first, last) {
	hours_per_week_ = 0;
	role_ = LAB_ASSISTANT;
}


//accessor function: return number of hours
//returns the number of hours
int TeachingAssistant::getHours() const {
	return hours_per_week_;
}

//accessor function: return role ( lab,lecture,or full assistant)
//returns the role of the TA ( lab assistant, lecture assistant or full assistant)
ta_role TeachingAssistant::getRole() const {
	return role_;
}

//mutator function: set number of hours
//@param hours the number of hours
void TeachingAssistant::setHours(const int hours) {
	hours_per_week_ = hours;
}


//mutator function: set role
//@param role the role of the TA (assistant, lecture assistant or full assistant)
void TeachingAssistant::setRole(const ta_role role) {
	role_ = role;
}


