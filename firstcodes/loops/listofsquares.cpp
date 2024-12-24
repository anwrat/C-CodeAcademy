//Fun Fact: This program was the first program ever to run on a stored-program computer EDSAC on 1948.
//Print numbers and their squares on right side
#include <iostream>

int main(){
    int i=0;
    while(i<10){
        std::cout<<i<<" "<<(i*i)<<"\n";
        i++;
    }
    return 0;
}