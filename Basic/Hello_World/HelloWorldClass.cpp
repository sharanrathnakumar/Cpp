#include <iostream>
using namespace std;

class Main {
    string s ="Hello World";
    public:  //Makes sure the members can be accessed outside class
    void greet() {
        std::cout << s << endl;
    }
};

int main()
{
    Main obj;
    obj.greet();
    return 0;
}
