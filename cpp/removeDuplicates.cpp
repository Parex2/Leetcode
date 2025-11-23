    int removeDuplicates(std::vector<int>& nums) {
        auto left = nums.begin();
        auto right = left + 1;
        int k = 1;
        while(right != nums.end()){
            if(*left != *right){
                nums[k] = *right;
                ++k;
                left = right;
            }
            ++right;
            
        }
        

        return k;
    }