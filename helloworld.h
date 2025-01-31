#ifndef HELLOWORLD
#define HELLOWORLD

void initializeCells(); //
void drawCells(); //Iterates through the cells array to print it out
int calculateState(int a, int b, int c); //Gets the next cell state for the next generation
void calculateGeneration(); //Takes the neighbors of a cell and passes their states to calculateState() 
void changeRuleset(); //If drawing more than one rule, changes to the next one after one loop of main

#endif
