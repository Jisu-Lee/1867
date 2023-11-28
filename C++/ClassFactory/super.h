#ifndef __SUPER_H__
#define __SUPER_H__

#include <iostream>

namespace factory {

class Super {

protected:
	Super() {
	}
	Super(int age) : age_(age) {

	}

public:
	void setAge(int age);

	void setName(std::string name);

	int getAge() const ;

	std::string getName() const ;

	virtual void setAction(int kind) = 0;
	virtual int action() const = 0;

private:
	int age_;
	std::string name_;

protected:
	int actionKind_;
};

class Person {

public:
	Person() {

	}
	Person(int age) : age_(age) {

	}

	void setAge(int age);

	void setName(std::string name);

	int getAge() const ;

	std::string getName() const ;

private:
	int age_;
	std::string name_;
	
protected:
	int actionKind_;

};

}

#endif	/* __SUPER_H__ */
