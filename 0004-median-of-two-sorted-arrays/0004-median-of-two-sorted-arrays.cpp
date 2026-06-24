class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());

      
        double median;

          bool iseven = nums1.size() % 2==0 ;

       if (iseven) {

            int mid = nums1.size() / 2;

            median =
                (nums1[mid - 1] + nums1[mid]) / 2.0;

        } else {

            median = nums1[nums1.size() / 2];
        }
        return median;
    
}
};