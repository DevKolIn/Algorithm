#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    
    for (int y = 0; y < arr1.size(); y++)
    {
        vector<int> temp;
        for (int x = 0; x < arr1[y].size(); x++)
        {
            temp.push_back(arr1[y][x] + arr2[y][x]);
        }
        
        answer.push_back(temp);
    }
    
    return answer;
}