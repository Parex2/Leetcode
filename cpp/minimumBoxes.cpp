int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        std::sort(capacity.begin(), capacity.end(), std::greater<>());
        int result = 0;
        int total = 0;
        int sum = 0;
        for(auto& x : apple){
            total += x;
        }
        for(int i = 0; i < capacity.size(); ++i){
            sum += capacity[i];
            ++result;
            if(sum >= total){
                break;
            }
        }
        return result;
    }