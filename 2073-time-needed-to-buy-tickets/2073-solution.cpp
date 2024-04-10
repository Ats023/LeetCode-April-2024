class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int s = 0;
        for(int i = 0; i < tickets.size(); i++) {
            if(i<k) s+=min(tickets[k], tickets[i]);
            else if(i==k) s+=tickets[k];
            else s+=min(tickets[k]-1,tickets[i]);
        }
        return s;
    }
};
