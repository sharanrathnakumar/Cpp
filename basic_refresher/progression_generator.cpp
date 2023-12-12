//generate AP, GP, HP series

#include<iostream>

class Progression {
	int A,R,N, ap, gp;
	float hp;

	public:

	Progression(int a, int b, int c) : A(a), R(b), N(c), ap(0), gp(1), hp(1.0) {} 
	void printAP()
	{
		ap = A;
		std::cout << "AP : ";
		for(int i =0; i < N; i++) {
			std::cout << ap << ", "; 
			ap += R;
		}
		std::cout << std:: endl;
	}

	void printGP()
	{
		gp = A;
		std::cout << "GP: ";
		for(int i =0; i < N; i++)
		{
			std::cout << gp << ",";
			gp *= R;
		}
		std::cout << std:: endl;
	}
	
	void printHP()
	{
		ap = A;
		std::cout << "HP: ";
		for(int i =0; i < N; i++)
		{
			hp = 1 / (float) ap;
			ap += R;
			std::cout << hp << ",";
		}
		std::cout << std:: endl;
	}
};


int main()
{
	int A, R, N;

	std::cout << "Enter the First Number 'A': " << std::endl;  std::cin >> A; 
	std::cout << "Enter the Common Difference / Ratio 'R': " << std::endl; std::cin >> R;
	std::cout << "Enter the number of terms 'N': " << std::endl; std::cin >> N;

	if(N <= 0 || R <= 0 ) {
		std::cout << "Invalid Entry :(" << std::endl;
		return -1;
	}

	Progression P(A,R,N);

	P.printAP();
	P.printGP();
	P.printHP();
}
