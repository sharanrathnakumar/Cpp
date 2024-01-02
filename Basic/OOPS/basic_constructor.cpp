#include<iostream>
#include<cstring>

class Employee {
	int id;

	public:
	char *name;

	//default constructor
	Employee()
	{
		name = static_cast<char*> (malloc(sizeof(char)*7));
	}

};

int main()
{
	Employee e1;
	strcpy(e1.name, "sharan");

	std::cout << "Employee name : " << e1.name << std::endl;
	return 0;
}
