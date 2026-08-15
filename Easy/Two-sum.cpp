class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int, int> mp; // {value, index}
        
        for(int i = 0; i < nums.size(); i++) {
            int need = target - nums[i]; // mujhe ye wala number chahiye
            
            // kya "need" wala number pehle dekh chuke hain?
            if(mp.find(need)!= mp.end()) {
                return {mp[need], i}; // mil gaya
            }
            
            // nahi mila to current number aur index store kar do
            mp[nums[i]] = i;
        }
        return {}; // question me bola hai exactly 1 solution hoga    
    }
};
