#include "bits/stdc++.h"
using namespace std;

int main()
{
    // The unordered Set / Multiset is an app for the Hash Table in the (Search / Add / Delete).

    // The Hash Table concept is :
      // ELEMENT -> HASH FUNCTION --> BUCKETS (each BUCKET has) ENTRIES.

    // VIP NOTE :
    /*
     * if u have more than value in the same Bucket and u want to less this values u will do this :
            1- see the bucket's count -> (name).bucket_count();
            2- increase this num -> (name).rehash(higher num than first step)
     */

    // use [unordered_multiset] to retype values.

    cout<<"\nPrinting Values and its Bucket with foreach loop : "<<endl<<endl;
    unordered_set<string>us1({"SUN","MON","TUE","WED","THU","FRI","SAT"});
    for(auto us : us1)
        cout<<us<<" This value in the Bucket #"<<us1.bucket(us)<<endl;

    cout<<"---------------\n";

    cout<<"Knowing How many Buckets in an unordered_set : "<<endl<<endl;
    cout<<"-The number of Buckets -> "<<us1.bucket_count()<<endl;

    cout<<"---------------\n";

    cout<<"Knowing How many values in each Bucket : "<<endl<<endl;
    int bc1 = us1.bucket_count();
    for(int i=0 ; i<bc1 ; i++)
        cout<<"Bucket #"<<i<<" has -> "<<us1.bucket_size(i)<<endl;

    cout<<"---------------\n";

    cout<<"Knowing each Backet values with iterator and nested loop : "<<endl<<endl;
    unordered_set<string>::iterator it1;
    bc1 = us1.bucket_count();
    for(size_t i=0 ; i<bc1 ; i++)
    {
        cout<<"Bucket #"<<i<<" contains : "<<endl;
        for(it1=us1.begin() ; it1!=us1.end() ; it1++)
            if(us1.bucket(*it1)==i)
                cout<<*it1<<endl;
        cout<<endl;
    }

    cout<<"---------------\n";

    // ADDING :
    /*
     3 ways : .insert() , .emplace() , .emplace_hint() ==> (Look at the previous lessons)
    --> insert is the worst way in them because if takes space in the memory and slower.
    --> The best way is (emplace_hint) because its Time Complexity is O(1) and it must be with iterator.
    */

    // DELETING :
    /*
     3 ways : .erase(iterator) , .erase(key) , .erase(range)
     */

    // ANOTHER FUNCTIONS :
    /*
     * .empty()
     * .clear()
     * .count()
     * .reverse()
     * .swap()
     */



    return 0;
}
