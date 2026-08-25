class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        int size = height.size ();
        vector<int> answer;

        for (int i = 1; i < size; i++) {
            if (height[i-1] > threshold) answer.push_back (i);
        }

        return answer;
    }
};