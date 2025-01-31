#ifndef HELLOWORLD
#define HELLOWORLD

void initializeCells(); //
void drawCells(); //Iterates through the cells array to print it out
int calculateState(int a, int b, int c); //Gets the next cell state for the next generation
void calculateGeneration(); 
void changeRuleset();

#endif
