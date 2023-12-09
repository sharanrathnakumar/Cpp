#include<iostream>

class Base {
	private:
		int x;
		int y;

	public:

		void setNum(int a, int b)
		{
			x = a;
			y =b;
		}

		void displayNum()
		{
			std::cout << "Value of X : " << x << std::endl; 
			std::cout << "Value of Y : " << y << std::endl; 
		}
};



int main()
{
	int num1, num2;
	Base obj;

	std::cout << "Enter value for x and y: " << std::endl;
	std::cin >> num1 >> num2;

	obj.setNum(num1, num2);
	obj.displayNum();

	return 0;

}
