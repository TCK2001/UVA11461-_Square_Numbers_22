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
	while(cin>>a>>b) //�ΰ��� �� �Է� 
	{
		int count=0;  
		if(a==0||b==0)
		{
			return 0;
		} //���� �ϳ��� 0�̸� ����. 
		for(int i=1;i<=b;i++)
		{
			if(pow(i,2)<=b&&pow(i,2)>=a) //���࿡ ������ a���� ũ�ų� ������ b���� �۰ų� ������ ���� ���̶� count++; 
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
return 0;
}

