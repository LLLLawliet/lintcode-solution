//Title:合并排序数组II
//Description:合并两个排序(升序)的整数数组A和B变成一个新的数组(升序)
#include<vector>
vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
    vector<int> res.reserve(A.size()+B.size());
    auto iter_of_a = A.begin();
    auto iter_of_b = B.begin();
    while(iter_of_a != A.end() || iter_of_b != B.end()){
        if((iter_of_a != A.end() && iter_of_b != B.end() && *iter_of_a < *iter_of_b) || (iter_of_b == B.end() && iter_of_a != A.end())){
            res.push_back(*iter_of_a);
            ++iter_of_a;
        }
        else{
            res.push_back(*iter_of_b);
            ++iter_of_b;
        }
    }
    return res;
}