#include<bits/stdc++.h>

/*
std::clamp(value , low , high);
?std::clamp(val, low, high): Kisi value ko ek range (low aur high) ke beech limit karta hai. Agar value chhoti hai toh low return karega, aur badi hai toh high.

*/
int main(){

    auto val =1 ; // value<low = low
    auto result1 = std::clamp(val, 10, 100);
    std::cout << "result1 = " << result1 << " , type : " << typeid(result1).name() << std::endl;

    val = 101;//value < high = high
    auto result2 = std::clamp(val, 10, 100);
    std::cout << "result2 = " << result2 << " , type : " << typeid(result2).name() << std::endl;

    val = 10; //value equal to low = value
    auto result3 = std::clamp(val, 10, 100);
    std::cout << "result3 = " << result3 << " , type : " << typeid(result3).name() << std::endl;

    val = 100; // value equal to high = value
    auto result4 = std::clamp(val, 10, 100);
    std::cout << "result4 = " << result4 << " , type : " << typeid(result4).name() << std::endl;

    val = 50; // value > low and value < high = value
    auto result5 = std::clamp(val, 10, 100);
    std::cout << "result5 = " << result5 << " , type : " << typeid(result5).name() << std::endl; 


    return 0;
}
