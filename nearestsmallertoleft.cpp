#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
 
vector<int> findPrevGreaterElements(vector<int> const &input)
{
    int n = input.size();
    vector<int> result;
    stack<int> s;
    for(int i = 0; i < n; i++){
        if(s.size()==0){
            result.push_back(-1);
        }
        else if(s.size() > 0 && s.top() < input[i]){
            result.push_back(s.top());
        }
        else if(s.size() > 0 && s.top() >= input[i]){
            while(s.size() > 0 && s.top() >= input[i]){
                s.pop();
            }
            if(s.size()==0){
                result.push_back(-1);
            }
            else{
                result.push_back(s.top());
            }
        }
        s.push(input[i]);
    }
    return result;
}
 
int main()
{
    vector<int> input = {4, 5, 2, 10,8};
 
    vector<int> result = findPrevGreaterElements(input);
    for (int i: result) {
        cout << i << ' ';
    }
 
    return 0;
}



