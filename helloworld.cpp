#include <iostream>
#include "helloworld.h"
#include <chrono> 
#include <thread> 
int main() //for every individual rule, then for each individual generation, after that change the ruleset to the next
{
    for (int j = 0; j <= 0; j++) 
    {
        initializeCells();
        for (int i = 0; i <= 1000; i++)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            drawCells();
            //offsetIncrease();
            calculateGeneration();
        }
    changeRuleset(); 
    std::cout << "\n\n";
    }
    return 0;
}
//FIX HEADERS/EXTRA FILES ISSUES, THEN IMPLEMENTE RANDOM STARTING CONFIGURATIONS

