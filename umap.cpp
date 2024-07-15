#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
int main(){
    map<string,int> u = {
        {"a",1},
        {"b",2},
        {"c",3}
    };
    // u["Aman"]=1;
    // u["Aakash"]=2;
    // u["Ram"]=3; or
    
    // for(auto x:u){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    // using iterators 
    map<string,int>::iterator it = u.begin();
    while(it!=u.end()){
        cout<<it->first<<" "<<it->second<<endl;
        ++it;
    }
}