class Solution {
public:
    string intToRoman(int num) {
        vector<int>val={1000, 900, 500, 400, 100,   90,  50,  40,   10,   9,   5,    4,    1};
        vector<string>ch={"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        string roman_num="";
        int times = 0;
            for(int i=0; i<13; i++){
                
                if(num ==0){
                    break;
                }
                times = num/val[i];
            
                while(times--){
                roman_num += ch[i];
                }
                    num %= val[i];
                }
        return roman_num;
    }
};