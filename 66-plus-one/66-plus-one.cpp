class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;       
        for(int i = digits.size() - 1 ; i>=0; i--){
            if(i == 0 && digits[i] == 9 && carry == 1){
                digits[0] = 1;
                digits.push_back(0); 
                return digits;
            }
            else if(digits[i] == 9 && carry == 1){
                digits[i] = 0;
                carry = 1;
            }
            else{
                digits[i] = digits[i] + carry;
                carry =0;
            }
        }
    return digits; 
    }
};