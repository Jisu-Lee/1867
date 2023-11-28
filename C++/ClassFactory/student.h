#ifndef __STUDENT_H__
#define __STUDENT_H__

#include "super.h"

namespace factory {

class Sub : public Super {

private:
	Sub() {
		this->actionKind_ = 10;
	}
	Sub(int age) {
		this->setAge(age);
		this->actionKind_ = 10;
	}
public:

	virtual void setAction(int kind);
	virtual int action() const;

};

class Student : public Person {

public:
	Student() {
	}
	Student(int age) {
	}

	virtual void setAction(int kind);
	virtual int action() const;

};


}

#endif	/* __STUDENT_H__ */
