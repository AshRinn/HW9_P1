#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


//////////Funtion Prototypes///////////////
void printMatrix(double grade[][7], int N_ROWS, int N_COLS);
void GradeAvg(double grade[][7], int N_ROWS, int N_COLS);
double Avg, gradeAvg, agrade;
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
  cout << "Student" << setw(10)<< "Grade 1"<< setw(10)<< "Grade 2"<<setw(10)<< "Grade 3"<< setw(10)<< "Grade 4 "<< setw(15)<< "Grade Avg. "<< setw(15)<< "Final Grade"<< endl;
  
printMatrix (grade, N_ROWS, N_COLS);
GradeAvg(grade, N_ROWS, N_COLS);
  return 0;
  }

void printMatrix(double grade[][7], int N_ROWS, int N_COLS){
  for (int r = 0; r < N_ROWS; r++) {
    for (int c = 0; c < N_COLS; c++) {
      cout << setw(10) << grade[r][c];
      
    }
    cout << endl;
  }
  return;
  }
void GradeAvg(double grade[][7], int N_ROWS, int N_COLS){
  //for (int r = 0; r < N_ROWS; r++) {
    for (int c = 1; c < 4; c++){
      double agrade = grade[1][c];  
    
    }
  double Avg = agrade;
  double gradeAvg= (Avg/4);
  cout<< gradeAvg<< endl;
}


    //    grade[i][6] = (grade[i][1] * .2) + (grade[i][2]*.3) +(grade[i][3] * .3) + (grade[i][4] *.2)
  

