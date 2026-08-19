#include<sstream>
#include<string>

class Solution {
public:
    string truncateSentence(string s, int k) {
        std::vector<std::string> ans;
        std::stringstream ss(s);
        std::string items;
        while (std::getline (ss, items, ' ')) {          
                 ans.push_back (items);
        }

        for (string i : ans) {
            cout << i << endl;
        }

        std::string finalResult;


        for (int i = 0; i < k; i++) {
            finalResult += ans[i];
            if (i!= k-1) {
                finalResult += " ";
            }
        } 
        
        return finalResult;
       
    }
};