#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

int main()
{
	int sit=remove("C:\\Users\\37750\\Desktop\\鹰角启动器.lnk");
	int sit1=remove("C:\\Users\\37750\\Desktop\\明日方舟终末地.lnk");
	int sit2=remove("C:\\Users\\37750\\Desktop\\明日方舟.lnk");
	if(!sit||!sit1||!sit2)
	{
		printf("恭喜你，你的鹰角已经滚蛋了！老实玩原神吧！");
	}
	else
	{
		printf("还活着？");
	}
	return 0;
}