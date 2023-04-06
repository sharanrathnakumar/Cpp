#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int size;
    cin >> size;
    vector <int> array(size);
        
    for(int i =0; i < size; i++)
        cin >> array[i];  
        
    for(int i = size -1; i >=0 ; i--)
        cout << array[i] << " " ;
    
    return 0;
}
    
