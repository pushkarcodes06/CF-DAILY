class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int curpop=0,maxpop=0,minyear=logs[0][0];
        vector<pair<int,int>> events;
        for (auto log : logs){
            events.push_back({log[0],+1});
            events.push_back({log[1],-1});
        }
         sort(events.begin(),events.end());

         for(auto e : events){
            curpop+=e.second;
            if(curpop>maxpop){
                maxpop = curpop;
                minyear = e.first;
            }
         }return minyear;
     }

};
