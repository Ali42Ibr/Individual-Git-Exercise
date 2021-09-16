#include <iostream>

//sort function
int *sort(int arr[], int size) {
  
  //outer function iterates through the entire array
  for (int i = 0; i < size; i++){
      //inner function puts the largest element at the end of the array then decreases iterations by one
      for (int j = 1; j < size-i; j++){
          if (arr[j] < arr[j-1]){
              //swaps if adjacent elements are in wrong order
              std::swap(arr[j],arr[j-1]);
          }
      }
  }

  return arr;
}

//test function
bool sortCheck(int arr[], int size){
    for (int i = 1; i < size; i++){
        if (arr[i-1] > arr[i]){
            return false;
        }
    }
    return true;
}



int main() {
    
    int unsortedArray [] = {80,22,44,13};

    int *ptr = sort(unsortedArray, 4);

    for (int i = 0; i < 4; ++i) {
        std::cout << ptr[i] << ", ";
    }

    if (sortCheck(ptr,4)){
        std::cout << "Sort function is working properly";
    }

    return 0;
}