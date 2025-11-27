    string addBinary(string a, string b) {
        if(a.size() < b.size()){
            std::swap(a, b);
        }
        std::string result;
        int len = a.size() - b.size();
        b = std::string(len, '0') + b;
        bool carry = false;
        for(int i = 0; i < b.size(); ++i){
            if(carry){
                result.push_back(48 + (a[a.size() - 1 - i] == b[b.size() - 1 - i]));
                carry = !(a[a.size() - 1 - i] == '0' && b[b.size() - 1 - i] == '0');
            }else{
                std::cout << (a[a.size() - 1 - i] == '1' && b[b.size() - 1 - i] == '1');
                result.push_back(48 + (a[a.size() - 1 - i] != b[b.size() - 1 - i]));
                carry = (a[a.size() - 1 - i] == '1' && b[b.size() - 1 - i] == '1');
            }
        }

        if(carry){
            result.push_back('1');
        }
        std::reverse(result.begin(), result.end());
        return result;
    }