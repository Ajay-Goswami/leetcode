class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>> id_location;
    unordered_map<string,unordered_map<string,pair<int,int>>> total_times;  
    
    UndergroundSystem() {}
    
    void checkIn(int id, string stationName, int t) {
        id_location[id] = {stationName,t};       
    }
    
    void checkOut(int id, string stationName, int t) {
        string start = id_location[id].first;
        ++total_times[start][stationName].second;
        total_times[start][stationName].first += t - id_location[id].second;
        id_location.erase(id);    
    }
    
    double getAverageTime(string startStation, string endStation) {
        return double(total_times[startStation][endStation].first) / double (total_times[startStation][endStation].second);
    }
    
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */