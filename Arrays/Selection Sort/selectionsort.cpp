#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
   for(int i=0; i<n-1; i++){
       int main = i;
       for(int j=i+1; j<n; j++){
           if(arr[j]<arr[main]){
               main = j;
           }
       }
       swap(arr[main], arr[i]);
   }
}