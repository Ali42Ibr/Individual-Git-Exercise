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
    int arr[4];
    int *ptr = makeArray(arr,4);

    if (inputTest(ptr) == false){
        std::cout << "Something went wrong..";
    } else {
    for (int i = 0; i < 4; ++i) {
        std::cout << ptr[i] << ", ";
    }
    }



    return 0;
}