//
/** @file  teachingassistant.hpp */
//  Project1
//  Description: A simple class to illustrate basic OOP and inheritance concept
//               teachingassistant is a derived class that specifically finds this type of perosn
//  Created by Shihab Islam
//  Modified on 5/30/20
#ifndef TEACHING_ASSISSTANT
#define TEACHING_ASSISSTANT
#include "Student.hpp"

enum ta_role { LAB_ASSISTANT, LECTURE_ASSISTANT, FULL_ASSISTANT };

class TeachingAssistant :public Student {
public:

	TeachingAssistant(); 	//default constructor

	// paramertized constructor
	// @param id: is id of TA
	// @param first: is first name of TA
	//@ param LAST : is last naame of TA
	TeachingAssistant(int id, std::string first, std::string last);

	//accessor function:  return number of hours
	int getHours() const;

	//accessor function: - return role (either lab assitant,lecture assistant ,or full assistant)
	ta_role getRole() const;

	//mutator function - set number of hours
	void setHours(const int hours);

	//mutator function - set role
	void setRole(const ta_role role);
private:
	//private data members
	int hours_per_week_;
	ta_role role_;
};

#endif
