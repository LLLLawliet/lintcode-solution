//Title:旋转字符串
//Description:给定一个字符串和一个偏移量，根据偏移量旋转字符串(从左向右旋转)
void rotateString(string &str, int offset) {
    if(str.empty()) return;
    offset = offset % str.size();
    if(!offset) return;
    auto reverse = [](string& s,int lo,int hi){
        while(lo < hi)  swap(s[lo++],s[hi--]);
    };
    reverse(str,0,str.size()-1-offset);
    reverse(str,str.size()-offset,str.size()-1);
    reverse(str,0,str.size()-1);
}