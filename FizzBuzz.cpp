//Time complexity - O(n)
//Space complexity - O(1)

class Solution {
public:
    vector<string> fizzBuzz(int n) {

        vector<string> answer;
        answer.reserve(n);
        
        
        for(int i = 1; i<=n; i++)
        {
            string word="";
            
            if(i%3==0)
            {
                word +="Fizz";
            }
            if(i%5==0)
            {
                word +="Buzz";
            }
            if(word.size()==0)
            {
                word = to_string(i);
            }
            
            answer.push_back(word);
            
        }
        
        return answer;
        
    }
};
