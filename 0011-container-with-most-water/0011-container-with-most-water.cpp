class Solution {
public:
    int maxArea(vector<int>& height) {
int n=height.size();
int water=0;


int left=0;
int right=n-1;

while(left<right){
 int area=(right-left)*min(height[right],height[left]);
 water=max(area,water);
if (height[left] < height[right]) {
    left++;
} else {
    right--;
}


}
return water;






        
    }
};