class Solution {
public:
    int romanToInt(string s) {
        int result{0};
        int value{0};
        for (char x : s) 
        {
            switch (x) 
            {
                case 'I':
                    result += 1;
                    value = 1;
                    break;
                case 'V':
                    result += (value == 1) ? 3 : 5;
                    value = 5;
                    break;
                case 'X':
                    result += (value == 1) ? 8 : 10;
                    value = 10;
                    break;
                case 'L':
                    result += (value == 10) ? 30 : 50;
                    value = 50;
                    break;
                case 'C':
                    result += (value == 10) ? 80 : 100;
                    value = 100;
                    break;
                case 'D':
                    result += (value == 100) ? 300 : 500;
                    value = 500;
                    break;
                case 'M':
                    result += (value == 100) ? 800 : 1000;
                    value = 1000;
                    break;
            }
        }
        return result;
    }
};