#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();
    
    if (n == 0)
    {
        cout << n << endl;
        return 0;
    }
    
    int result = 5527;
    
    for (int i = 0; i < n; i++) 
    {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();
        
        if (abs(t) < abs(result))
            result = t;
            
        if (abs(t) == abs(result))
            if (t > 0)
                result = t;
    }

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << result << endl;
}
