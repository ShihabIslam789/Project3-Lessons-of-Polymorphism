//
/** @file  teachingassistant.hpp */
//  Project1
//  Description: A simple class to illustrate basic OOP and inheritance concept
//               teachingassistant is a derived class that specifically finds this type of perosn
//  Created by Shihab Islam
//  Modified on 5/30/20

#ifndef _TEACHING_ASSISSTANT_
#define _TEACHING_ASSISSTANT_
#include "Student.hpp"

enum ta_role { LAB_ASSISTANT, LECTURE_ASSISTANT, FULL_ASSISTANT };

class TeachingAssistant :public Student {
public:
	//default constructor
	TeachingAssistant();

	// param constructor
	//@param first the first name of the teachingasssistant object
	//@param last the last name of the teacing assistant object
	TeachingAssistant(int id, std::string first, std::string last);

	//accessor function: return number of hours
	//returns the number of hours
	int getHours() const;

	//accessor function: return role ( lab,lecture,or full assistant)
	//returns the role of the TA ( lab assistant, lecture assistant or full assistant)
	ta_role getRole() const;

	//mutator function: set number of hours
	//@param hours the number of hours
	void setHours(const int hours);

	//mutator function: set role
	//@param role the role of the TA (assistant, lecture assistant or full assistant)
	void setRole(const ta_role role);
private:
	//private data members
	int hours_per_week_;
	ta_role role_;
};

#endif


