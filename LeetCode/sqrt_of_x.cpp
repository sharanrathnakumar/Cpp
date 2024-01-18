#include<iostream>
#include<cmath>

class Solution {
public:
    int mySqrt(int x) {
        if ( x == 0 || x == 1)
        return x;

        int start = 1, end = x, mid =-1;

        while ( start <= end ) {
            mid = start + ( end - start)/2;

            long long square = static_cast<long long> (mid) * mid;

            if (square > x) {
                end = mid -1;
            } else if (square == x) {
                return mid;
            } else {
                start = mid +1;
            }
        }
        return static_cast <int> (std::round(end));
    }
};

int main()
{
	int num =0;
	std::cout << "Enter a number: "; std::cin >> num;

	Solution *s1 = new Solution();

	std::cout << "The squre root of " << num << " is: " <<  s1->mySqrt(num) << std::endl;

	return 0;
}
