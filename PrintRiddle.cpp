#include <iostream>
using namespace std;

void PrintRiddle(int CurrentLevel, int MaxLevels, int CodeSum, int CodeProduct)
{
    string Warning = "\"Remember, if you answer wrongly, you will be banished!\"\n\n";
    if (CurrentLevel == 1)
    {}
    else if (CurrentLevel < MaxLevels)
    {
        cout << "\n\"Now for the next riddle!\"\n" << Warning;
    }
    else
    {
        cout << "\n\"Now for the final riddle!\"\n" << Warning;
    }
    
    // Print sum and product to the terminal
    cout << "\"Riddle #" << CurrentLevel << ":\n";
    cout << "There are three numbers:\n";
    cout << "They add up to: " << CodeSum << "\n";
    cout << "And multiply to give: " << CodeProduct << "\"" << endl;
}