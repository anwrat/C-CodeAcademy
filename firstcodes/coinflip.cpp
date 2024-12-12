#include <iostream>
#include <stdlib.h>
#include <ctime>

int main(){
    std::cout<<"A coin is tossed\n";
    srand(time(NULL));
    int coin=rand()%2;
    if(coin==0){
        std::cout<<"Heads\n";
    }
    else {
        std::cout<<"Tails\n";
    }
    return 0;
}