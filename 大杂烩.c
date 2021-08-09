#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
int main()
{
	int h;
	h=13579;
	while(1)//重复
    {
	int a,b,c,d,e,f,i;
    f=2;
    system("color 0e");
    printf("\n大杂烩",f);
    printf("===============================================================================\n");
    printf("<1>输入1为加法\n");
    printf("<2>输入2为减法\n");
    printf("<3>输入3为乘法\n");
    printf("<4>输入4为除法\n");
    printf("<5>输入5为求余数\n");
    printf("<6>输入6为求某数N次方");
    printf("<7>输入7为求某数到某数之间的和\n");
    printf("【不能算负数（<1>~<4>除外）,数不能太大】\n");
    printf("-------------------------------------------------------------------------------\n");
    printf("<.>辅助功能|> 输入321倒计时\n");
    printf("	   |> 输入3210关机倒计时\n");
    printf("	   |> 输入666猜作者QQ,猜对后查看作者QQ <^_^> (关闭后失效）\n");
    printf("	   |> 输入123随机生成数（0~100）\n");
    printf("	   |> 输入456质数合数判断(待完善)\n");
    printf("<!>奇怪辅助功能谨慎使用|> 输入0刷屏\n");
    printf("		       |> 输入222为一分钟后关机\n");
    printf("		       |> 输入作者QQ号为取消关机\n");
    printf("===============================================================================\n");
    printf("PS:按Enter完成输入\n!!!勿输入字符等与数字无关的东西\n\n");
    scanf("%d",&a);
    system("color 08");
    if (a == 666)
    {
    system("color 0e");
    if (h==2468)
    {
    system("cls");
    printf("加个QQ吧！有意见记得反馈\n");
    printf("作者QQ：1256440775\n");
    printf("作者:ORR\n\n\n\n");
    printf("赞助一下？  ");
    i=12;
    while (i!=0)
    {
    Sleep (1000);
    printf("\b\b\a");
    i--;
    printf(" ");
    }
    printf("这样不好\n");
    Sleep (2000);
    printf(" (赞助一下也没问题，对吧？微信：hyy15213458627)\n\n");
    }
    if (h==13579)
    {
    while (1)
    {
			system("cls");
			printf("请猜数^_^\n");
			printf("提示12564-07-5\n");
            printf("输入123退出\n");
			scanf("%d",&b);
			printf("\n");
            if (b==123)
            {
            break;
            }
			if (b < 1256440775)
			{
			printf("小了\n");
            system("pause");
            }
            if (b > 1256440775)
            {
            printf("大了\n");
            system("pause");
            }
            if (b == 1256440775)
            {
            system("cls");
            printf("猜对了！^_^\n");
            printf("加个QQ吧！有意见记得反馈\n");
            printf("作者QQ：1256440775\n");
            printf("NAME:ORR\n");
            printf("PS:再试一次？\n\n");
            h=2468;
            break;
			}
	}		
	}
    }
    if (a == 222)
		{
		system("shutdown -s -t 60");
        printf("\n");
        printf("输入作者QQ号为取消关机\n");
        printf("\n");
		}
    if (a == 1256440775)
		{
		system("shutdown -a");
        printf("\n");
        printf("取消成功\n");
        printf("\n");
		}   
    if (a == 0)
			{
            system("cls");//清屏
			while(1)
				{
				system("color 0a");
				printf("010010110011100101010101001010010110011100101010101001");
				}
			}
    if (a == 1 )
		{
        printf("加法\n");
        printf("输入加数\n\n");
        scanf("%d",&b);
        printf("输入加数\n\n");
        scanf("%d",&c);
        printf(" +\n");
        printf("——————————\n");
        printf("  %d\n\n",b+c);
        }
    if (a == 2)
		{
        printf("减法\n");
        printf("输入被减数\n\n");
        scanf("%d",&b);
        printf("输入减数\n\n");
        scanf("%d",&c);
        printf(" -\n");
        printf("——————————\n");
        printf("  %d\n\n",b-c);
        }
    if (a == 3 )
		{
        printf("乘法\n");
        printf("输入乘数\n\n");
        scanf("%d",&b);
        printf("输入乘数\n\n");
        scanf("%d",&c);
        printf(" *\n");
        printf("——————————\n");
        printf("  %d\n\n",b*c);
        }
    if (a == 4 )
		{
        printf("除法\n");
        printf("输入被除数\n\n");
        scanf("%d",&b);
        printf("输入除数\n\n");
        scanf("%d",&c);
        printf(" /\n");
        printf("——————————\n");
        printf("  %d\n\n",b/c);
        }
    if (a == 5 )
		{
        printf("求余数\n");
        printf("输入被除数\n\n");
        scanf("%d",&b);
        printf("输入除数\n\n");
        scanf("%d",&c);
        printf(" %\n");
        printf("——————————\n");
        printf("  %d\n\n",b%c);
        }
	if (a == 7)
		{
		printf("求某数到某数之间的和\n");
		printf("输入开始数\n");
		scanf("%d",&b);
		printf("输入结束数\n");
		scanf("%d",&c);
             d=0;
		while(b<=c)
			{
			d=d+b;
			b=b+1;
			}
		printf(" 求某数到某数之间的和\n");
		printf("——————————\n");
		printf("  %d\n\n",d);
		}
    if (a==321)
    {
    printf("输入开始数(秒)\n");
	scanf("%d",&c);
	printf("输入结束数(秒)【建议为0】\n");
	scanf("%d",&b);
    printf("输入每数间隔(秒)【建议为1】\n");
    scanf("%d",&e);
    e=e*1000;
    system("cls");
    system("color 0a");
		while(b-1 != c)
		{
    printf("\n\n\n\n\n\n\n\n\n\n                                       ");
	printf("%d",c);
    Sleep (e);
    c=c-1;
    system("cls");
		}
    }
    if (a==3210)
    {
    printf("输入开始数(秒)\n");
	scanf("%d",&c);
    system("cls");
    system("color 0a");
		while(0 != c)
		{
    printf("\n\n\n\n\n\n\n\n\n\n                                       ");
	printf("%d",c);
    Sleep (1000);
    c=c-1;
    system("cls");
		}
    system("shutdown -s -t 10");
    }
        if(a==123)
		{
        system("cls");
			srand((unsigned)time(NULL));
			b=rand()%100;
			printf("%d\n",b);
        }
        if (a==456)//---------------------------------------------------
        {
        printf("输入数\n");
        scanf("%d",&b);
        c=2;
        e=123;
        d=1;
			while (d==1)
			{
            c++;
            e=b%c;
            if(e==0 && b>3)
            {
            printf("合数\n");
            break;
            }
            if(c=b)
            {
            printf("质数\n");
            break;
            }
            }
        }
//分割线_______________分割线______________分割线_______________分割线_______________分割线__________________分割线________________分割线
    if (a == 6)
		{
        printf("求某数N次方\n");
        printf("输入N与数\n\n");
        scanf("%d",&b);
        scanf("%d",&c);
		if (b==0)
            {
            printf(" 某数N次方\n");
			printf("——————————\n");
            printf("  1\n");
            b=0;
            }
        else
        {
			d=c;
			b=b-1;
			while(b>0)
			{
			c=c*d;
			b=b-1;
			}
			printf(" 某数N次方\n");
			printf("——————————\n");
			printf("  %d\n\n",b+c);
		}
	}
	system("pause");
    system("cls");//清屏
    }
	return 0;
}
