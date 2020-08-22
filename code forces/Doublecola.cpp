/*
Input:
The input data consist of a single integer n (1≤n≤10^9).

It is guaranteed that the pretests check the spelling
of all the five names, that is, that they contain all the five possible answers.

Output:
Print the single line - the name of the person who drinks the n-th can of cola.
The cans are numbered starting from 1. Please note that you should spell the
 names like this: "Sheldon", "Leonard", "Penny", "Raj", "Howard" (without the quotes).
In that order precisely the friends are in the queue initially.
1
Sheldon
6
Sheldon
1802
Penny
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<string> names = {"Sheldon", "Leonard", "Penny", "Raj", "Howard"};
    const int numFriends = names.size();
    long n = 0, power = 1;
    cin>>n;
    while(n> power*numFriends)
    {

        n-=power*numFriends;
        power*=2;
    }
    cout << names[ (n-1) / power] << endl;
    return 0;
}
