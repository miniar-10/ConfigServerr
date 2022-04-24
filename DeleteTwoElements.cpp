#include<iostream>
#include<map>

using namespace std;

int tab[100004]={};

int main(){
int t,n;

cin>>t;
while(t--){
    long long sum=0;
    int ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tab[i];
        // cout<<tab[i]<<' ';
        sum+=tab[i];
    }
    // cout<<sum<<"   "<<n<<"\n";
    if(!((2*sum)%n)){
      for(int i=0;i<n-1;i++){
          for(int j=i+1;j<n;j++){
       //   cout<<tab[i]+tab[j]<<"   "<<2*sum/n<<"\n";
              if((long long)(tab[i]+tab[j])==(2*sum)/n){                 
                  ans++;
              }
          }

      }
     cout<<ans<<"\n";
    }else{
        cout<<"0\n";
    }
}
}