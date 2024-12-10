#include <iostream>

int main(){
    int dog_age=10;//Age of dog
    int early_years=21;//First two years of dog equals to 21 human years
    
    //After the 2 years every following year counts as 4 human years
    int later_years=(dog_age-2)*4;
    int human_years=early_years+later_years;//Combination of both stages of dog's age
    std::cout<<"My name is Gasby! Ruff ruff, I am "<<human_years<<" years old in human years.";
    return 0;
}