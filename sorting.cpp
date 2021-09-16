#include <iostream>

#include <iostream>

//takes user input
int *makeArray(int arr[],int size) {
  
    std::cout<<"Please input "<<size<<" integers";

    int count = 0;

    int userInput = 0;

    while (count < size){
      std::cin>>userInput;
      
      arr[count] = userInput;

      count++;
    }

     return arr;
}

bool inputTest(int arr[]){
    if (sizeof(arr)/sizeof(arr[0]) > 0 ){
        return true;
    } else {
        return false;
    }
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