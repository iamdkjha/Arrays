#include<iostream>
#include<vector>

// We can also use #include<bits/stdc++.h> instead of using #include<iostream> and #include<vector>

using namespace std;

// Function to print the elements of a vector
int print(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}


// Function to reverse the elements of vector after given index
int reverse(vector<int> &v,int index){
    int start = index + 1; 
    int end = v.size()-1;
    while(start<=end){
        swap(v[start],v[end]);
        start++;
        end--;
    }
    return 0;
}

int main()
{
    vector<int> v;    // Intialising the vector v
    int index;
   
    // Inserting the elements in vector v

    v.push_back(12);
    v.push_back(21);
    v.push_back(13);
    v.push_back(31);
    v.push_back(14);
    v.push_back(41);

    cout<<endl<<"Array is: ";   // Printing the vector
    print(v);

    cout<<"Enter the index: ";  // Taking the index as input
    cin>>index;

    reverse(v,index);     

    cout<<endl<<"After reversing the elements after index "<<index<<" :"<<endl;
    print(v);
    return 0;
}
