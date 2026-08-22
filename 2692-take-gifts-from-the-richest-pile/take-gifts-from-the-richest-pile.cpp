class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int size = gifts.size ();
        
        for (int i = 0; i < k; i++) {
                auto max = std::max_element (gifts.begin (), gifts.end ());
                int max_iteration = max - gifts.begin();
                int maxElement = *max;
                gifts[max_iteration] = sqrt (maxElement);
            }

        long long count = 0;

        for (long long i : gifts) {
            count += i;
        }
          
        return count;
    }
};