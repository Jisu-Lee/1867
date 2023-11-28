#include "student.h"

void factory::Sub::setAction(int kind)
{
	this->actionKind_ = kind;
}
int factory::Sub::action() const
{
	return this->actionKind_;
}

void factory::Student::setAction(int kind)
{
	this->actionKind_ = kind;
}
int factory::Student::action() const
{
	return this->actionKind_;
}