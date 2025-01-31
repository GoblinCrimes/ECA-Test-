#include <iostream>
#include "helloworld.h"
int main() //for every individual rule, then for each individual generation, after that change the ruleset to the next
{
    for (int j = 0; j <= 0; j++) //Number of rulesets to be drawn, j should be between 0 and 254
    {
        initializeCells();
        for (int i = 0; i <= 1000; i++) //Number of generations to draw for each ruleset
        {
            drawCells();
            calculateGeneration();
        }
    changeRuleset(); 
    std::cout << "\n\n";
    }
    return 0;
}


