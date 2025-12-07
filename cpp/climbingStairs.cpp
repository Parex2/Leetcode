    int climbStairs(int n) {
        std::pair<int, int> el {0, 1};
        int result = 0;
        for(int i = 0; i < n; ++i){
            result = el.first + el.second;
            el.first = el.second;
            el.second = result;
        }

        return result;
    }