#include <iostream>
#include <string>
#include "House.h"

class Student {
private:
	size_t id;
	static size_t students_number;
	std::string name;
	static std::string group;
	static const time_t max_age = 55;
	time_t age;

public:
	Student(): Student("", 0) {}
	Student(std::string name, time_t age) {
		this->name = name;
		setAge(age);
		id = ++students_number;
	}
	
	std::string getName() {return name;}
	void setName(std::string name) { this->name = name; }
	
	static std::string getGroup() { return group; }
	static void setGroup(std::string group) { Student::group = group; }
	
	time_t getAge() { return age; }
	void setAge(time_t age) {
		if (age >= 0 && age <= max_age)
			this->age = age;
		else
			this->age = 0;
	}

	size_t getId() { return id; }
	static size_t getStudentsNumber() { return students_number; }
	
};

std::string Student::group = "BV311";
size_t Student::students_number = 0;

int main() {
	setlocale(LC_ALL, "russian");
	int n;

	//Модификации членов классов
	/*
	//std::cout << Student::group << std::endl;

	Student s1("Tom Smith", 20), s2("Bob Thomas",30);
	std::cout << s1.getGroup() << std::endl;
	std::cout << s2.getGroup() << std::endl;
	Student::setGroup("BW311");
	std::cout << s1.getGroup() << std::endl;
	std::cout << s2.getGroup() << std::endl;
	std::cout << Student::getGroup() << std::endl;

	const Student s3("Nikolay Smirnoff", 25);
	*/




	return 0;
}