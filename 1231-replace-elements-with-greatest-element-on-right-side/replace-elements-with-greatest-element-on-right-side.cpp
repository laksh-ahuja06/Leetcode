class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> answer;

        for (int i = 0; i < arr.size()-1; i++) {
            int greatest = 0;
            for (int j = i+1; j < arr.size(); j++) {
                if (arr[j] > greatest) greatest = arr[j];
            }

            answer.push_back (greatest);
        }
    answer.push_back (-1);
    return answer;
    }
};