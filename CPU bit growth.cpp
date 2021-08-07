#include<iostream>
#include<cmath>
using namespace std;

void test(int t,bool i)
{
				cout << t;
				if (i == 1)
								cout << endl;
				return;
}
int main()
{
				int year;
				double n=0;
				double bit ;
				int i;
				while (cin >> year)
				{
								year -= 1900;//與1900的差距
								bit = 4 * pow(2, year/10);
								i = 0;

								//  計算位元
								while (n < bit)
								{
												i++;
												n += log2(i);
								}
								cout << i-1<<endl;
								n = 0;
								
				}
}