#include<iostream>
#include<thread>

void threadFun( std::string message)
{
	std::cout << "Thread: " << message << std::endl;
}

int main()
{
	std::string message = "Hello";

	std::thread thread1(threadFun, message);

	thread1.join();

	return 0;
}
