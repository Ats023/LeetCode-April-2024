class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int circ = 0, sq = 0;
        for(int &stud: students) 
        if(stud==0) circ++;
        else sq++;

        for(int &sw: sandwiches) {
            if(sw==0 && circ==0) return sq;
            if(sw==1 &&  sq==0) return circ;
            if(sw==0) circ--;
            else sq--;
        }
        return 0;
    }
};
