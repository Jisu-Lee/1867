#include "super.h"
#include "student.h"

using namespace factory;

int setSuper(Super* s) {

	s->getAge();
	if(s->action() == 10) {
		return 10;
	}
	return 0;

}

int setSuper2(Super* s) {

	s->getAge();
	if(s->action() == 10) {
		return 10;
	}
	return 0;

}

int setSuper3(Super* s) {

	s->getAge();
	if(s->action() == 10) {
		return 10;
	}
	return 0;

}

int setSuper4(Super* s) {

	s->getAge();
	if(s->action() == 10) {
		return 10;
	}
	return 0;

}

int setSuper5(Super* s) {

	s->getAge();
	if(s->action() == 10) {
		return 10;
	}
	return 0;

}

int setPerson(Person* p) {

	return 0;

}

void setSub(Sub s) {
	s.action();
	return;
}


void setStudent(Student s) {
	return;
}
