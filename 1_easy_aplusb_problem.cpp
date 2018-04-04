//Title:A+B问题
//Description:给出两个整数a和b, 求他们的和, 但不能使用 + 等数学运算符。
int aplusb(int a, int b) {
    if(b){
        aplusb(a^b,(a&b)<<1);
    }
    else
        return a;
}