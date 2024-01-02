#include<iostream>

struct sEmployee {
    int id;
	std::string name;
	std::string address;
};

class cEmployee {
	int id;
	std::string name;
	std::string address;
};


int main() {
  sEmployee emp1;
  cEmployee emp2;

  std::cout << "Size of sEmployee : " << sizeof(emp1) << std::endl;
  std::cout << "Size of cEmployee : " << sizeof(emp2) << std::endl;

  return 0;
}
