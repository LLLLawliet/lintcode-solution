//Title:二叉查找树中搜索区间
//Description:给定两个值 k1 和 k2（k1 < k2）和一个二叉查找树的根节点。
//            找到树中所有值在 k1 到 k2 范围内的节点。
//            即打印所有x (k1 <= x <= k2) 其中 x 是二叉查找树的中的节点值。返回所有升序的节点值。

vector<int> searchRange(TreeNode * root, int k1, int k2) {
    if(root == nullptr) return vector<int>{};
    vector<int> res,left,right;
    if(root->val < k1)  right = searchRange(root->right,k1,k2);
    else if(root->val >k2)  left = searchRange(root->left,k1,k2);
    else{
        right = searchRange(root->right,k1,k2);
        left = searchRange(root->left,k1,k2);
    }
    res.insert(res.end(),left.begin(),left.end());
    if(root->val >= k1 && root->val <= k2)  res.push_back(root->val);
    res.insert(res.end(),right.begin(),right.end());
    return res;
}