
#include <iostream>

using namespace std;

int main() {
	int test,n,rem;
	cin >> test;
	 for(int i=0;i<test;i++)

    {

        

        cin>>n;

        rem=n%12;

        switch(rem)

        {

            case 0:

            {
            cout<<(n-11)<<" ";

            cout<<"WS"<<endl;;

            }

            break;

            case 1:

            {

            printf("%d ",n+11);

            printf("WS");

            printf("\n");

            }

            break;

            case 2:

            {

            printf("%d ",n+9);

            printf("MS");

            printf("\n");

            }

            break;

            case 3:

            {

            printf("%d ",n+7);

            printf("AS");

            printf("\n");

            }

            break;

            case 4:

            {

            printf("%d ",n+5);

            printf("AS");

            printf("\n");

            }

            break;

            case 5:

            {

            printf("%d ",n+3);

            printf("MS");

            printf("\n");

            }

            break;

            case 6:

            {

            printf("%d ",n+1);

            printf("WS");

            printf("\n");

            }

            break;

            case 7:

            {

            printf("%d ",n-1);

            printf("WS");

            printf("\n");

            }

            break;

            case 8:

            {

            printf("%d ",n-3);

            printf("MS");

            printf("\n");

            }

            break;

            case 9:

            {

            printf("%d ",n-5);

            printf("AS");

            printf("\n");

            }

            break;

            case 10:

            {

            printf("%d ",n-7);

            printf("AS");

            printf("\n");

            }

            break;

            case 11:

            {

            printf("%d ",n-9);

            printf("MS");

            printf("\n");

            }

            break;


 

        }

    }
}
