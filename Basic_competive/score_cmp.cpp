#include<iostream>
#include<vector>

std::vector<int> compareTriplets(std::vector<int> &a, std::vector<int> &b) {
	
	std::vector<int> score(2,0);

    for(int i =0; i < a.size(); i++)
    {
        if(a[i] > b[i])
        {
            score[0]++;
        } else if(a[i] < b[i]) {
            score[1]++;
        }
    }
    return score;
}


int main()
{
	std::vector<int> alice, bob, score;
	int subCount, tmp;
	std::cout << "Number of subjects: "; std::cin >> subCount;

	for(int i = 0; i < 2*subCount; i++)
	{
		if( i < subCount) {
			std::cout << "Alice Score: " << (i % subCount) +1 << " : "; std::cin >> tmp;
			alice.push_back(tmp);
		} else {
			std::cout << "BoB Score: " << (i % subCount) +1 << " : "; std::cin >> tmp;
			bob.push_back(tmp);
		}
	}

	score = compareTriplets(alice, bob);

	std::cout << "Final Score: " << "[" << score[0] << "," << score[1] << "]" << std::endl;
	return 0;
}
