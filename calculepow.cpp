#include <iostream>

double power(double x, int n){
    long long N = n; // since our n might go out of bounds. INT_MIN overflow case
    //first case our power is negative.
    if(N < 0){
        x = 1/x;
        N = -N;
    }
    double ans = 1.0;
    double curr = x;

    while(N>0){
        // now we have two case odd even powers;
        if(N % 2 == 1){
            ans *= curr;
        }
        curr *= curr;
        //now half our power 
        N /= 2;
    }
    return ans;

}