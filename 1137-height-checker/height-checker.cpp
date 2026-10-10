class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expectedHeights (heights);
        int count = 0;
        sort (expectedHeights.begin (), expectedHeights.end ());
        for (int i = 0; i < heights.size (); i++) {
            if (heights[i] != expectedHeights[i]) count++;
        }
        
        return count;
    }
};