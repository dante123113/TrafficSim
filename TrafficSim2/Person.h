#pragma once
#include <string>
using namespace std;

class Person {

public:
	string personName;
	Person();
	~Person();

	Person(string name) {
		personName = name;
	}

	string getName() {
		return personName;
	}
};

