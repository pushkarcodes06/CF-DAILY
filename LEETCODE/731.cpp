//using Sweepline method
class MyCalendarTwo {
public:
map<int,int> event;

    MyCalendarTwo() {
        
    }
    
    bool book(int startTime, int endTime) {
        event[startTime] += 1;
        event[endTime] -= 1;
        int count =0;

        for(auto e: event){
            count += e.second;
            if(count > 2){
                event[startTime] -= 1;
                event[endTime] += 1;

                return false;
            }

        }return true;
    }
