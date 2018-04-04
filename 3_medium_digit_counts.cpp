//Title:统计数字
//Description:计算数字k在0到n中的出现的次数，k可能是0~9的一个值
#include<string>
int digitCounts(int k,int n){
    std::string s{""};
    while(n--)  s += std::to_string(n+1);
    s += "0";
    int res = 0;
    for(auto& c:s)
        if(c==k+48)
            res++;
    return res;
}