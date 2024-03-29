class Solution {
public:
    bool isLeap(int year){
        return (year%4==0 && year%100!=0) || year%400==0;
    }
    int daysInMonth(int month,int year){
        if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12) return 31;
        if(month==2) return isLeap(year)?29:28;
        return 30;
    }
    
    int days(string date){
        int Y=stoi(date.substr(0,4));
        int M=stoi(date.substr(5,2));
        int D=stoi(date.substr(8,2));
        int day=0;
        for(int y=1971;y<Y;y++) day+=isLeap(y)?366:365;
        for(int m=1;m<M;m++) day+=daysInMonth(m,Y);
        return day+D;
    }
    
    int daysBetweenDates(string date1, string date2) {
        return abs(days(date1)-days(date2));
    } 
};