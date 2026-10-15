class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squares;
        vector<int> squares1;

        int left = 0;
        int right = nums.size() - 1;
        int end = nums.size();
        int i =0;
        while(i<end){
            int square = nums[i]*nums[i];
            squares.push_back(square);
            i++; 
        }
        //sort(squares.begin(),squares.end());
        int comp = right;
        while (left <= right){
            if(squares[left]>squares[right]){
                squares1.push_back(squares[left]);
                left++;
            

            }
            else{
                squares1.push_back(squares[right]);
                right--;

            }
        }
        reverse(squares1.begin(),squares1.end());
        return squares1;
    }
};