//
/** @file  Student.cpp */
//  Project1
//  Description: A simple class to illustrate basic OOP and inheritance concept
//                 student is a dervied class for specific people
//
//  Created by Shihab Islam
//  Modified on 5/30/20
#include "Student.hpp"
#include "Person.hpp"
#include <string>


Student::Student() :Person() {//default constructor for student
	major_ = "";
	gpa_ = 0;
}


// paramertized constructor
// @param id: is id of student
// @param first: is first name of Student
//@ param LAST : is last naame of student
Student::Student(int id, std::string first, std::string last) :Person(id, first, last) {
	major_ = "";
	gpa_ = 0;
}

//access function: return major_
std::string Student::getMajor() const {
	return major_;
}

//access function: returns gpa_
double Student::getGpa() const {
	return gpa_;
}

//mutator fucntion: sets major_ to major
void Student::setMajor(const std::string major) {
	major_ = major;
}

//mutator function: sets gpa_ to gpa
void Student::setGpa(const double gpa) {
	gpa_ = gpa;
}