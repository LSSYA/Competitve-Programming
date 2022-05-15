class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        stack<int> push;
        
        int j = 0; 
        
        for(auto val : pushed){
            
            push.push(val);
            
            while(push.size() > 0 && push.top() == popped[j]){
                push.pop();
                j++;
            }
        }
        return push.size() == 0;
    }
};