class Solution {
public:
    vector<int> nextSmallerEl(vector<int> &h, int n) {
        vector<int> vec(n);
        stack<int> st;
        st.push(-1);
        for(int i = n-1; i >= 0; i--) {
            while(st.top()!=-1 && h[st.top()]>=h[i]) st.pop();
            vec[i] = st.top();
            st.push(i);
        }
        return vec;
    }

    vector<int> prevSmallerEl(vector<int> &h, int n) {
        vector<int> vec(n);
        stack<int> st;
        st.push(-1);
        for(int i = 0; i < n; i++) {
            while(st.top()!=-1 && h[st.top()]>=h[i]) st.pop();
            vec[i] = st.top();
            st.push(i);
        }
        return vec;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size(), m = matrix[0].size(), area = INT_MIN;
        vector<int> height(m,0);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) 
            if(matrix[i][j]=='1') height[j]++;
            else height[j]=0;
            vector<int> next = nextSmallerEl(height, m);
            vector<int> prev = prevSmallerEl(height, m);
            for(int j = 0; j < m; j++) {
                if(next[j]==-1) next[j] = m;
                int l = height[j], b = next[j] - prev[j] - 1;
                area = max(area, b*l);
            }
        }
        return area;
    }
};
