class Solution {
public:
    int maxArea(std::vector<int>& height) {
            int left = 0;
            int right = height.size () - 1;
            int max = 0;

            while (left < right) {
                int minHeight = min (height[left], height[right]);
                int width = right - left;
                
                max = std::max (max, minHeight * width);

                if (height[left] < height[right]) left++;
                else {right--;}
                
            }

            return max;
        }
    };

  