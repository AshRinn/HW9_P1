#include <iostream>
using namespace std;


//////////Funtion Prototypes///////////////
void printMatrix(int myMat[][7], int N_ROWS, int N_COLS);

int main()
{
  const int N_ROWS = 5;
  const int N_COLS = 7;
  double grade[N_ROWS][N_COLS] = 
                        {
                        {1, 100, 100, 100, 100},
                        {2, 100, 0, 100, 0},
                        {3, 82, 94, 73, 86},
                        {4, 64,74, 84, 94},
                        {5, 94, 84, 74, 64}
                        };
  printMatrix( grade, N_ROWS, N_COLS);

  return 0;
  }

void printMatrix(int grade[][7], int N_ROWS, int N_COLS)

  for (int = 0; i < 5; i++)
  {
      for (int n = 0; n < 7; n++)
      {
        grade[i][6] = (grade[i][1] * .2) + (grade[i][2]*.3) +(grade[i][3] * .3) + (grade[i][4] *.2)
      }  
  }

}


