class Solution {
public:
     int findLHS(vector<int>& nums) {
      unordered_map<int, int> freq;
      int maxLength = 0;
       
        for (int num : nums) {
        freq[num]++;
        }
        for (auto& pair : freq) {
            int key = pair.first;
            if (freq.count(key + 1)) {
                int currentLength = freq[key] + freq[key + 1];
                maxLength = max(maxLength, currentLength);
            }
        }

        return maxLength;
    }
};

