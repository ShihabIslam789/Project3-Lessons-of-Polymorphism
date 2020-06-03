#include "Person.cpp"
#include "Student.cpp"
#include "TeachingAssistant.cpp"
#include "Instructor.cpp"
#include <iostream>
using namespace std;

int main() {
	Person me = Person(1, "Eliza", "Sith");
	cout << me.getFirstName() << endl;
	cout << me.getLastName() << endl;

	Student Eliza = Student(2, "Eliza", "Sith");
	Eliza.setMajor("Computer Science");
	Eliza.setGpa(3.6);
	cout << Eliza.getMajor() << endl;
	cout << Eliza.getGpa() << endl;

	TeachingAssistant Susan = TeachingAssistant(6, "Susan", "Sally");
	Susan.setHours(4);
	cout << Susan.getHours() << endl;
	Susan.setRole(LAB_ASSISTANT);
	cout << Susan.getRole() << endl;

	Instructor Tina = Instructor(134, "pie", "Tina");
	Tina.setOffice("rm114");
	cout << Tina.getOffice() << endl;
	Tina.setContact("911");
	cout << Tina.getContact() << endl;
}