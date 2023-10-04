class Solution1 {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1, j=n-1, k = m+n-1;
        int mx;
        
        while(i >=0 and j >= 0){
            if(nums1[i] > nums2[j]){
                mx = nums1[i];
                i--;
            }
            else{
                mx = nums2[j];
                j--;
            }
            nums1[k] = mx;            
            k--;          
        }
        
        while( i >= 0){
            nums1[k] = nums1[i];
            i--;
            k--;
        }
        
        while(j >= 0){
            nums1[k] = nums2[j];
            j--;
            k--;
        }        
    }
};

/*----------------------------------------*/
class Solution2 {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int j = 0, i = m; j<n; j++){
            nums1[i] = nums2[j];
            i++;
        }
        sort(nums1.begin(),nums1.end());
    }
};

/*----------------------------------------*/

class Solution3 {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        
        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
    }
};

