#include <iostream>
//using namespace std;

void types(){

    int num = 1;
    int num2;

    bool boolean = true;

    if(boolean){
        num2 = 9;
    }
    else{
        num2 = 56;
    }
    // kjører til og med i = 4
    for(int i = 0 ; i < 5; i++){
        num2 = i;
    }

    std::cout << num2 << std::endl;
}

//int integer = 1657; // ikke lov med desimal

