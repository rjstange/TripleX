#include <iostream>

void PrintRiddle(int CurrentLevel, int MaxLevels, int CodeSum, int CodeProduct)
{
    std::string Warning = "\"Remember, if you answer wrongly, you will be banished!\"\n\n";
    if (CurrentLevel == 1)
    {}
    else if (CurrentLevel < MaxLevels)
    {
        std::cout << "\n\"Now for the next riddle!\"\n" << Warning;
    }
    else
    {
        std::cout << "\n\"Now for the final riddle!\"\n" << Warning;
    }
    
    // Print sum and product to the terminal
    std::cout << "\"Riddle #" << CurrentLevel << ":\n";
    std::cout << "There are three numbers:\n";
    std::cout << "They add up to: " << CodeSum << "\n";
    std::cout << "And multiply to give: " << CodeProduct << "\"" << std::endl;
}