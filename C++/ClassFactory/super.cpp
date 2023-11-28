
#include "super.h"
#include "student.h"


void factory::Super::setAge(int age) {
	age_ = age;
}

void factory::Super::setName(std::string name) {
	name_ = name;
}

int factory::Super::getAge() const {
	return age_;
}

std::string factory::Super::getName() const {
	return name_;
}

void factory::Person::setAge(int age) {
	age_ = age;
}

void factory::Person::setName(std::string name) {
	name_ = name;
}

int factory::Person::getAge() const {
	return age_;
}

std::string factory::Person::getName() const {
	return name_;
}
