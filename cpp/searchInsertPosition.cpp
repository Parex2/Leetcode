    int searchInsert(vector<int>& nums, int target) {
        if(nums.size() == 1){
            return target > nums[0] ? 1 : 0;
        }
        auto left = nums.begin();
        auto right = nums.end() - 1;
        while(right - left > 0){
            if(target <= *left){
                std::cout << "left condition";
                return left - nums.begin();
            }
            if(target >= *right) {
                std::cout << "right condition";
                return target > *right ? right - nums.begin() + 1 : right - nums.begin();
            }
            ++left;
            --right;
            
        }
        std::cout << *left << " & " << *right;
        return target > *left ? left - nums.begin() + 1 :left - nums.begin();
    }