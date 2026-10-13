#include<iostream>

template <typename T1, typename T2, typename T3>
class myclass{

    public:
        // function 1 to calculate area of square
        void area(T1 side);
        void area(T1 length, T2 breadth);
};


template <typename U1, typename U2, typename U3>
void myclass<U1, U2, U3>::area(U1 side){

    std::cout << "Area of square= " << side * side << std::endl;
}
template <typename U1, typename U2, typename U3>
void myclass<U1, U2, U3>::area(U1 length, U2 breadth){

    std::cout << "Area of rectangle= " << length * breadth << std::endl;
}

int main(){

    myclass<int, int, int> obj;
    obj.area(3);
    obj.area(2, 4);

    return 0;
}
