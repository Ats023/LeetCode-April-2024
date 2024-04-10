class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        deque<int> dq;
        sort(deck.begin(), deck.end());
        dq.push_front(deck[deck.size()-1]);
        for(int i = deck.size()-2; i>=0; i--) {
            dq.push_front(dq.back());
            dq.pop_back();
            dq.push_front(deck[i]);
        }
        for(int i = 0; i < deck.size(); i++) {
            deck[i] = dq.front();
            dq.pop_front();
        }
        return deck;
    }
};
