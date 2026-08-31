class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int size = patterns.size ();
        int iteration = 0;
        int count = 0;

        do {
            if (word.contains (patterns[iteration])) count++;
            iteration++;
        } while (iteration < size);

        return count;
    
    }
};