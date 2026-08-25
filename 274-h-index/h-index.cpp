class Solution {
public:
    int hIndex(vector<int>& citations) {
        int size = citations.size ();
        sort (citations.begin (), citations.end ());

        for (int i = 0; i < size; i++) {
            int hi = size - i;

            if (hi <= citations[i]) return hi;
        }
        return 0;
    }
};