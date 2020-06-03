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

class Student :public Person { //student is inherited class, person is base class
public:
	//default constructor for student by editor
	Student();


	// param constructor
	Student(int id, std::string first, std::string last);

	//accessor function: returns major_
	//returns:  student's major
	std::string getMajor() const;


	//accessor function: returns gpa_
	//returns: student's gpa
	double getGpa() const;

	//mutator function: sets major_ to major
	//@param major: the student's major
	void setMajor(const std::string major);

	//mutator function: sets gpa_ to gpa
	//@param gpa: student's gpa(between 0 and 4)
	void setGpa(const double gpa);
protected:
	//protected data members
	std::string major_;
	double gpa_;
};


#endif 