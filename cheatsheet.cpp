#include <iostream>
#define MOD 1000000007
namespace Optimize{
    int modularMul(int a,int b,int mod=MOD){
        int result=0;
        while (b > 0) {
            if (b % 2 == 1) {
                result = (result + a) % mod;
            }
            a = (a * 2) % mod;
            b = b / 2;
        }
        return result;
    }

    auto untie(){
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        std::cout.tie(0);
        return 'c';
    }
}