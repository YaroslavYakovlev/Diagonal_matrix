#include <iostream>
#include <vector>

const int n = 4;

void fillingArray(float (&arr)[n][n], int n){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){      
      std::cin >> arr[i][j];
    }
  }
}

void print(float (&arr)[n][n], int n){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      std::cout << arr[i][j];
    }
    std::cout << std::endl;
  }
}

int main(){
  std::cout << "Diagonal_matrix" << std::endl;

  float arr_1[n][n];
  std::cout << "Matrix" << std::endl;
  fillingArray(arr_1, n);
  std::cout << std::endl;  
  print(arr_1, n);
  std::cout << std::endl;  

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){    
      if(arr_1[i][i] != arr_1[i][j])
        arr_1[i][j] = 0;
    }
  }
  print(arr_1, n);

  return 0;
}
