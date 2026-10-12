class Solution {
public:
    int daysBetweenDates(string date1, string date2) {
        return abs(int((toDays(date2) - toDays(date1)).count()));
    }

private:
    chrono::sys_days toDays(const string& date) {
        int y = stoi(date.substr(0, 4));
        unsigned m = stoi(date.substr(5, 2));
        unsigned d = stoi(date.substr(8, 2));
        return chrono::sys_days{chrono::year{y} / chrono::month{m} / chrono::day{d}};
    }
};