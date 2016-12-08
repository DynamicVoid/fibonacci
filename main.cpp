#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]){
    double lastNumber = 0, secondLastNumber = 0, currentNumber = 0;
    int number = 0;

    while(number <= atoi(argv[1])){
        if(number == 1){
            currentNumber = 1;
        }else{
            currentNumber = lastNumber + secondLastNumber;
        }
        secondLastNumber = lastNumber;
        lastNumber = currentNumber;

        number++;
    }

    std::cout << currentNumber << "\r\n";
    return 0;
}
