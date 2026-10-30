class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        // Pehle array ko sort karna zaroori hai, taaki duplicate elements aamne-saamne aa jayein
        sort(nums.begin(), nums.end()); 
        if (nums.size() <= 1) {
            return false;
        }
        
        int count = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                count++;
                return true; 
            }
        }
        return false; 
    }
};
