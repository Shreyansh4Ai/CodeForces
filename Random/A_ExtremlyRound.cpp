#include <bits/stdc++.h>
using namespace std;
using ll = long long ;

bool check(long long x) 
{
     ll cntd = 0;
     ll cnt0 = 0; 
    while (x) 
    {
        if (x % 10 == 0) 
            cnt0++; 
        cntd++;
        x /= 10; 
    }
   
    return cnt0 == cntd - 1;
} 

int main()
{
    
    vector<long long> round_numbers;
    for (long long i = 1; i <= 999999; i++) 
    {
        if (check(i) == true) 
            round_numbers.push_back(i); 
    }

    int t; 
    cin >> t;
    while (t--) 
    {
        ll n; 
        cin >> n;

        ll answer = 0; 
        for (int i = 0; i < round_numbers.size(); i++) 
        {
            if (round_numbers[i] <= n) 
                answer++; 
            else
                break; 
        }
        cout << answer << endl; 
    }
    return 0;
}

