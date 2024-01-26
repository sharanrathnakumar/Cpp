#include<iostream>
#include<vector>
#include<map>

class TopVotedCandidate {
public:
   TopVotedCandidate(std::vector<int>& persons, std::vector<int>& times) {
        int n = persons.size();
        std::vector<int> votes(n);
        int leader = -1;
        int maxVotes = 0;

        for (int i = 0; i < n; ++i) {
            ++votes[persons[i]];
            if (votes[persons[i]] >= maxVotes) {
                maxVotes = votes[persons[i]];
                leader = persons[i];
            }
            leader_at_time[times[i]] = leader;
        }
    }

    int q(int t) {
        auto it = leader_at_time.upper_bound(t);
        if (it != leader_at_time.begin()) {
            --it;
        }
        return it->second;
    }

private:
   std::map<int, int> leader_at_time;
};


int main() {
    std::vector<int> persons = {0, 1, 1, 0, 0, 1, 0};
    std::vector<int> times = {0, 5, 10, 15, 20, 25, 30};


    TopVotedCandidate election(persons, times);

    // Query the winner at different times
    std::cout << "Winner at time 3: " << election.q(3) << std::endl;   // Output: 0
    std::cout << "Winner at time 12: " << election.q(12) << std::endl;  // Output: 1
    std::cout << "Winner at time 25: " << election.q(25) << std::endl;  // Output: 1

    return 0;
}
