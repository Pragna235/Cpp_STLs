#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    for(int i=0;i<10;i++){
        v.push_back(i); //inserting elements in the vector
    }

    cout<<"The elements in the vector : ";
    for(auto it = v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }

    cout<<"\n\nThe front element of the vector : "<<v.front();
    cout<<"\nThe last element of the vector : "<<v.back();
    cout<<"\nThe size of the vector : "<<v.size();
    cout<<"\nDeleting element from the end : "<<v[v.size()-1];
    v.pop_back();

    cout<<endl<<endl<<"Printing the vector after removing the last element : "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl<<endl<<"Inserting 5 at the beginning : "<<endl;
    v.insert(v.begin(),5);
    cout<<"The first element is : "<<v[0]<<endl;
    cout<<"Erasing the first element "<<endl;
    v.erase(v.begin());
    cout<<"Now the first element is : "<<v[0]<<endl;

    if(v.empty()){
        cout<<"\nVector is empty"<<endl;
    }
    else{
        cout<<"\nVector is not empty"<<endl;
    }

    v.clear();
    cout<<"Size of the vector after clearing the vector : "<<v.size()<<endl;

}
