class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        int jevelSize = jewels.length ();
        int stoneSize = stones.length ();

        for (int i = 0; i < stoneSize; i++) {
            for (int j = 0; j < jevelSize; j++) {
                if (jewels[j] == stones[i]) {
                    count++;
                }
            }
        }


        return count;
    }
};