https://leetcode.com/problems/pascals-triangle-ii/

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        rowIndex+=1;
        vector<int> answer={1};
        long long temp=1;
        for(int i=1;i<rowIndex;i++){
            temp=temp* (rowIndex-i)/i;
            answer.push_back(temp);
        };
        return answer;
    };
};
