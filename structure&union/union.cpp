#include <iostream>
using namespace std;

union Student {  //only one thinng can accces if other thing access value galat aayegi
	int rollno;
	char name[30];
	float marks;
};

int main(){
	Student s;
	s.rollno = 1234;
	s.marks = 90.5;
	s.name[0] = 'a';
	s.name[1] = '\0';

	cout << "Roll number: " << s.rollno << endl;
	cout << "Name: " << s.name << endl;
	cout << "Marks: " << s.marks << endl;

	return 0;
}

