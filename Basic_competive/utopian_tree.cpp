#include<iostream>

int utopianTree(int n) {
    int winter = 1, summer = 0, height = 1;
    while(n) {
        if(winter)
        {
            height *= 2;
            winter = 0;
            summer =1;
        } else {
            height += 1;
            winter =1;
        }
        n--;
    }
    return height;
}

int main()
{
	int cycle = 0;
	std::cout << "Enter the number of cycle: "; std::cin >> cycle;
	std::cout << "The height of the tree will be : " << utopianTree(cycle) << std::endl;

	return 0;

}
