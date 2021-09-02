/*
Sample Input
1 4
1 10
0 0
Sample Output
2
3
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int a,b;
	while(cin>>a>>b) //두가지 값 입력 
	{
		int count=0;  
		if(a==0||b==0)
		{
			return 0;
		} //둘중 하나라도 0이면 종료. 
		for(int i=1;i<=b;i++)
		{
			if(pow(i,2)<=b&&pow(i,2)>=a) //만약에 제곱이 a보단 크거나 같지만 b보다 작거나 같으면 범위 안이라 count++; 
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
return 0;
}

