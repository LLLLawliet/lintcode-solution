//Title:丑数II
//Description:设计一个算法，找出只含素因子2，3，5 的第 n 小的数，
#include<vector>
#include<cmath>
int nthUglyNumber(int n) {
    // write your code here
    vector<int> tmp(n);
    int index_of_two = 0,index_of_three = 0,index_of_five = 0;
    tmp[0] = 1;
    for(int i = 1; i <n; i++){
        int ugly_num = min(tmp[index_of_two]*2,min(tmp[index_of_three]*3,tmp[index_of_five]*5));
        if(ugly_num == tmp[index_of_two]*2)    index_of_two++;
        if(ugly_num == tmp[index_of_three]*3)  index_of_three++;
        if(ugly_num == tmp[index_of_five]*5)    index_of_five++;
        tmp[i] = ugly_num;
    }
    return tmp.back();
}