#include <bits/stdc++.h>
using namespace std;
void MRU_arrangement(int a[], int n, int k)    
{   
 
   std::vector<int>v;
   v.push_back(a[k-1]);
   for(int i=0;i<n;i++)
   {
       v.push_back(a[i]); 
       
   }
   v.erase(v.begin()+k);
   for(int i=0;i<n;i++)
   {
       a[i]=v[i];
   }
}  
int main()
{  
    int N, K;  
    cin >> N;
    cin >> K;
    int arr[N]; 
     for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
     MRU_arrangement(arr, N, K);
      
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    return 0;   
}
