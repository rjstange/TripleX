#include <string>
using namespace std;

// Print introduction messages to the terminal
void PrintIntroduction(int CurrentLevel, int TotalLevels)
{
    string Remember = "\"Remember, if you answer wrongly, you will be banished!\"\n\n";
    // First level introduction
    if (CurrentLevel == 1)
    {
        cout << "\nYou wake up in a strange place composed entirely of geometric shapes.\n";
        cout << "A complex geometric form approaches you and you hear it speak in your mind:\n\n";

        cout << "\"I am Hedronax, the Math Lord. You are in The Hyperplane.\n";
        cout << "All that lives here is perfect math.\n";
        cout << "To prove you belong here, I require you to solve " << TotalLevels << " riddles of math.\n";
        cout << "Answer wrongly, even once, and you will be banished!\"\n\n";
    }
    else if (CurrentLevel == TotalLevels)
    {
        cout << "\n\"Well done! Now for the final riddle!\"\n";
        cout << Remember;
    }
    
    // Message for subsequent levels.
    else
    {
        cout << Remember;
    }
}