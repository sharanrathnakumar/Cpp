#include <vector>
#include <iostream>

using namespace std;


int main() {
    
    int array_count, queries, array_size;
    cin >> array_count >> queries ;
    
    vector <vector <int>> array(array_count);
    
    for(int i = 0; i < array_count; i++)
    {
        cin >> array_size;
        array[i].resize(array_size);
        
        for(int j = 0; j < array_size; j++)
        {
            cin >> array[i][j];                        
        }
    }
    
    int row, col;
    
    for(int k = 0; k < queries; k++)
    {
        cin >> row >> col;
        cout << array[row][col] << endl;
    }
    
    return 0;
}
