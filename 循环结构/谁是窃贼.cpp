/*
公安人员审问四名窃贼嫌疑犯。已知，这四人当中仅有一名是窃贼，还知道这四人中每人要么是诚实的，要么总是说谎。在回答公安人员的问题中：
甲说：“乙没有偷，是丁偷的。”
乙说：“我没有偷，是丙偷的。”
丙说：“甲没有偷，是乙偷的。”
丁说：“我没有偷”
请根据这四人的谈话判断谁是盗窃者
*/
#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	for(a=0;a<=1;a++)
		for (b = 0; b <= 1; b++)
			for (c = 0; c <= 1; c++)
				for (d = 0; d <= 1; d++)
					if (b + d == 1 && b + c == 1 && a + b == 1 && a + b + c + d == 1)
					{
						if (a == 1)cout << "甲是盗窃者";
						else if (b == 1)cout << "乙是盗窃者";
						else if (c == 1)cout << "丙是盗窃者";
						else if (d == 1)cout << "丁是盗窃者";
					}
	return 0;
}
