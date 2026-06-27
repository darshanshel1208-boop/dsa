class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n = nums1.size();
        int m = nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        vector<int> vis(m, 0);
        
        for(int i = 0; i < n; i++) {
            if (i > 0 && nums1[i] == nums1[i-1]) {
                continue;
            }
            
            for(int j = 0; j < m; j++) {
                if(nums1[i] == nums2[j] && vis[j] == 0) {
                    ans.push_back(nums1[i]);
                    vis[j] = 1;
                    break;
                }
                if(nums2[j] > nums1[i]) break;
            }
        }
        return ans;
    }
};