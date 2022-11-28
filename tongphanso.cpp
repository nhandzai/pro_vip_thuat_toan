#include <iostream>
using namespace std;
//tinh gia tri cua bieu thuc sau voi n so nguyen duong chan (n>=4)
//					
//		s=__________1____________
//	  		2+  ________3________
//			     4+____5_________
//				...+_n-1___
//					  n
float tongphanso(int n)
{
    float a=n;
    for (int i = n-2; i >= 2; i = i - 2)
            a = i + ((i + 1) / a);
    return 1 / a;
}

int main()
{
    int n;
    cin >> n;
    cout << tongphanso(n) << endl;
    return 0;
}
