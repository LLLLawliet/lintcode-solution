//Title:Fizz Buzz 问题
//Description:给你一个整数n. 从 1 到 n 按照下面的规则打印每个数：
//            如果这个数被3整除，打印fizz.
//            如果这个数被5整除，打印buzz.
//            如果这个数能同时被3和5整除，打印fizz buzz.
vector<string> fizzBuzz(int n) {
    vector<string> res(n,"");
    for(int i = 1; i <=n; i++){
        int a = (i%15);
        switch(a){
            case 0: res[i-1]="fizz buzz";
                    break;
            case 3: res[i-1]="fizz";
                    break;
            case 5: res[i-1]="buzz";
                    break;
            case 6: res[i-1]="fizz";
                    break;
            case 9: res[i-1]="fizz";
                    break;
            case 10:res[i-1]="buzz";
                    break;
            case 12:res[i-1]="fizz";
                    break;
            default:res[i-1]=to_string(i);
                    break;
        }
    }
    return res;
}