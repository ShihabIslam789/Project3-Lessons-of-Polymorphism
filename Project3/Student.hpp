//
/** @file  Student.hpp */
//  Project1
//  Description: A simple class to illustrate basic OOP and inheritance concept
//               student is a dervied class for specific people
//
//  Created by Shihab Islam
//  Modified on 5/30/20
#ifndef _STUDENT_
#define _STUDENT_
#include "Person.hpp"
#include <string>

class Student :public Person { //student (inherited class), person (base class)
public:
	//default constructor for student
	Student();

	// paramertized constructor
	// @param id: is id of student
	// @param first: is first name of Student
	//@ paraM LAST : is last naame of student
	Student(int id, std::string first, std::string last);

	//access function: return major_
	std::string getMajor() const;


	//access function: returns gpa_
	double getGpa() const;

	//mutator fucntion: sets major_ to major
	void setMajor(const std::string major);

	//mutator function: sets gpa_ to gpa
	void setGpa(const double gpa);

	

private:
	//protected data members
	std::string major_;
	double gpa_;
};


#endif
