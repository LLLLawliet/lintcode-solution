//Title:尾部的零
//Description:设计一个算法，计算出n阶乘中尾部零的个数
#include <cmath>
long long trailingZeros(long long n){
    long long res = 0;
    long long cnt = log(n)/log(5);
    for(auto i = 1; i <= cnt; i++){
        res += n/(long long)pow(5,i);
    }
    return res;
}