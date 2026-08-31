class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> answer;
        for (int i = 0; i < order.size (); i++) {
            if (std::ranges::contains (friends, order[i])) answer.push_back (order[i]);
            else {
                continue;
            }
         }
         return answer;
    }   
};