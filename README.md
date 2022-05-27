# Project3 Lesson of Polymorphism

Implementation - 2 parts:
Part1: Modify Person and derived classes

Modify the Person class by adding a pure virtual function display() with void
return type. Each derived class can then override display() to display data specific
to the derived object as follows:
• Student::display()
Sample output:
“first_name_ last_name_ majors in major_ with gpa: gpa_\n”
• TeachingAssistant::display()
Sample output:
“first_name_ last_name_ majors in major_ with gpa: gpa_
working [part-time/full-time] as a ta_role_\n”
Outputs part-time if hours_per_week_ < 8, otherwise outputs fulltime
• Instructor::display()
Sample output:
“first_name_ last_name_ - office: office_, email:
contact_\n”
Part2: Modify the Roster class
Modify the Roster class to inherit from List and store pointers to Person (You will
find the List class with the starter files on the project repo). Roster must have at least
(but is not limited to) the following methods:
1. Roster(); //default constructor for empty roster
2. /**parameterized constructor
 @pre the input file is expected to be in csv
 (comma separated value) where each line has format:
 "id,first_name_last_name,title,derived_data1,derived_data12\n"
 where derived_data1 and derived_data2 are specific to the title,
 that is, the private members specific to the derived class, in the
 order in which they appear in the derived class’ interface
 (for example, if title is 'student', derived_data1 will hold
 the value for major_ and derived_data2 the value for gpa_)
 @param input_file_name the name of the input csv file
 @post Pointers to Person-derived objects are stored in the Roster,
 each pointer pointing to either a Student, Instructor or
 TeachingAssistant object as per the data in the input file and
 specified by the title field
 **/
 Roster(std::string input_file_name);
Note that there is a lot going on here. For each line in the input file it will:
• Instantiate an object of type Student, TeachingAssistant or Instructor, as
indicated by the title field (the fourth field on each line), with possible values in
{student, teaching_assistant, instructor}
• Derived-class specific data (gpa_, major_, hours_per_week_, ta_role,
office_, contact_), are provided in the input file as the two last data fields,
Space, not new line
Space, not new line
derived_data1 and derived_data2, and they will correspond to the derived
class indicated by the title field. Teaching assistants are also students. For this
project you can assume that all TAs are Computer Science majors and have a 4.0
gpa.
• Add a pointer of type Person that points to the newly instantiate object to the
Roster
3. ~Roster(); //destructor
Recall that, with inheritance, derived class destructors are called first and base
class destructors are always called next. The Roster class will store pointers to
dynamically allocated objects. The List class constructor does not know about this
and will only delete the dynamically allocated Nodes, but not the objects pointed
to by the pointers stored in the Nodes. The Roster destructor must delete the
dynamically allocated Person-derived objects. Don’t worry bout efficiency, just
delete the Person-derived objects and the List destructor will take care of deleting
the nodes.
4. For the same reason that we need to provide a destructor, we need to override
remove, to delete the Person-derived dynamic object as well as the node. Just
copy the implementation of List::remove() from the List class and modify it to
delete the Person-derived objects before it deletes the node. Roster is not a
template and T will be Person*.
/**
 @param position indicating point of deletion
 @post node at position is deleted, if any. Roster order is retained
 @return true if there is a node at position to be deleted, false otherwise */
 bool remove(size_t position) override;
5. There will also be a problem with the copy constructor and assignment operator,
because the List will make deep copies of the Nodes and pointers stored in the
nodes, but not of the dynamic Person-derived objects. To not over-complicate the
project, I will not ask you to implement a copy constructor and assignment
operator for the Roster class (doing so would require further modifications to
Person and derived as well). Instead, your Roster class should indicate/enforce that
a Roster cannot be copied. You can do so by deleting these methods in your
interface, this will cause a compiler error if anyone using your class tries to make a
copy (think of the implications about passing by value etc.). The syntax is as below
(you add this only in the interface) and it also serves as documentation.
// prevent copy to avoid shallow copies of Person-derived objects
Roster(const Roster& a_roster) = delete;

 // prevent copy to avoid shallow copies of Person-derived objects
 Roster& operator=(const Roster& a_roster) = delete;
6. /**@post displays all data in roster, on e per line
 as per each object’s specific display method\n”
 **/
 void display();
This function will call the display() method of each Person-derived object to
display that object’s data. This is where you see Polymorphism in action!
