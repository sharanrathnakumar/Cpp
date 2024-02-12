#include <iostream>
#include <stack>
#include <string>


int scoreOfParentheses(std::string S) {
	std::stack<int> st;
    int score = 0;

    for (char c : S) {
        if (c == '(') {
            st.push(score);
            score = 0;
        } else {
            score = st.top() + std::max(2 * score, 1);
            st.pop();
        }
    }

    return score;
}

int main() {
	std::string input;
	std::cout << "Input: "; std::cin >> input;
	std::cout << "Score of parentheses: " << scoreOfParentheses(input) << std::endl;
    return 0;
}

