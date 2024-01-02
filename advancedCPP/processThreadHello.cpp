#include<iostream>
#include<thread>
#include<string> // Include the header for string
#include<unistd.h> // Include the header for sleep

typedef struct parameterThread
{
	int id;
	std::string message;

} parThread;

void threadFun( parThread * parameter)
{
	std::cout << "ID: " << parameter->id << std::endl;
	std::cout << "Message: " << parameter->id << std::endl;

	sleep(5);

	std::cout << "Thread : " << parameter->id << " Exiting"<< std::endl;
}


int main()
{
	parThread parameter;
	std::cout << "Enter ID and name: "; std:: cin >> parameter.id >> parameter.message;
	std::thread thread1(threadFun, &parameter);
	std::cout << "Enter ID and name: "; std:: cin >> parameter.id >> parameter.message;
	std::thread thread2(threadFun, &parameter);

	thread1.join();
	thread2.join();

	return 0;
}
