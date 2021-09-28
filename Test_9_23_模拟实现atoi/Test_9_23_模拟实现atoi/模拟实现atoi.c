#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
enum STATE
{
	VALID,//合法
	INVALID//非法
};
enum STATE state = INVALID;
int my_atoi(const char *str)
{
	int flag = 1;
	long long ret = 0;
	//空指针
	assert(str != NULL);
	//处理空字符串
	if (*str == '\0')
		return 0;//返回结果为非法
	//处理空格
	while (isspace(*str))
	{
		str++;
		if (*str == '\0')
			return 0;//字符串只有空格
	}
	//+-号
	if (*str == '+')
		str++;
	if (*str == '-')
	{
		flag = -flag;
		str++;
	}
	//字符串处理
	while (*str)
	{
		if (isdigit(*str))
		{
			ret = ret * 10 + (*str - '0')*flag;
			//溢出
			if ((ret > INT_MAX) || (ret < INT_MIN))
			{
				state = VALID;
				return (int)ret;
			}
		}
		else//非数字字符
		{
			return (int)ret;//返回结果为非法
		}
		str++;
	}
	state = VALID;
	return (int)ret;
}

int main()
{
	char *p = "	 -123";
	int ret = my_atoi(p);
	if (state == VALID)//合法时，输出结果
		printf("%d\n", ret);
}