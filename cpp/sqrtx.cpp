#include <iostream>

int mySqrt(int x) {
    if(x < 1){
        return 0;
    }
    uint result = x > 1 ? x/2 : x;
    uint xn = 0;
    while(true){
        xn = result;
        result = 0.5 * (result + x/result);
        if(xn <= result){
            break;
        }
    }
    return xn;
}

int main(){
    std::cout << mySqrt(4) << std::endl;
}