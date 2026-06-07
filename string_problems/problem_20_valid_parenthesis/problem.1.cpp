#include <iostream>

class Solution {
	public:
	      bool isValid(std::string s);
};

bool Solution::isValid(std::string s){
    
}

int main(){
    std::string s = "{}(){}";
    Solution checking;

   bool result = checking.isValid(s);
   std::cout << "The result is always " << result << '\n';
}
