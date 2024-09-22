#include <iostream>
#include <math.h>
#include <climits>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    cout << "Enter numer of elemetns" << endl;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "enter " << i + 1 << " element: ";
        int x;
        cin >> x;
        vec.push_back(x);
    }
    int target_sum;
    cout << "Enter target sum:" << endl;
    cin >> target_sum;

    cout << "newsum" << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec.size(); j++)
        {
            if (vec[j] > vec[i])
            {
                vec[i] = vec[i] + vec[j];
                vec[j] = vec[i] - vec[j];
                vec[i] = vec[i] - vec[j];
            }
        }
    }
    cout << "sorted numbers are:" << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout <<"Element No- "<<i+1<<" : "<< vec[i] << endl;
    }

    int j = vec.size()-1;

    for (int i = 0; i < vec.size();)

        
            if (vec[i] + vec[j] > target_sum)
            {
                j--;
            }
            else if (vec[i] + vec[j] < target_sum)
            {
                i++;
            }
            else if (vec[i]+vec[j]==target_sum || i == j)
            {
                vec.push_back(i);
                vec.push_back(j);
                break;
            }
     if (vec[vec[vec.size() - 1]]+ vec[vec[vec.size() - 2]] == target_sum)
            cout << "sum is: "<<vec[vec[vec.size()-1]] + vec[vec[vec.size() - 2]]<<" formed by using elements : "<<  vec[vec[vec.size() - 1]]<<" and "<<vec[vec[vec.size() - 2]]<< endl;
            else{
                cout<<"sum dosent exist"<<endl;
            }
}

