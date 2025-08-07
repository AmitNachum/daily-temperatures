#pragma once
#include <concepts>
#include <iostream>
#include <vector>
#include <stack>
#include <limits>
#include <type_traits>
#include <memory>




template <typename T>
concept numerical = std::is_arithmetic_v<T>;

template <numerical T>
std::shared_ptr<std::vector<T>> daily_temperatures(const std::vector<T> temp){
    
    std::shared_ptr<std::vector<T>> result = std::make_shared<std::vector<T>>(temp.size(),0);
    std::stack<std::pair<T,size_t>> stk;

    size_t size = temp.size();

    for(size_t i = 0 ; i < size ; ++i){
        while(!stk.empty() && (stk.top().first)< temp[i]){
            auto [temperature, index] = stk.top();
            stk.pop();
            (*result)[index] = i - index;            
        }
        stk.push({temp[i],i});
    }
    return result;
}