//LOGIC
/*create virtually an array of odd integers and then
relate all the even pages(if given as input) to their respective odds as given in the sample pictures.
Now relatively count the pages to turn.
*/

#include <iostream>
using namespace std;

int main()
{


    int n,p,counter_forward=0,counter_backward=0;

    cin>>n;
    cin>>p;

    if(n%2==0)
    {
        n++;
    }
//for even page request
    if(p%2==0)
    {
        p++;
    }

//forward
    for(int i=1; i<n; i=i+2)
    {
        if(i==p)
        {
            break;
        }
        counter_forward++;
    }

//backwards
    for(int i=n; i>=1; i=i-2)
    {
        if(i==p)
        {
            break;
        }
        counter_backward++;
    }


    if(counter_forward>counter_backward)
    {
        cout<<counter_backward;
    }
    else
        cout<<counter_forward;
}


