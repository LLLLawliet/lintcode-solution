//Title:第K大元素
//Description:在数组中找到第K大的元素
#include<vector>
int kthLargestElement(int n, vector<int> &nums) {
    n = nums.size() - n;
    for(int lo = 0, hi = nums.size()-1; lo < hi;){
        int i = lo,j = hi;
        int pivot = nums[lo];
        while(i < j){
            while(i<j && pivot<=nums[j])    j--;nums[i]=nums[j];
            while(i<j && pivot>=nums[i])    i++;nums[j]=nums[i];
        }
        nums[i] = pivot;
        if(n <= i)  hi = i-1;
        if(i <= n)  lo = i+1;
    }
    return nums[n];
}