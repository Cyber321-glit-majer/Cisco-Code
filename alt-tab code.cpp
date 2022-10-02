#include <bits/stdc++.h>
using namespace std;
 
int main()
{  
    int n, k;  
    cin >> n;
    cin >> k;
   vector<int>a(n);
     for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
     std::vector<int>v;
   v.push_back(a[k-1]);
   for(int i=0;i<n;i++)
   {
       v.push_back(a[i]); 
       
   }
   v.erase(v.begin()+k);
      
    for (auto i:v)
        cout <<i<< " ";
    return 0;   
}
