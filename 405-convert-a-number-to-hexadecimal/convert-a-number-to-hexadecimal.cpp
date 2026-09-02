class Solution {
public:
    string toHex(int num) {
        string answer;
        if (num == 0) return "0";
        unsigned int nums = num;

        while (nums > 0) {
            int rem = nums % 16;
            if (rem >= 0 && rem < 10) answer+=std::to_string (rem);
            else if (rem >= 10) answer+= 'a' + rem-10;
            nums = nums / 16;
        }

        std::reverse (answer.begin (), answer.end ());
        return answer;
    }
};