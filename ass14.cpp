#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for(int i=0;i<10;i++)
    {
    	cout<<n<<" *"<<i<<" = "<<n*i<<endl;
	}

    return 0;
}

