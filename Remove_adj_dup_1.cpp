#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<char> letters;
        
        for(const char& letter : s)
        {
            if(letters.empty() || letter != letters.top())
            {
                letters.push(letter);
            }
            else if(letter == letters.top())
            {
                letters.pop();
            }
        }
        
        
       string ans = "";
        stack<char> temp;
        
        while(!letters.empty())
        {
        temp.push(letters.top());
            letters.pop();
        }
        
        
        while(!temp.empty())
        {
        ans.push_back(temp.top());
            temp.pop();
        }
        
        return ans;
        
    }
};
