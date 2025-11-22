#include <string>
#include <map>
#include <stack>
#include <iostream>

bool isValid(std::string s) {
    std::stack<char> st;
    std::map<char, char> parentheses {{')', '('}, {'}', '{'}, {']', '['}};
    for(auto el : s){
        if(el == ']' || el == ')' || el == '}'){
            if(st.empty()){
                return false;
            }
            if(parentheses[el] != st.top()){
                std::cout << parentheses[el] << st.top() << std::endl;
                return false;
            }
            st.pop();
            continue;
        }
        
        st.push(el);
    }
    return st.empty();
}

int main(){
    std::cout << isValid("(") << std::endl;
}