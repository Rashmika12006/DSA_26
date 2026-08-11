class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low = 0;
        int count = 0;

        unordered_map<int, int> map;

        for (int high = 0; high  < fruits.size(); high ++) {
            map[fruits[high]]++;

            while (map.size() > 2) {
                map[fruits[ low ]]--;

                if (map[fruits[low]] == 0) {
                    map.erase(fruits[low]);
                }

                 low++;
            }

            count = max(count, high - low + 1);
        }

        return count;
    }
};