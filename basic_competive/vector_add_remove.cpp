#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size, pos, start, stop;
    cin >> size;
    vector <int> v(size);
    for(int i =0; i < size; i++)
    {
        cin >> v[i];
    }
    
    cin >> pos;
    v.erase(v.begin() + pos-1);
    cin >> start >> stop;
    v.erase(v.begin()+start-1, v.begin()+stop-1);
    cout << v.size() << endl;
    for(int value : v)
    cout << value << " " ;
    return 0;
}
