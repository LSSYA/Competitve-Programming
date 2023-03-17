class Solution {
public:
    vector<int> hours = {1, 2, 4, 8};
    vector<int> minutes = {1, 2, 4, 8, 16, 32};
    vector<string> result;

    void generateTimes(int hr, int min, int idx, int remainingLeds) {
        
        if (remainingLeds == 0)
        {
            
            string time = to_string(hr) + (min < 10 ? ":0" : ":") + to_string(min);
            result.push_back(time);
            return;
        }

       
        for (int i = idx; i < hours.size() + minutes.size(); i++) {
            if (i < hours.size()) 
            {
               
                hr += hours[i];
                if (hr < 12) 
                {
                    generateTimes(hr, min, i + 1, remainingLeds - 1);
                }

                hr -= hours[i];
            } 
            else 
            {
            
                min += minutes[i - hours.size()];
                
                if (min < 60) 
                {
                    generateTimes(hr, min, i + 1, remainingLeds - 1);
                }
                
                min -= minutes[i - hours.size()];
            }
        }
    }

    vector<string> readBinaryWatch(int turnedOn) 
    {
        generateTimes(0, 0, 0, turnedOn);
        return result;
    }
};
