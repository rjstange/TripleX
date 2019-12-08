#include <iostream>
#include "PlayGame.cpp"
using namespace std;

int main()
{
    const int MaxDifficulty = 5;
    int LevelDifficulty = 1;

    while (LevelDifficulty <= MaxDifficulty) // Loop the game until all levels are completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty, MaxDifficulty);
        cin.clear(); // Clears any errors
        cin.ignore(); // Discards the buffer
        
        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }
    
    cout << "\n\"You have answered all of my the riddles; proving yourself worthy to dwell in my presence!\"\n";
    cout << "\nTHE END\n";
    
    return 0;
}