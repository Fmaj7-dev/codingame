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
    int W; // width of the building.
    int H; // height of the building.
    cin >> W >> H; cin.ignore();
    int N; // maximum number of turns before game over.
    cin >> N; cin.ignore();
    int X0;
    int Y0;
    cin >> X0 >> Y0; cin.ignore();
    
    // searching interval
    int minX = 0;
    int minY = 0;
    int maxX = W-1;
    int maxY = H-1;
    
    int nextJumpX;
    int nextJumpY;

    // game loop
    while (1) 
    {
        string bombDir; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        cin >> bombDir; cin.ignore();
        cerr<<bombDir<<endl;
        
        if (bombDir.front() == 'U')
        {
            nextJumpY = (Y0 + minY)/2;
            maxY = Y0;
            Y0 = nextJumpY;
        }
        if (bombDir.front() == 'D')
        {
            nextJumpY = (Y0 + maxY+1)/2;
            minY = Y0;
            Y0 = nextJumpY;
        }
        if (bombDir.back() == 'R')
        {
            nextJumpX = (X0 + maxX+1)/2;
            minX = X0;
            X0 = nextJumpX;
        }
        if (bombDir.back() == 'L')
        {
            nextJumpX = (X0 + minX)/2;
            maxX = X0;
            X0 = nextJumpX;
        }
        

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;


        // the location of the next window Batman should jump to.
        cout << nextJumpX<<" "<<nextJumpY << endl;
    }
}
