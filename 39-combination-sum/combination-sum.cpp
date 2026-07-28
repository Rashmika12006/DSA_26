void solve(int i, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &candidates)
{
    if(target == 0)
    {
        ans.push_back(arr);
        return;
    }

    if(i == candidates.size())
    {
        return;
    }

    if(candidates[i] <= target)
    {
        arr.push_back(candidates[i]);
        solve(i, target - candidates[i], arr, ans, candidates);
        arr.pop_back();
    }

    solve(i + 1, target, arr, ans, candidates);
}

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>> ans;
        vector<int> arr;

        solve(0, target, arr, ans, candidates);

        return ans;
    }
};