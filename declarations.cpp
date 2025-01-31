#include <iostream>
#include "helloworld.h"
#include <bitset>
std::string newRuleset = {}; //holds the string of binary that represents the current ruleset
int cellsLength = {230}; //lenght of each generation in cells, ALSO used for the amount of generations for now  Sidenote: 230 is a crude approximation of the number of characters the console terminal i'm using can display at fullscreen, feel free to switch it around  
int cells[230] = {}; //array holding the current generation of cells
int nextCells[230] = {}; //array to temporalily hold the next generation of cells before being copied into cells[]
int ruleNumber = {1}; //number that represents and is used to iterate through the rules SHITS ITSELF WHEN = {0}
int ruleSet[8] = {0, 0, 0, 0, 0, 0, 0, 0}; // holds the current ruletset in an array to be read by calculateState()


void changeRuleset() //convert ruleNumber to binary as a string, then take the digits of that binary number and assign them to the indexes of ruleSet
{
    newRuleset = std::bitset<8>(ruleNumber).to_string();
    for (int i = 0; i <= newRuleset.size(); i++)
    {
        ruleSet[i] = (newRuleset[i] - '0'); 
    }
    ruleNumber++;
}
void initializeCells()
{
    std::cout << "RULE #" << ruleNumber << "\n";
    for (int i = 0; i <= cellsLength; i++)
    {
        cells[i] = 0;
    }
    cells[cellsLength/2] = 1; 
}
void drawCells()
{
    for (int i = 0; i <= cellsLength; i++)
    {
        cells[i] == 0 ? std::cout << " " : std::cout << "@";
    }
    std::cout << "\n";
}
int calculateState(int a, int b, int c)
{
    if(a == 1 && b == 1 && c == 1) return ruleSet[0];
    if(a == 1 && b == 1 && c == 0) return ruleSet[1];
    if(a == 1 && b == 0 && c == 1) return ruleSet[2];
    if(a == 1 && b == 0 && c == 0) return ruleSet[3];
    if(a == 0 && b == 1 && c == 1) return ruleSet[4];
    if(a == 0 && b == 1 && c == 0) return ruleSet[5];
    if(a == 0 && b == 0 && c == 1) return ruleSet[6];
    if(a == 0 && b == 0 && c == 0) return ruleSet[7];
    else return 0;
}

void calculateGeneration()
{
    for (int i = 0; i <= cellsLength; i++)
    {
        int left  = cells[(i - leftOffset + cellsLength) % cellsLength];
        int state = cells[i];
        int right = cells[(i + rightOffset + cellsLength) % cellsLength];
        int newState = calculateState(left, state, right);
        nextCells[i] = newState;
    }
    for (int i = 0; i <= cellsLength; i++)
    {
    cells[i] = nextCells[i];
    }
}


