#include <iostream>
#include <vector>
#include <stack>
#include <string>

int calPoints(std::vector<std::string>& ops) {
    std::stack<int> points;

    for (const std::string& op : ops) {
        if (op == "+") {
            int top = points.top();
            points.pop();
            int newTop = top + points.top();
            points.push(top);
            points.push(newTop);
        } else if (op == "D") {
            points.push(2 * points.top());
        } else if (op == "C") {
            points.pop();
        } else {
            points.push(std::stoi(op));
        }
    }

    int sum = 0;
    while (!points.empty()) {
        sum += points.top();
        points.pop();
    }

    return sum;
}

int main() {
    std::vector<std::string> ops1 = {"5","2","C","D","+"};
    std::cout << "Total points: " << calPoints(ops1) << std::endl;

    std::vector<std::string> ops2 = {"5","-2","4","C","D","9","+","+"};
    std::cout << "Total points: " << calPoints(ops2) << std::endl;

    return 0;
}

