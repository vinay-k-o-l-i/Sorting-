#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"Enter Size of Array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Elements"<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
             if(arr[i]>arr[j])
             {
                 int temp=arr[i];
                 arr[i]=arr[j];
                 arr[j]=temp;
             }
    
        }

    }
for(int i=0;i<n;i++)        
 {
     cout<<arr[i];
 }    
}

            
        
    
