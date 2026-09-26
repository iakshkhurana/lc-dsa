class Solution {
public:
    string capitalizeTitle(string title) {
        int size = title.length();
        for (int i = 0; i < size; i++) {
            title[i] = tolower(title[i]);
        }
        vector<int> arr;
        for (int i = 0; i < size; i++) {
            if (title[i] == ' ') {
                arr.push_back(i);
            }
        }
        for (int i = 0; i < size; i++) {
            if (find(arr.begin(), arr.end(), i) != arr.end()) {
                continue;
            }
            else if (i == 0 || title[i - 1] == ' ') {
                int j = i;
                while (j < size && title[j] != ' ') j++;
                if (j - i > 2) {
                    title[i] = toupper(title[i]);
                }
            }
        }
        return title;
    }
};