/* what is the minimum no of people that should be present
in a room so that there is 50% chance of two people having
same birthday?
*/
#include<iostream>
using namespace std;
int main()
{

    float num=365;
    float denom=365;
    // p denotes the prob of some ppl haaving birthday on same date
    float p=1;
    //p becomes < 0.5 bcz we starting from 1
    int n=0;
    while(p>0.1)
    {
        //probability of ppl having different birthday
        p=p*(num)/denom;
        num--;
        n++;
        cout<<"Probability is"<<p<<" and "<<"no of people are"<<n<<endl;
    }
}
