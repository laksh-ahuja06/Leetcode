class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int min = INT_MAX;
        int indice = 0;
        int count = 0;
        for (int i = 0; i < capacity.size (); i++) {
            if (capacity[i] - itemSize < 0) continue; 
            if (capacity[i] - itemSize == 0) return i;
            if (capacity[i] - itemSize < min) {
                min = capacity[i] - itemSize;
                indice = i;
                count++;
            }
        }
        if (count == 0) return -1; 
        return indice;
    }
};