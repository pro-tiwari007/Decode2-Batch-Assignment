#include<iostream>
#include<vector>
using namespace std;

vector<int> BookingFlights(vector<vector<int>> &bookings, int n){
    int m = bookings.size();
    vector<int> ans(n,0);
    for(int i=0;i<m;i++){
        ans[bookings[i][0]-1] += bookings[i][2];
        if(bookings[i][1] == n){
            continue;
        }
        else{
            ans[bookings[i][1]] -= bookings[i][2];
        }
    }
    for(int i=1;i<n;i++){
        ans[i] += ans[i-1];
    }
    return ans;
}


int main(){
    vector<vector<int> >arr{{1,2,10},{2,3,20},{2,5,25}};
    int n = 5;
    vector<int> ans = BookingFlights(arr,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" "; 
    }


return 0;
}