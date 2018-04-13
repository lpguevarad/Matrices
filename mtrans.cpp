#include <iostream>

const int M = 3;
const int N = 5;

int main()
{

  double A[M][N] = {{0.0}};
  double AT[N][M] = {{0.0}};

  //matriz inicial
  for (int ii = 0; ii < M; ii++){
    for (int jj =0;jj< N; jj++){
      A[ii][jj] = ii*N+jj;
    }
  }
  
  //imprimir matriz inicial  
  std::cout << "Original matrix : \n";
  for (int ii = 0; ii < M; ++ii){
    for( int jj =0; jj< N; ++jj){
      std::cout << A[ii][jj] << " ";
      }
    std::cout <<"\n";
  }

  //matriz transpuesta
  for (int ii = 0; ii < M; ++ii){
    for(int jj =0; jj < N; ++jj){
      AT[jj][ii] = A[ii][jj];
      }
  }

  //imprimir matriz transpuesta
  std::cout << "Transposed matrix : \n";
  for (int ii = 0; ii< N; ++ii){
    for(int jj =0; jj < M; ++jj){
      std::cout << AT[ii][jj] << " ";
    }
    std::cout << "\n";
  }
     
  return 0;
}
