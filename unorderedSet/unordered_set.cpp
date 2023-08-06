#include <iostream>
#include <unordered_set>

using namespace std;
int main(){

/*
  Sets are of 2 types: 1. ordered, 2. unordered
  - sets contains unique keys
  - ordered set keeps the values in the same order as they were inserted
  - unordered set radomized values
  - unordered set is inplemented using hash tables
  - all operations on unordered set takes constant time O(1) on average, worst cast O(n)

  video link which has the pdf or required materials https://www.youtube.com/watch?v=EMvLygYr6Gg
*/

    unordered_set<int> s;
    s.insert(10); //inserts value into the set
    s.insert(5);
    s.insert(15);
    s.insert(20);
    s.insert(20); // though 20 inserted twice, but it will not actually be inserted. cause dublicacy is not allowed
    
    for(auto it = s.begin() ; it!=s.end() ;it++) // s.begin() provides iterator which is baiscally a pointer
        cout<<(*it)<<endl; // and remember how we used to dereference a pointer. using * before the pointer
    
    cout<<"number of element : "<<s.size()<<endl; // prints size of the unordered set

    s.clear(); // clears the whole set and size becomes 0
    cout<<"number of element : "<<s.size()<<endl;


    int key = 20;

// the way unorderedSet.find(key) works: it starts from the begining to the end and the iterator reaches one element past the last element and then it stops
// So, if the unorderedSet.find(key) == s.end(), this means the key is not in the set.
    if(s.find(key) == s.end()){
        cout<<"key not found"<<endl;
    }else{
        
        auto temp = s.find(key);
        s.erase(temp);  // this is the way to delete a key. first we have to find the key then delete it

    }

    int deleted_key = 25;
    s.erase(deleted_key); // we can also delete this way if we know the key already

    for(auto it = s.begin() ; it!=s.end() ;it++)
        cout<<(*it)<<endl;

    cout<<"number of element : "<<s.size()<<endl;


    if(s.find(key)!=s.end())  // if the key exists then the find() function will not reach the end() as if the iterator reaches end that means the key was not found
        cout<<"key found"<<endl;


    if(s.count(5)) // count() function unlike find() does not provides iterator. it only returns 1 if the key exists, 0 otherwise
        cout<<"key found"<<endl;
    else
        cout<<"not found"<<endl;
}
