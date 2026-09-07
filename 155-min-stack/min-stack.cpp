class MinStack {
public:
    stack<int>s;
    stack<int>ms;
    MinStack() {
    }
    void push(int value) {
        s.push(value);
        if(!ms.empty()){
            ms.push(min(ms.top(),value));
        }
        else ms.push(value);
    }
    void pop() {
        if(!s.empty() && !ms.empty()) {
            s.pop();
            ms.pop();
        }
    }
    int top() {
        return !s.empty()?s.top() : -1;
    }
    int getMin() {
       return !ms.empty()?ms.top() : -1;
    }
};
// class MinStack {
// public:
//     stack<pair<int, int>> st;
//     MinStack() {
        
//     }
//     void push(int val) {
//         if (!st.empty()) {
//             st.push({val, min(val, st.top().second)});
//         } else {
//             st.push({val, val});
//         }
//     }
    
//     void pop() {
//         st.pop();
//     }
    
//     int top() {
//         return st.top().first;
//     }
    
//     int getMin() {
//         return st.top().second;
//     }
// };