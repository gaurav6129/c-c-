// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//    vector<int>arr{1,0,1,0,0,0,1,1,1,0,0,0,0,0,0,1,1,1,1};
//    int start=0;
//    int end= arr.size()-1;
//    int i=0;
//    while(start<=end)
//    {
//     if(arr[i]==0){
//         swap(arr[i],arr[start]);
//         i++;
//         start++;
//     }
//     else{
//         swap(arr[end],arr[i]);
//         end--;
//     }
//    }
//    for(auto value:arr){
//     cout<<value<<" ";
//    }
// }
#include <iostream>
#include <vector>

using namespace std; 

int majorityElement(vector<int> &nums)
{
    int candidate=-1, count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (count == 0)                     //{1, 2, 3, 2, 6, 7, 4}
        {
            candidate = nums[i];  //ca=1,2,6
            count = 1;            //cou=0,
        }
        if (nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
        //
    }
    int vote = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == candidate)
            vote++;
    }
    if (vote > nums.size() / 2)

        return -1;
    return candidate;
}

int main()
{
    vector<int> nums = {1, 2, 3, 2, 6, 7, 4};
    cout << "The majority element is: " << majorityElement(nums) << endl;
    return 0;
}