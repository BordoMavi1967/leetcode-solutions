class Solution {
public:
    int calPoints(vector<string>& operations) {
        int res = 0;
        vector<int> record;
        for(const string& op : operations){
            if(op == "+"){
                int plusses = record[record.size() - 1] + record[record.size() - 2];
                record.push_back(plusses);
                res += plusses;
            } else if(op == "C"){
                res -= record.back();
                record.pop_back();
            } else if(op == "D"){
                int doubleVal = record.back() * 2;
                record.push_back(doubleVal);
                res += doubleVal;
            } else{
                record.push_back(stoi(op));
                res += record.back();
            }
        }
        return res;
    }
};