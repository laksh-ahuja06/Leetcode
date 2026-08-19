class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int size = arr.size ();
        int answer = 0;
        for (int i = 0; i < size; i++) {
            for (int j = i; j < size; j++) {
                if ((j-i) % 2 == 0) {
                    for (int k = i; k <= j; k++) {
                        answer += arr[k];
                    }
                }
                else {
                        continue;
                    }
            }
        }
        return answer;
    }
};