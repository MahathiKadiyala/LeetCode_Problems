class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(auto c:operations){
            if(c=="+"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.push(a);
                st.push(a+b);
            }
            else if(c=="D"){
                st.push(2*st.top());
            }
            else if(c=="C" && !st.empty()){
                st.pop();
            }
            else st.push(stoi(c));
        }
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};