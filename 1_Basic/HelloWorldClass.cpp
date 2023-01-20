#include <iostream>
using namespace std;

class Main {
    public:  //Makes sure the members can be accessed outside class
    string s ="Hello World";
};

int main()
{
    Main obj;
    cout << obj.s << endl;
    return 0;
}
