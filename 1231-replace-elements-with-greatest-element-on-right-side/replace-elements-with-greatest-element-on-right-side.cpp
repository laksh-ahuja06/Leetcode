class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int size = arr.size ();
        vector<int> answer;

        for (int i = 0; i < size-1; i++) {
            int greatest = 0;
            for (int j = i+1; j < size; j++) {
                if (arr[j] > greatest) greatest = arr[j];
            }
            answer.push_back (greatest);
        }
    answer.push_back (-1);
    return answer;
    }
};