#include <iostream>
using namespace std;

class Person
{
	int year;
	string name;
public:
	Person() 
	{
		year = 0;
		name = " ";
	}
	~Person() {}
	void setYear(int year)
	{
		this->year = year;
	}
	int getYear()
	{
		return year;
	}
	void setName(string name)
	{
		this->name = name;
	}
	
	string getName()
	{
		return name;
	}

	void print()
	{
		cout << " [ " << name << " " << year << " ]\n";
	}
};

class Student : public Person
{
	string group;
	string university;
public:
	Student()
	{
		group = " ";
		university = " ";
	}
	~Student() {}
	void setGroup(string group)
	{
		this->group = group;
	}
	void setUniversity(string university)
	{
		this->university = university;
	}
	void print()
	{
		cout << " [ " << getName() << " " << getYear() << " " << group << " " << university << " ]\n";
	}
};

class Teacher : public Person
{
	string discipline;
	string university;
public:
	void setDiscipline(string discipline)
	{
		this->discipline = discipline;
	}
	string getDiscipline()
	{
		return discipline;
	}
	void setUniversity(string university)
	{
		this->university = university;
	}
	string getUniversity()
	{
		return university;
	}
	void print()
	{
		cout << " [ " << getName() << " " << getYear() << " " << discipline << " " << university << " ]\n";
	}
};

class HeadOfDepartments : public Teacher
{
	string cathedra;
public:
	void setCathedra(string cathedra)
	{
		this->cathedra = cathedra;
	}
	string getCathedra()
	{
		return cathedra;
	}
	void print()
	{
		cout << " [ " << getName() << " " << getYear() << " " << getDiscipline() << " " << getUniversity() << " " << cathedra << " ]\n";
	}
};

int main()
{
	Student student;
	student.setName("Tyshchenko M");
	student.setYear(2003);
	student.setGroup("IPZ21008b");
	student.setUniversity("NYBIP");
	student.print();

	HeadOfDepartments person;
	person.setName("NEtyshchenko M");
	person.setYear(2003);
	person.setDiscipline("OOP");
	person.setUniversity("NYBIP");
	person.setCathedra("IT");
	person.print();

}