#include "daily_temp.hpp"


int main(){
    std::vector<int> temperature = {50,78,60}; // output: [1,0,0];
    auto res = daily_temperatures(temperature);
    std::cout <<"[";
    for(const auto& number : (*res)){
        std::cout << number << " ";
    }
    std::cout <<"]\n";



    return 0;
}