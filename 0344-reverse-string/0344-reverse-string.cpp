class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;
        int extra = right;

        while (left < right){
            char a = s[right];
            s[right] = s[left];
            s[left] = a;
            left++;
            right--;
            
        }
    }
};