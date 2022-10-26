#include <iostream>
using namespace std;


//////////Funtion Prototypes///////////////
double printMatrix[60][7];

int main()
{
  double grade[60][7] = {
                        {1, 100, 100, 100, 100},
                        {2, 100, 0, 100, 0},
                        {3, 82, 94, 73, 86},
                        {4, 64,74, 84, 94},
                        {5, 94, 84, 74, 64}
                        };
  for (int = 0; i < 60; i++)
  {
      for (int n = 0; n < 7; n++)
      {
        grade[i][6] = (grade[i][1] * .2) + (grade[i][2]*.3) +(grade[i][3] * .3) + (grade[i][4] *.2)
      }  
  }
  
  
}


