#include <bits/stdc++.h>
#include<iostream>
#include<map>

using namespace std;
int main()
{

    // // // Pairs -> part of an utility library, Ex -
    // // pair<int,int>p = {1,3};    // pair means combination of 2, either it will int, float, char or double.
    // // cout<<p.first<<" "<<p.second<<endl;
    // // // we make nested pair if we have more than 2 elements
    // // pair<int, pair<int, int>>s = {1,{2,3}}; // 3 elements pair
    // // cout<<s.first<<" "<<s.second.first<<" "<<s.second.second;

    // // pair<int, int>arr[] = {{1,2}, {3,4}, {5,6}};
    // // cout<<arr[1].second;    // prints the second element of first index -> 5

    // // // Vectors - dynamic array
    // // ++++++++++++++++++++++++ INSERTION IN VECTOR ++++++++++++++++++++++++

    // // vector<int>v;
    // // v.push_back(1);
    // // v.emplace_back(2);  // same as push_back, difference is only that it is faster than push_back

    // // vector<pair<int, int>> vec;
    // // vec.push_back({1,2});   // if we want to assign pairs then we have declare pair
    // // vec.emplace_back(1,2);  // directly assign pairs written under brackets

    // // vector<int>v(5,100);    // container of five elements, all elements are 100

    // // vector<int>v(5);    // container of five elements, compiler can assign garbage value because we don't assign value

    // // vector<int> v1(5,20);   // container of five elements, all are 20
    // // vector<int>v2(v1);  // just copy the above vector

    // // iterator - it means that pointing to a memory not to elements, it directly points to memory of first element and can move forward
    // // vector<int> vec;
    // // vec.push_back(10);
    // // vec.push_back(20);
    // // vec.push_back(30);
    // // vec.push_back(40);
    // // vector<int>::iterator it = vec.begin();
    // // while(it!=vec.end()){
    // //     cout<<*(it)<<" ";
    // //     ++it;
    // // }
    // // cout<<endl;
    // // vector<int>::iterator i = vec.begin();
    // // // end() function does not point to last element, it points just after the last element
    // // while(i!=vec.end()){
    // //     cout<<*(i)<<" ";
    // //     i+=2;
    // // }
    // // cout<<endl;
    // // vec.push_back(50);
    // // cout<<vec.back();   // prints the last element

    // // cout<<endl;
    // // // we can perform same thing by for loop 
    // // for(vector<int>::iterator a = vec.begin(); a != vec.end(); a++){
    // //     cout<<*(a)<<" ";
    // // }

    // // cout<<endl;
    // // // now if i can see on for loop then it is too complex, we have to declare an iterator at the starting everytime, but there is a shortcut, let's see....
    // // for(auto a = vec.begin(); a!=vec.end(); a++){
    // //     cout<<*(a)<<" ";
    // // }
    // // // this auto keyword automatically assigns the value to their particular data type, like if i write -> auto a = 5, then it automatically assigns as an integer data type, hence here, it automatically assigns as an iterator

    // // cout<<endl;
    // // // another way to print iterator is -> for each loop
    // // for(auto it: vec){
    // //     cout<<it<<" ";
    // // }   // for each loop, here auto automatically declare it as int and prints all elements


    // // // ++++++++++++++++++ DELETION IN VECTOR +++++++++++++++++++++
    
    // // // for deletion we have erase function
    // // // vec -> 10 20 30 40 50
    // // // if we want to delete 20 from vector
    // // vec.erase(vec.begin()+1);

    // // if i want to delete a number of elements together from vector then i have to pass start and end, start means from which element deletion will start and end means from which element deletion will stop  

    // // vector<int>a;
    // // a.push_back(10);
    // // a.push_back(20);
    // // a.push_back(30);
    // // a.push_back(40);
    // // a.push_back(50);
    // // // vector v -> 10 20 30 40 50 
    // // // if i want to delete 30 and 40 
    // // a.erase(a.begin()+2, a.begin()+4);
    // // for(auto i: a){
    // //     cout<<i<<" ";
    // // }


    // // Insertion function
    // // vector<int>v(2,100);    // 100, 100
    // // v.insert(v.begin(), 300);   // insert 300 at beginning -> 300, 100, 100
    // // v.insert(v.begin()+1, 2, 5);  // insert 2 fives after first element -> 300, 5, 5, 100, 100


    // // // insert one vector into another
    // // vector<int>copy(2,50);  // 50, 50
    // // v.insert(v.begin(), copy.begin(), copy.end());  // in this v.begin() is address where copy.begin() and copy.end() vector being inserted, that's why it gives ->
    // // // 50, 50, 300, 5, 5, 100, 100
    // // for(auto i: v){
    // //     cout<<i<<" ";
    // // }

    // // // for checking size of vector we use  - 
    // // cout<<v.size();

    // // v.pop_back();  // deletes last element

    // // vector<int>v1;
    // // v.swap(v1);    // swaps 2 vectors

    // // v.clear();  // erases the entire vector

    // // cout<<v.empty();    // check that vector is empty or not, if yes then print true otherwise false


    // // +++++++++++++++++++++++ LIST ++++++++++++++++++++++

    // // list<int>ls;
    // // ls.push_back(2);    // insert elements in list
    // // ls.emplace_back(4); // insert elements in list

    // // ls.push_front(5);   // insert elements at beginning in list
    // // ls.emplace_front(6);    // insert elements at beginning in list

    // // // vector is slower in insertion or we can say it is costly, while list is cheap and fast in terms of insertion

    // // // rest function are same as vector
    // // // begin, end, rbegin, rend, clear, insert, size, swap



    // // // ++++++++++++++++++++++++++ DEQUE +++++++++++++++++++++++++++
    // // deque<int>dq;
    // // // insertion at end
    // // dq.push_back(1);
    // // dq.emplace_back(2);
    
    // // // insertion at beginning
    // // dq.push_front(3);
    // // dq.emplace_front(4);

    // // // delete elements from first and last position
    // // dq.pop_back();
    // // dq.pop_front();

    // // // prints the first and last element without removing it
    // // dq.back();
    // // dq.front();

    // // // rest function are same as vector
    // // // begin, end, rbegin, rend, clear, insert, size, swap



    // // // +++++++++++++++++++++++++ STACK +++++++++++++++++++++++++

    // // stack<int>st;

    // // // insert element at beginning
    // // st.push(1); // 1
    // // st.push(2); // 2, 1
    // // st.push(3); // 3, 2, 1
    // // st.push(4); // 4, 3, 2, 1
    // // st.emplace(5);  // 5, 4, 3, 2, 1

    // // cout<<st.top(); // prints first element
    // // st.pop();   // deletes first element -> 5

    // // cout<<st.size();    // prints the size of stack

    // // cout<<st.empty();   // check the stack is empty or not, if yes then true otherwise false

    // // stack<int>st1, st2;
    // // st1.swap(st2);   // swaps both stack



    // // // ++++++++++++++++++++++++++ QUEUE ++++++++++++++++++++++++++

    // // queue<int>q;

    // // // insertion of elements
    // // q.push(1);
    // // q.push(2);
    // // q.emplace(3);

    // // q.back() += 5;  // add 5 to last element of queue
    // // cout<<q.back(); // now prints 8, bcz 5 was added to 3

    // // cout<<q.front();    // prints first element

    // // q.pop();    // deletes first element

    // // // rest function are same as stack
    // // // size, empty, swap



    // // // ++++++++++++++++++++++++ PRIORITY QUEUE ++++++++++++++++++++++++
    // // priority_queue<int> pq;

    // // // --------- Max heap ------------
    // // // for insertion 
    // // // in this maximum elements stays at the top
    // // pq.push(5); // 5
    // // pq.push(2); // 5, 2
    // // pq.push(8); // 8, 5, 2
    // // pq.emplace(10); // 10, 8, 5, 2 

    // // cout<<pq.top();    // prints first element

    // // pq.pop();   // deletes first element

    // // // complexities of functions
    // // // push - log(n)
    // // // top - O(1)
    // // // pop - log(n)

    // // // rest are same - size, swap, empty

    // // // --------- Minimum heap(min heap)--------
    // // // it means we want minimum element at the top
    // // priority_queue<int, vector<int>, greater<int>>pq;

    // // pq.push(5); // 5
    // // pq.push(2); // 2, 5
    // // pq.push(8); // 2, 5, 8
    // // pq.emplace(10); // 2, 5, 8, 10

    // // cout<<pq.top();   // prints first element

    // // // complexities of functions
    // // // push - log(n)
    // // // top - O(1)
    // // // pop - log(n)



    // // ++++++++++++++++++++++++++ SET +++++++++++++++++++++++

    // set<int>st;

    // // for insertion
    // st.insert(1);   // 1
    // st.emplace(2);  // 1, 2
    // st.insert(2);   // 1, 2
    // st.insert(4);   // 1, 2, 4
    // st.insert(3);   // 1, 2, 3, 4

    // // as we know that set is a collection of unique and well defined elements, that's why it stores elements in sorted order and remove duplicacy

    // auto it = st.find(3);   // "it" is an iterator which points to 3

    // auto it = st.find(5);   // if element are not present in set then it prints "st.end()" means point after the last element, may be it will garbage value

    // st.erase(4);    // deletes 4

    // int count = st.count(1);    // if 1 is present in set then it prints 1 otherwise 0, because set have unique elements, hence it will return either 1 or 0

    // auto it1 = st.find(2);
    // auto it2 = st.find(4);
    // st.erase(it1, it2);     // it erases first and last-1, (first, last-1), and prints rest element -> {1, 4} will print

    // // almost it have also same functions like vector, but imp is - find, count and erase
    // // lower_bound() and upper_bound() function works in the same way as in vector does
    // // they works similar as binary search, difference is we don't have to write 7-8 lines of code for binary search

    // auto it = st.lower_bound(2);
    // // lower_bound(): 
    // // if element exists - returns it's index
    // // if element doesn't exist - returns index of just greater element
    // // if element doesn't exist and it is the greatest element - then returs index of last element
    // // in above case, 2 exists hence it returns index '1'

    // auto it = st.upper_bound(3);
    // // upper_bound():
    // // if element exists - returns index of just greater element
    // // if element doesn't exists - returns index of just greater element
    // // if element doesn't exists and all elements are smaller - then don't return any value, function will point to end


    // // ------------- MULTI SET ------------

    // // it stores multi elements, there is no concept of unique elements in this
    // multiset<int>ms;
    // // for insertion
    // ms.insert(1);
    // ms.insert(1);
    // ms.insert(1);

    // ms.erase(1);    // all 1's erased

    // // if i want to erased only single 1 
    // ms.erase(ms.find(1));

    // int count = ms.count(1);    // counts no. of 1's element

    // // rest all functions are same as set


    // // ----------- UNORDERED SET ----------

    // unordered_set<int>us;
    // // have unique elements, but have any order
    // // lower_bound and upper_bound function does not works
    // // does not store in any particular order
    // // better complexity than sets in most cases


    // --------------- MAP -----------------
    map<int, int> mp1;   // key is 1 integer & value is 1 integer

    // insert in map
    mp1[1] = 2;  // 1st way, stores value 2 at key 1
    mp1.emplace(3,1);  // 2nd way, stores value 1 at key 3
    mp1.insert({2,4}); // 3rd way, stores value 4 at key 2

    for(auto it:mp1){
        cout<<it.first<<" "<<it.second<<endl;
    }   // it stores in sorted order of key not values

    cout<<mp1[1]<<endl;
    cout<<mp1[5]<<endl;   // prints 0 because we don't have key '5'

    auto it = mp1.find(3);
    if(it!=mp1.end()){
        cout<<it->second<<endl;
    }
    else
        cout<<"Key not found";
   
    auto it = mp1.lower_bound(2);
    auto it = mp1.upper_bound(3);

    // another declaration
    map<int, pair<int, int>> mp2;    // key is 1 integer and value is 2 integer 
    // insert
    mp2[1] = {2,3};

    map <pair<int, int>, int> mp3;   // key is 2 integer and value is 1 integer
    // insert
    mp3[make_pair(2,3)] = 10;   // stores 10 at key {2,3}, this is for 3rd declaration of above map

    // ** map stores unique keys in sorted order like set data structure
    // map is like a classroom, where each student have unique roll no
    // in map it has keys with some values, each key is unique, values can be duplicate
    // keys is of any data type
    // erase, swap, size, empty are same as above
    // works on o(logn) of time

    // ---------------- MULTI MAP --------------------
    
    // we can store duplicate keys, nothing else
    // everything is same as map


    // ------------------- UNORDERED MAP -------------------

    // same as set and unordered set, difference is - 
    // it has unique key, but stores in random order
    // works on o(1) in almost all cases, worst case is o(n) which is very rare



    // -------------------------- ITERATORS ----------------------------

    // -------- sort--------------
    sort(a, a+n);   // by using this we don't have to use the any sorting technique, we just sort any array by this one line
    sort(v.begin(), v.end());   // by this we can sort any vector

    sort(a+2, a+4);     // if i have arr = {1, 3, 5, 2} so first 2 terms are sorted i have to sort last 2 terms

    // if i have to sort in descending order
    sort(a, a+n, greater<int>);  // sort in descending order

    // now i want to sort my way, according to my requirement

    pair<int, int>a[] = {{1,2}, {2,4}, {4,1}};
    // sort it according to second element
    // if second element is same, then sort it according to first element but in descending order
    bool comp(pair<int, int>p1, pair<int, int>p2){
        if(p1.second < p2.second) return true;
        else if(p1.second > p2.second)  return false;
        else if (p1.first > p2.first )  return true;
        else return false;
    }
    sort(a, a+n, comp);


    // builtin_popcount() - ye basically return karta hai kitne number of 1 bit's hai
    // like 7 ka binary - 111 hota hai, to ye function '3' return karega, 
    // 6 ka 110 hota hai, to '2' return karega

    int num = 7;
    cout<<__builtin_popcount(num);  // prints number of set bits

    long long num = 24619289124;
    cout<<__builtin_popcountll(num);



    // next_permutation() - prints all permutation in ascending order
    string s = "123";
    do{
        cout<<s<<endl;  // prints - 123, 132, 213, 231, 312, 321
    }while(next_permutation(s.begin(), s.end()));  

    // if i pass 231 string then it prints only permutation in ascending order
    // so prints - 231 312 321 only, so if i want that for 123 & 231 are same input, it prints same number of permutation
    // then i have to sort it first

    string s = "231";
    sort(s.begin(), s.end());
    do{
        cout<<s<<endl;  // prints - 123, 132, 213, 231, 312, 321
    }while(next_permutation(s.begin(), s.end()));  
    return 0;
}
