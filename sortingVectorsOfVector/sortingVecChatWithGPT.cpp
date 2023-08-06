#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Uploaded code to GPT
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals[1].begin(), intervals[1].end());
        for(vector<int> vec : intervals) {
            cout << "[";
            for(int x : vec){
                cout<<x<<" ";
            }
            cout << "], ";
        }
        cout << endl;
    }
};

int main(){
    vector<vector<int>> intervals = {{1,3},{8,10},{15,18},{2,6}};
    for(vector<int> vec : intervals) {
        cout << "[";
        for(int x : vec){
            cout<<x<<" ";
        }
        cout << "], ";
    }
    cout << endl;
    return 0;
}

/*
Qs: how does the sort functions work here

ChatGPT:
The code you provided is trying to sort the vector intervals based on the second element of each
sub-vector. However, there is a small error in the sort function call. Instead of
sort(intervals[1].begin(), intervals[1].end()), it should be sort(intervals.begin(), intervals.end()).
The sort function should be called on the entire intervals vector, not just on the second element of the
first sub-vector.

Here's the corrected version of the code:
*/
//GPT
#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& intervals) {
        // Sort the intervals based on the first element of each sub-vector
        std::sort(intervals.begin(), intervals.end());

        for (std::vector<int>& vec : intervals) {
            std::cout << "[";
            for (int x : vec) {
                std::cout << x << " ";
            }
            std::cout << "], ";
        }
        std::cout << std::endl;
    }
};

/*
In the corrected version, we sort the intervals vector using std::sort(intervals.begin(), intervals.end()),
which will sort the entire vector based on the first element of each sub-vector. The output will be:

*/

/*
Output:

[1 3 ], [8 10 ], [15 18 ], [2 6 ], 
[1 3 ], [2 6 ], [8 10 ], [15 18 ],

As you can see, the intervals vector is now sorted based on the first element of each sub-vector.
*/
// Response ends...



/*
Qs:
you are correct, but how can i sort based on the second element?

ChatGPT:
To sort the vector intervals based on the second element of each sub-vector, you can use a custom comparator function and pass it as the third argument to the std::sort function. The custom comparator function will compare the second elements of two sub-vectors and return true if the second element of the first sub-vector is less than the second element of the second sub-vector.

Here's how you can do it:
*/

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& intervals) {
        // Sort the intervals based on the second element of each sub-vector
        std::sort(intervals.begin(), intervals.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
            return a[1] < b[1];
        });

        for (const std::vector<int>& vec : intervals) {
            std::cout << "[";
            for (int x : vec) {
                std::cout << x << " ";
            }
            std::cout << "], ";
        }
        std::cout << std::endl;
    }
};
/*
In this version, we pass a lambda function as the comparator to std::sort, and the lambda
function compares the second elements of two sub-vectors using the expression a[1] < b[1].
This will sort the intervals vector based on the second element of each sub-vector.

The output will be:

Output:
Copy code
[1 3 ], [8 10 ], [15 18 ], [2 6 ], 
[1 3 ], [2 6 ], [8 10 ], [15 18 ],
Now, the intervals vector is sorted based on the second element of each sub-vector.
*/
//Response Ends.....



/*
Qs:
for (const std::vector<int>& vec : intervals)
why did you use const keyword in this line in the above code, and why did you take reference of the
vectors, are these beneficial in some way?

ChatGPT:
In the code provided, the use of const std::vector<int>& in the range-based for loop is used for
optimization and to avoid unnecessary copies of the vectors.

1. const Keyword:
Using const in const std::vector<int>& ensures that the elements of the vector vec cannot be modified
within the loop. This is useful when you don't want to accidentally modify the elements of vec while
iterating over the intervals vector.

2. Reference (const std::vector<int>&):
Taking a reference to the vectors (const std::vector<int>& vec) instead of making a copy is done for
performance reasons. When you pass objects by value in C++, it creates a copy of the object, and for
large objects like vectors, this copy operation can be expensive, especially inside loops.

By using const std::vector<int>&, the loop iterates over the original vectors in intervals without making
any copies. This can improve performance, particularly if the vectors are large or if you're iterating over
them frequently.

Taking a reference doesn't modify the original data, and using const ensures that you won't accidentally
modify it within the loop.

It's important to use references judiciously, especially if you don't need to modify the original vectors.
Using const in conjunction with references is a good practice to ensure that your code is safe and efficient.
*/