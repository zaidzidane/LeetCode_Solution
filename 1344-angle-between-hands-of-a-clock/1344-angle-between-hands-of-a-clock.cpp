class Solution {
public:
    
    double angleClock(int hour, int minutes) {
        

        float minutes_angle=(minutes/60.0)*360;
        float hrs_angle=(hour%12)*30+(minutes/60.0)*30;
        
        //cout<<abs(minutes_angle-hrs_angle)<<endl;
    
        return min(abs(minutes_angle-hrs_angle),360-abs(hrs_angle-minutes_angle));
    }
};