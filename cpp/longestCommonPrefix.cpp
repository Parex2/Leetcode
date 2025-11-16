#include <string>
#include <iostream>
#include <vector>

std::string longestCommonPrefix(std::vector<std::string>& strs) {
    std::string result = strs[0];
    for(int i = 1; i < strs.size(); ++i){
        result = result.substr(0, std::min(result.size(), strs[i].size()));
        for(int j = 0; j < result.size(); ++j){
            if(strs[i][j] != result[j]){
                result = result.substr(0,j);
                break;
            }
        }
        if(result.empty()) {
            break;
        }
    }
    return result;
}

int main(){

    std::vector<std::string> test {"ab", "a"};

    std::cout << longestCommonPrefix(test) << std::endl;

}