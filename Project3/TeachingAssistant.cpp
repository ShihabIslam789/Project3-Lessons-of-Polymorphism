//
/** @file  teachingassistant.hpp */
//  Project1
//  Description: A simple class to illustrate basic OOP and inheritance concept
//               teachingassistant is a derived class that specifically finds this type of perosn
//  Created by Shihab Islam
//  Modified on 5/30/20

#include "TeachingAssistant.hpp"

  //default constructor
TeachingAssistant::TeachingAssistant() :Student()
{

	hours_per_week_ = 0;

	role_ = LAB_ASSISTANT;

}



// paramertized constructor
	// @param id: is id of TA
	// @param first: is first name of TA
	//@ param LAST : is last naame of TA
TeachingAssistant::TeachingAssistant(int id, std::string first,
	std::string last) :
	Student(id, first, last)
{

	hours_per_week_ = 0;

	role_ = LAB_ASSISTANT;

}



//accessor function - return number of hours
int TeachingAssistant::getHours() const
{

	return hours_per_week_;

}
