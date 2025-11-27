    int lengthOfLastWord(string s) {
        auto right = s.end() - 1;
        int result = 0;
        //std::cout << ((*right >= 65 && *right <= 90) || (*right >= 97 && *right <= 122)) << *right;
        while(right >= s.begin()){
            if((*right >= 65 && *right <= 90) || (*right >= 97 && *right <= 122)){
                ++result;
            }
            if(result > 0 && *right == 32){
                return result;
            }
            --right;
        }

        return result;
    }