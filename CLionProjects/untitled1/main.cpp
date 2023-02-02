#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target);

int main() {

   vector<int> nums = {5,8,3,4,10,12};

    vector<int> copyKat = twoSum(nums, 11);

    cout << "Indices are:" << endl;

    for(const int&i : copyKat){
        cout << i << " ";
    }
    return 0;
}

vector<int> twoSum(vector<int>& nums, int target){
    vector<int> target_indices;

    unordered_map<int, int> hash_table;

    for(int i = 0; i < nums.size(); i++){
        int second_integer = target-nums.at(i);

        if(hash_table.find(second_integer) != hash_table.end()) {
            target_indices.push_back(i);
            target_indices.push_back(hash_table.find(second_integer)->second);
            break;
        }
        else{
            hash_table[nums.at(i)] =i;
        }
    }
    return target_indices;
}