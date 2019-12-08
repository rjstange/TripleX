#include <iostream>
#include "PlayGame.cpp"
using namespace std;

int main()
{
    // Seeds rand by current time
    srand(time(NULL));

    const int MaxLevels = 5;
    int CurrentLevel = 1;

    while (CurrentLevel <= MaxLevels) // Loop the game until all levels are completed
    {
        bool bLevelComplete = PlayGame(CurrentLevel, MaxLevels);
        cin.clear(); // Clears any errors
        cin.ignore(); // Discards the buffer
        
        if (bLevelComplete)
        {
            ++CurrentLevel;
        }
    }
    
    cout << "\n\"You have answered all of my the riddles; proving yourself worthy to dwell in my presence!\"\n";
    cout << "\nTHE END\n";
    
    return 0;
}