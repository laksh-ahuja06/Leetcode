class Solution {
public:
    int distributeCandies(vector<int>& candyType) {

        int size = candyType.size () / 2;

        unordered_set<int> um;

        for (int i : candyType) {
            um.insert (i);
        }

        int mainSize = um.size ();

        return min (mainSize, size);
    }
};