// next gretest element by using stack
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
   vector<int>v;
   v.push_back(76);
   v.push_back(12);
v.push_back(25);
v.push_back(78);
v.push_back(45);
v.push_back(41);
v.push_back(14);
   v.push_back(93);
   v.push_back(30);


   //function
   
   stack<int>st;
   int n=v.size();
   st.push(v[0]);
   v[0]=-1;
   for(int i=1;i<n;i++){
      while(!st.empty() && v[i]<st.top()) st.pop();
      int valu=v[i];
      if(st.size()==0){
         v[i]=-1;
         st.push(valu);
   }
   else{
      v[i]=st.top();
      st.push(valu);
   }
}
   for(int i=0;i<n;i++){
      cout<<v[i]<<" ";
   }

   return 0;
}