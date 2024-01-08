#include <iostream>

int main()
{
    static int num, flag;
    static unsigned long long int fact = 1;

	if(!flag)
	{
		std::cout << "Enter num: "; std::cin >> num;
		flag = 1;
	}

    if(num == 0) {
		std::cout << "Fact:" << fact << std::endl;
	    return 1;
	} else {
		fact = fact * num;
		num--;
        main();
	}
}
