������1��
��Ŀ����1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
1.��������������ڰ�λ��ʮλ����λ�����ֶ���1��2��3��4��������е����к���ȥ�����������������С� 
2.����Դ���룺
main()
{
int i,j,k;
printf("\n");
for(i=1;i<5;i++)����������*����Ϊ����ѭ��*/ ��for(j=1;j<5;j++)��
����for (k=1;k<5;k++)
������{
��������if (i!=k&&i!=j&&j!=k) ������/*ȷ��i��j��k��λ������ͬ*/ ��������printf("%d,%d,%d\n",i,j,k);
������}
}
==============================================================
������2��
��Ŀ����ҵ���ŵĽ������������ɡ�����(I)���ڻ����10��Ԫʱ���������10%���������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣��ɿ����7.5%��20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3%��60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%������100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɣ��Ӽ������뵱������I����Ӧ���Ž���������
1.����������������������ֽ磬��λ��ע�ⶨ��ʱ��ѽ�����ɳ����͡�������������
2.����Դ���룺
main()
{
long int i;
int bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
scanf("%ld",&i);
bonus1=100000*0.1;bonus2=bonus1+100000*0.75;
bonus4=bonus2+200000*0.5;
bonus6=bonus4+200000*0.3;
bonus10=bonus6+400000*0.15;
��if(i<=100000)
����bonus=i*0.1;
��else if(i<=200000)
����������bonus=bonus1+(i-100000)*0.075;
��������else if(i<=400000)
����������������bonus=bonus2+(i-200000)*0.05;
��������������else if(i<=600000)
����������������������bonus=bonus4+(i-400000)*0.03;
��������������������else if(i<=1000000)
����������������������������bonus=bonus6+(i-600000)*0.015;
��������������������������else
����������������������������bonus=bonus10+(i-1000000)*0.01;
printf("bonus=%d",bonus);
} 

==============================================================
������3��
��Ŀ��һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
1.�����������10�������жϣ��Ƚ���������100���ٿ������ٽ���������268���ٿ��������������Ľ�������������������ǽ�����뿴���������
2.����Դ���룺
��i nclude "math.h"
main()
{
long int i,x,y,z;
for (i=1;i<100000;i++)
��{ x=sqrt(i+100); ����/*xΪ����100�󿪷���Ľ��*/ ����y=sqrt(i+268); ����/*yΪ�ټ���168�󿪷���Ľ��*/ ������if(x*x==i+100&&y*y==i+268)/*���һ������ƽ������ƽ�����ڸ�������˵����������ȫƽ����*/ ��������printf("\n%ld\n",i);
��}
}
==============================================================
������4��
��Ŀ������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
1.�����������3��5��Ϊ����Ӧ���Ȱ�ǰ�����µļ�������Ȼ���ټ���5�켴����ĵڼ��죬��������������������·ݴ���3ʱ�迼�Ƕ��һ�졣
2.����Դ���룺
main()
{
int day,month,year,sum,leap;
printf("\nplease input year,month,day\n");
scanf("%d,%d,%d",&year,&month,&day);
switch(month)/*�ȼ���ĳ����ǰ�·ݵ�������*/ {
��case 1:sum=0;break;
��case 2:sum=31;break;
��case 3:sum=59;break;
��case 4:sum=90;break;
��case 5:sum=120;break;
��case 6:sum=151;break;
��case 7:sum=181;break;
��case 8:sum=212;break;
��case 9:sum=243;break;
��case 10:sum=273;break;
��case 11:sum=304;break;
��case 12:sum=334;break;
��default:printf("data error");break;
}
sum=sum+day; ��/*�ټ���ĳ�������*/ ��if(year%400==0||(year%4==0&&year%100!=0))/*�ж��ǲ�������*/ ����leap=1;
��else
����leap=0;
if(leap==1&&month>2)/*������������·ݴ���2,������Ӧ�ü�һ��*/ sum++;
printf("It is the %dth day.",sum);}
==============================================================
������5��
��Ŀ��������������x,y,z���������������С���������
1.���������������취����С�����ŵ�x�ϣ��Ƚ�x��y���бȽϣ����x>y��x��y��ֵ���н�����������������Ȼ������x��z���бȽϣ����x>z��x��z��ֵ���н�����������ʹx��С��
2.����Դ���룺
main()
{
int x,y,z,t;
scanf("%d%d%d",&x,&y,&z);
if (x>y)
{t=x;x=y;y=t;} /*����x,y��ֵ*/ if(x>z)
{t=z;z=x;x=t;}/*����x,z��ֵ*/ if(y>z)
{t=y;y=z;z=t;}/*����z,y��ֵ*/ printf("small to big: %d %d %d\n",x,y,z);
}
==============================================================
������6��
��Ŀ����*�������ĸC��ͼ����
1.���������������'*'����ֽ��д����ĸC���ٷ��������
2.����Դ���룺
��i nclude "stdio.h"
main()
{
printf("Hello C-world!\n");
printf(" ****\n");
printf(" *\n");
printf(" * \n");
printf(" ****\n");
}
============================================================== 
������7��
��Ŀ���������ͼ��������c���������У���һ����Very Beautiful!
1.����������ַ�����256������ͬ�ַ���ͼ�β�һ����������������
2.����Դ���룺
��i nclude "stdio.h"
main()
{
char a=176,b=219;
printf("%c%c%c%c%c\n",b,a,a,a,b);
printf("%c%c%c%c%c\n",a,b,a,b,a);
printf("%c%c%c%c%c\n",a,a,b,a,a);
printf("%c%c%c%c%c\n",a,b,a,b,a);
printf("%c%c%c%c%c\n",b,a,a,a,b);}
==============================================================
������8��
��Ŀ�����9*9�ھ���
1.����������������п��ǣ���9��9�У�i�����У�j�����С�
2.����Դ���룺
��i nclude "stdio.h"
main()
{
��int i,j,result;
��printf("\n");
��for (i=1;i<10;i++)
����{ for(j=1;j<10;j++)
��������{
����������result=i*j;
����������printf("%d*%d=%-3d",i,j,result);/*-3d��ʾ����룬ռ3λ*/ ��������}
������printf("\n");/*ÿһ�к���*/ ����}
}
==============================================================
������9��
��Ŀ��Ҫ����������������̡�
1.�����������i�����У�j�������У�����i+j�ĺ͵ı仯����������ڷ��񣬻��ǰ׷���
2.����Դ���룺
��i nclude "stdio.h"
main()
{
int i,j;
for(i=0;i<8;i++)
��{
����for(j=0;j<8;j++)
������if((i+j)%2==0)
��������printf("%c%c",219,219);
������else
��������printf(" ");
������printf("\n");
��}
}
============================================================== 
������10��
��Ŀ����ӡ¥�ݣ�ͬʱ��¥���Ϸ���ӡ����Ц���� 
1.�����������i�����У�j�������У�j����i�ı仯����������ڷ���ĸ�����
2.����Դ���룺
��i nclude "stdio.h"
main()
{
int i,j;
printf("\1\1\n");/*�������Ц��*/ for(i=1;i<11;i++)
��{
��for(j=1;j<=i;j++)
�� ��printf("%c%c",219,219);
��printf("\n");
��}
}
������11��
��Ŀ���ŵ����⣺��һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�С���ӳ����������º�ÿ��������һ�����ӣ��������Ӷ���������ÿ���µ���������Ϊ���٣�
1.��������������ӵĹ���Ϊ����1,1,2,3,5,8,13,21....
2.����Դ���룺
main()
{
long f1,f2;
int i;
f1=f2=1;
for(i=1;i<=20;i++)
��{ printf("%12ld %12ld",f1,f2);
������if(i%2==0) printf("\n");/*���������ÿ���ĸ�*/ ������f1=f1+f2; /*ǰ�����¼�������ֵ����������*/ ������f2=f1+f2; /*ǰ�����¼�������ֵ����������*/ ��}
}
==============================================================
������12��
��Ŀ���ж�101-200֮���ж��ٸ����������������������
1.����������ж������ķ�������һ�����ֱ�ȥ��2��sqrt(�����)������ܱ����������������������������������������֮�������� ������������
2.����Դ���룺
��i nclude "math.h"
main()
{
��int m,i,k,h=0,leap=1;
��printf("\n");
��for(m=101;m<=200;m++)
����{ k=sqrt(m+1);
������for(i=2;i<=k;i++)
����������if(m%i==0)
������������{leap=0;break;}
������if(leap) {printf("%-4d",m);h++;
����������������if(h%10==0)
����������������printf("\n");
�������������� }
������leap=1;
����}
��printf("\nThe total is %d",h);
}
============================================================== 
������13��
��Ŀ����ӡ�����еġ�ˮ�ɻ���������ν��ˮ�ɻ�������ָһ����λ�������λ���������͵��ڸ����������磺153��һ����ˮ�ɻ���������Ϊ153=1�����η���5�����η���3�����η���
1.�������������forѭ������100-999������ÿ�����ֽ����λ��ʮλ����λ��
2.����Դ���룺
main()
{
int i,j,k,n;
printf("'water flower'number is:");
��for(n=100;n<1000;n++)
��{
����i=n/100;/*�ֽ����λ*/ ����j=n/10%10;/*�ֽ��ʮλ*/ ����k=n%10;/*�ֽ����λ*/ ����if(i*100+j*10+k==i*i*i+j*j*j+k*k*k)
������{
������printf("%-5d",n);
������}
��}
printf("\n");
}
==============================================================
������14��
��Ŀ����һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5��

�����������n���зֽ���������Ӧ���ҵ�һ����С������k��Ȼ������������ɣ� 
(1)����������ǡ����n����˵���ֽ��������Ĺ����Ѿ���������ӡ�����ɡ�
(2)���n<>k����n�ܱ�k��������Ӧ��ӡ��k��ֵ������n����k����,��Ϊ�µ���������n,�ظ�ִ�е�һ����
(3)���n���ܱ�k����������k+1��Ϊk��ֵ,�ظ�ִ�е�һ����

2.����Դ���룺
/* zheng int is divided yinshu*/ main()
{
int n,i;
printf("\nplease input a number:\n");
scanf("%d",&n);
printf("%d=",n);
for(i=2;i<=n;i++)
��{
����while(n!=i)
����{
������if(n%i==0)
������{ printf("%d*",i);
��������n=n/i;
������}
������else
��������break;
����}
}
printf("%d",n);}
==============================================================
������15��
��Ŀ�����������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ��
1.���������(a>b)?a:b��������������Ļ������ӡ�
2.����Դ���룺
main()
{
��int score;
��char grade;
��printf("please input a score\n");
��scanf("%d",&score);
��grade=score>=90?'A':(score>=60?'B':'C');
��printf("%d belongs to %c",score,grade);
}
==============================================================
������16��
��Ŀ����������������m��n���������Լ������С��������
1.�������������շ������
2.����Դ���룺
main()
{
��int a,b,num1,num2,temp;
��printf("please input two numbers:\n");
��scanf("%d,%d",&num1,&num2);
��if(num1 ��{ temp=num1;
����num1=num2;��
����num2=temp;
��}
a=num1;b=num2;
while(b!=0)/*����շ������ֱ��bΪ0Ϊֹ*/ ��{
����temp=a%b;
����a=b;
����b=temp;
��}
printf("gongyueshu:%d\n",a);
printf("gongbeishu:%d\n",num1*num2/a);
}
==============================================================
������17��
��Ŀ������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
1.�������������while���,����Ϊ������ַ���Ϊ'\n'.
2.����Դ���룺
��i nclude "stdio.h"
main()
{char c;
��int letters=0,space=0,digit=0,others=0;
��printf("please input some characters\n");
��while((c=getchar())!='\n')
��{
��if(c>='a'&&c<='z'||c>='A'&&c<='Z')
����letters++;
��else if(c==' ')
����space++;
������else if(c>='0'&&c<='9')
��������������digit++;
����������else
��������������others++;
}
printf("all in all:char=%d space=%d digit=%d others=%d\n",letters,
space,digit,others);
}
==============================================================
������18��
��Ŀ����s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�����2+22+222+2222+22222(��ʱ����5�������)������������м��̿��ơ�
1.����������ؼ��Ǽ����ÿһ���ֵ��
2.����Դ���룺
main()
{
��int a,n,count=1;
��long int sn=0,tn=0;
��printf("please input a and n\n");
��scanf("%d,%d",&a,&n);
��printf("a=%d,n=%d\n",a,n);
��while(count<=n)
��{
����tn=tn+a;
����sn=sn+tn;
����a=a*10;
����++count;
��}
printf("a+aa+...=%ld\n",sn);
}
==============================================================
������19��
��Ŀ��һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ��������������6=1��2��3.��̡������ҳ�1000���ڵ�����������
1. �������������ճ���<--��ҳ����14. 
2.����Դ���룺
main()
{
static int k[10];
int i,j,n,s;
for(j=2;j<1000;j++)
��{
��n=-1;
��s=j;
����for(i=1;i ����{
������if((j%i)==0)
������{��n++;
��������s=s-i;
��������k[n]=i;
������}
����}
��if(s==0)
��{
��printf("%d is a wanshu",j);
��for(i=0;i ��printf("%d,",k[i]);
��printf("%d\n",k[n]);
��}
}
}
============================================================== 
������20��
��Ŀ��һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£������ڵ�10�����ʱ�� 


������13��
��Ŀ����ӡ�����еġ�ˮ�ɻ���������ν��ˮ�ɻ�������ָһ����λ�������λ���������͵��ڸ����������磺153��һ����ˮ�ɻ���������Ϊ153=1�����η���5�����η���3�����η���
1.�������������forѭ������100-999������ÿ�����ֽ����λ��ʮλ����λ��
2.����Դ���룺
main()
{
int i,j,k,n;
printf("'water flower'number is:");
��for(n=100;n<1000;n++)
��{
����i=n/100;/*�ֽ����λ*/ ����j=n/10%10;/*�ֽ��ʮλ*/ ����k=n%10;/*�ֽ����λ*/ ����if(i*100+j*10+k==i*i*i+j*j*j+k*k*k)
������{
������printf("%-5d",n);
������}
��}
printf("\n");
}
==============================================================
������14��
��Ŀ����һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5��

�����������n���зֽ���������Ӧ���ҵ�һ����С������k��Ȼ������������ɣ� 
(1)����������ǡ����n����˵���ֽ��������Ĺ����Ѿ���������ӡ�����ɡ�
(2)���n<>k����n�ܱ�k��������Ӧ��ӡ��k��ֵ������n����k����,��Ϊ�µ���������n,�ظ�ִ�е�һ����
(3)���n���ܱ�k����������k+1��Ϊk��ֵ,�ظ�ִ�е�һ����

2.����Դ���룺
/* zheng int is divided yinshu*/ main()
{
int n,i;
printf("\nplease input a number:\n");
scanf("%d",&n);
printf("%d=",n);
for(i=2;i<=n;i++)
��{
����while(n!=i)
����{
������if(n%i==0)
������{ printf("%d*",i);
��������n=n/i;
������}
������else
��������break;
����}
}
printf("%d",n);}
==============================================================
������15��
��Ŀ�����������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ��
1.���������(a>b)?a:b��������������Ļ������ӡ�
2.����Դ���룺
main()
{
��int score;
��char grade;
��printf("please input a score\n");
��scanf("%d",&score);
��grade=score>=90?'A':(score>=60?'B':'C');
��printf("%d belongs to %c",score,grade);
}
==============================================================
������16��
��Ŀ����������������m��n���������Լ������С��������
1.�������������շ������
2.����Դ���룺
main()
{
��int a,b,num1,num2,temp;
��printf("please input two numbers:\n");
��scanf("%d,%d",&num1,&num2);
��if(num1 ��{ temp=num1;
����num1=num2;��
����num2=temp;
��}
a=num1;b=num2;
while(b!=0)/*����շ������ֱ��bΪ0Ϊֹ*/ ��{
����temp=a%b;
����a=b;
����b=temp;
��}
printf("gongyueshu:%d\n",a);
printf("gongbeishu:%d\n",num1*num2/a);
}
==============================================================
������17��
��Ŀ������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
1.�������������while���,����Ϊ������ַ���Ϊ'\n'.
2.����Դ���룺
��i nclude "stdio.h"
main()
{char c;
��int letters=0,space=0,digit=0,others=0;
��printf("please input some characters\n");
��while((c=getchar())!='\n')
��{
��if(c>='a'&&c<='z'||c>='A'&&c<='Z')
����letters++;
��else if(c==' ')
����space++;
������else if(c>='0'&&c<='9')
��������������digit++;
����������else
��������������others++;
}
printf("all in all:char=%d space=%d digit=%d others=%d\n",letters,
space,digit,others);
}
==============================================================
������18��
��Ŀ����s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�����2+22+222+2222+22222(��ʱ����5�������)������������м��̿��ơ�
1.����������ؼ��Ǽ����ÿһ���ֵ��
2.����Դ���룺
main()
{
��int a,n,count=1;
��long int sn=0,tn=0;
��printf("please input a and n\n");
��scanf("%d,%d",&a,&n);
��printf("a=%d,n=%d\n",a,n);
��while(count<=n)
��{
����tn=tn+a;
����sn=sn+tn;
����a=a*10;
����++count;
��}
printf("a+aa+...=%ld\n",sn);
}
==============================================================
������19��
��Ŀ��һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ��������������6=1��2��3.��̡������ҳ�1000���ڵ�����������
1. �������������ճ���<--��ҳ����14. 
2.����Դ���룺
main()
{
static int k[10];
int i,j,n,s;
for(j=2;j<1000;j++)
��{
��n=-1;
��s=j;
����for(i=1;i ����{
������if((j%i)==0)
������{��n++;
��������s=s-i;
��������k[n]=i;
������}
����}
��if(s==0)
��{
��printf("%d is a wanshu",j);
��for(i=0;i ��printf("%d,",k[i]);
��printf("%d\n",k[n]);
��}
}
}
============================================================== 
������20��
��Ŀ��һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£������ڵ�10�����ʱ�� 


������13��
��Ŀ����ӡ�����еġ�ˮ�ɻ���������ν��ˮ�ɻ�������ָһ����λ�������λ���������͵��ڸ����������磺153��һ����ˮ�ɻ���������Ϊ153=1�����η���5�����η���3�����η���
1.�������������forѭ������100-999������ÿ�����ֽ����λ��ʮλ����λ��
2.����Դ���룺
main()
{
int i,j,k,n;
printf("'water flower'number is:");
��for(n=100;n<1000;n++)
��{
����i=n/100;/*�ֽ����λ*/ ����j=n/10%10;/*�ֽ��ʮλ*/ ����k=n%10;/*�ֽ����λ*/ ����if(i*100+j*10+k==i*i*i+j*j*j+k*k*k)
������{
������printf("%-5d",n);
������}
��}
printf("\n");
}
==============================================================
������14��
��Ŀ����һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5��

�����������n���зֽ���������Ӧ���ҵ�һ����С������k��Ȼ������������ɣ� 
(1)����������ǡ����n����˵���ֽ��������Ĺ����Ѿ���������ӡ�����ɡ�
(2)���n<>k����n�ܱ�k��������Ӧ��ӡ��k��ֵ������n����k����,��Ϊ�µ���������n,�ظ�ִ�е�һ����
(3)���n���ܱ�k����������k+1��Ϊk��ֵ,�ظ�ִ�е�һ����

2.����Դ���룺
/* zheng int is divided yinshu*/ main()
{
int n,i;
printf("\nplease input a number:\n");
scanf("%d",&n);
printf("%d=",n);
for(i=2;i<=n;i++)
��{
����while(n!=i)
����{
������if(n%i==0)
������{ printf("%d*",i);
��������n=n/i;
������}
������else
��������break;
����}
}
printf("%d",n);}
==============================================================
������15��
��Ŀ�����������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ��
1.���������(a>b)?a:b��������������Ļ������ӡ�
2.����Դ���룺
main()
{
��int score;
��char grade;
��printf("please input a score\n");
��scanf("%d",&score);
��grade=score>=90?'A':(score>=60?'B':'C');
��printf("%d belongs to %c",score,grade);
}
==============================================================
������16��
��Ŀ����������������m��n���������Լ������С��������
1.�������������շ������
2.����Դ���룺
main()
{
��int a,b,num1,num2,temp;
��printf("please input two numbers:\n");
��scanf("%d,%d",&num1,&num2);
��if(num1 ��{ temp=num1;
����num1=num2;��
����num2=temp;
��}
a=num1;b=num2;
while(b!=0)/*����շ������ֱ��bΪ0Ϊֹ*/ ��{
����temp=a%b;
����a=b;
����b=temp;
��}
printf("gongyueshu:%d\n",a);
printf("gongbeishu:%d\n",num1*num2/a);
}
==============================================================
������17��
��Ŀ������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
1.�������������while���,����Ϊ������ַ���Ϊ'\n'.
2.����Դ���룺
��i nclude "stdio.h"
main()
{char c;
��int letters=0,space=0,digit=0,others=0;
��printf("please input some characters\n");
��while((c=getchar())!='\n')
��{
��if(c>='a'&&c<='z'||c>='A'&&c<='Z')
����letters++;
��else if(c==' ')
����space++;
������else if(c>='0'&&c<='9')
��������������digit++;
����������else
��������������others++;
}
printf("all in all:char=%d space=%d digit=%d others=%d\n",letters,
space,digit,others);
}
==============================================================
������18��
��Ŀ����s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�����2+22+222+2222+22222(��ʱ����5�������)������������м��̿��ơ�
1.����������ؼ��Ǽ����ÿһ���ֵ��
2.����Դ���룺
main()
{
��int a,n,count=1;
��long int sn=0,tn=0;
��printf("please input a and n\n");
��scanf("%d,%d",&a,&n);
��printf("a=%d,n=%d\n",a,n);
��while(count<=n)
��{
����tn=tn+a;
����sn=sn+tn;
����a=a*10;
����++count;
��}
printf("a+aa+...=%ld\n",sn);
}
==============================================================
������19��
��Ŀ��һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ��������������6=1��2��3.��̡������ҳ�1000���ڵ�����������
1. �������������ճ���<--��ҳ����14. 
2.����Դ���룺
main()
{
static int k[10];
int i,j,n,s;
for(j=2;j<1000;j++)
��{
��n=-1;
��s=j;
����for(i=1;i ����{
������if((j%i)==0)
������{��n++;
��������s=s-i;
��������k[n]=i;
������}
����}
��if(s==0)
��{
��printf("%d is a wanshu",j);
��for(i=0;i ��printf("%d,",k[i]);
��printf("%d\n",k[n]);
��}
}
}
============================================================== 
������20��
��Ŀ��һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£������ڵ�10�����ʱ�� 


�����������ף���10�η�����ߣ�
1.���������������ע��
2.����Դ���룺
main()
{
float sn=100.0,hn=sn/2;
int n;
for(n=2;n<=10;n++)
��{
����sn=sn+2*hn;/*��n�����ʱ������������*/ ����hn=hn/2; /*��n�η����߶�*/ ��}
printf("the total of road is %f\n",sn);
printf("the tenth is %f meter\n",hn);
}
������21��
��Ŀ�����ӳ������⣺���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬����񫣬�ֶ����һ�����ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ�����Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ����һ��������10���������ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ�˶��١�
1.�����������ȡ����˼ά�ķ������Ӻ���ǰ�ƶϡ�
2.����Դ���룺
main()
{
int day,x1,x2;
day=9;
x2=1;
while(day>0)
��{x1=(x2+1)*2;/*��һ����������ǵ�2����������1���2��*/ ��x2=x1;
��day--;
��}
printf("the total is %d\n",x1);
}
==============================================================
������22��
��Ŀ������ƹ����ӽ��б������������ˡ��׶�Ϊa,b,c���ˣ��Ҷ�Ϊx,y,z���ˡ��ѳ�ǩ���������������������Ա����������������a˵������x�ȣ�c˵������x,z�ȣ��������ҳ��������ֵ������� 
1.����������ж������ķ�������һ�����ֱ�ȥ��2��sqrt(�����)������ܱ����������������������������������������֮�������� ������������
2.����Դ���룺
main()
{
char i,j,k;/*i��a�Ķ��֣�j��b�Ķ��֣�k��c�Ķ���*/ for(i='x';i<='z';i++)
��for(j='x';j<='z';j++)
��{
��if(i!=j)
����for(k='x';k<='z';k++)
����{ if(i!=k&&j!=k)
������{ if(i!='x'&&k!='x'&&k!='z')
������printf("order is a--%c\tb--%c\tc--%c\n",i,j,k);
������}
����}
��}
}
==============================================================
������23�� 
��Ŀ����ӡ������ͼ�������Σ�

*
***
******
********
******
***
*
1.����������Ȱ�ͼ�ηֳ���������������ǰ����һ�����ɣ�������һ�����ɣ�����˫��forѭ������һ������У��ڶ�������С� 
2.����Դ���룺
main()
{
int i,j,k;
for(i=0;i<=3;i++)
��{
��for(j=0;j<=2-i;j++)
����printf(" ");
��for(k=0;k<=2*i;k++)
����printf("*");
��printf("\n");
��}
for(i=0;i<=2;i++)
��{
��for(j=0;j<=i;j++)
����printf(" ");
��for(k=0;k<=4-2*i;k++)
����printf("*");
��printf("\n");
��}
}
==============================================================
������24�� 
��Ŀ����һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰ20��֮�͡�
1.�����������ץס�������ĸ�ı仯���ɡ� 
2.����Դ���룺
main()
{
int n,t,number=20;
float a=2,b=1,s=0;
for(n=1;n<=number;n++)
��{
��s=s+a/b;
��t=a;a=a+b;b=t;/*�ⲿ���ǳ���Ĺؼ�������߲²�t������*/ ��}
printf("sum is %9.6f\n",s);
}
==============================================================
������25�� 
��Ŀ����1+2!+3!+...+20!�ĺ�
1.����������˳���ֻ�ǰ��ۼӱ�����۳ˡ� 
2.����Դ���룺
main()
{
float n,s=0,t=1;
for(n=1;n<=20;n++)
��{
��t*=n;
��s+=t;
��}
printf("1+2!+3!...+20!=%e\n",s);
}
==============================================================
������26�� 
��Ŀ�����õݹ鷽����5!��
1.����������ݹ鹫ʽ��fn=fn_1*4!
2.����Դ���룺
��i nclude "stdio.h"
main()
{
int i;
int fact();
for(i=0;i<5;i++)
��printf("\40:%d!=%d\n",i,fact(i));
}
int fact(j)
int j;
{
int sum;
if(j==0)
��sum=1;
else
��sum=j*fact(j-1);
return sum;
}



C���Գ���ʵ��100��������

   
������27�� 
��Ŀ�����õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������
1.���������
2.����Դ���룺
��i nclude "stdio.h"
main()
{
int i=5;
void palin(int n);
printf("\40:");
palin(i);
printf("\n");
}
void palin(n)
int n;
{
char next;
if(n<=1)
��{
��next=getchar();
��printf("\n\0:");
��putchar(next);
��}
else
��{
��next=getchar();
��palin(n-1);
��putchar(next);
��}
}
==============================================================
������28�� 
��Ŀ����5��������һ���ʵ�����˶����ꣿ��˵�ȵ�4���˴�2�ꡣ�ʵ�4������������˵�ȵ�3���˴�2�ꡣ�ʵ������ˣ���˵�ȵ�2�˴����ꡣ�ʵ�2���ˣ�˵�ȵ�һ���˴����ꡣ����ʵ�һ���ˣ���˵��10�ꡣ���ʵ�����˶��
1.������������õݹ�ķ������ݹ��Ϊ���ƺ͵��������׶Ρ�Ҫ��֪�����������������֪�������˵��������������ƣ��Ƶ���һ�ˣ�10�꣩���������ơ�
2.����Դ���룺
age(n)
int n;
{
int c;
if(n==1) c=10;
else c=age(n-1)+2;
return(c);
}
main()
{ printf("%d",age(5));
}
==============================================================
������29�� 
��Ŀ����һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�
1. ���������ѧ��ֽ��ÿһλ�������½��ͣ�
2.����Դ���룺
main( )
{
long a,b,c,d,e,x;
scanf("%ld",&x);
a=x/10000;/*�ֽ����λ*/ b=x%10000/1000;/*�ֽ��ǧλ*/ c=x%1000/100;/*�ֽ����λ*/ d=x%100/10;/*�ֽ��ʮλ*/ e=x%10;/*�ֽ����λ*/ if (a!=0) printf("there are 5, %ld %ld %ld %ld %ld\n",e,d,c,b,a);
else if (b!=0) printf("there are 4, %ld %ld %ld %ld\n",e,d,c,b);
����else if (c!=0) printf(" there are 3,%ld %ld %ld\n",e,d,c);
��������else if (d!=0) printf("there are 2, %ld %ld\n",e,d);
������������else if (e!=0) printf(" there are 1,%ld\n",e);
}
==============================================================
������30�� 
��Ŀ��һ��5λ�����ж����ǲ��ǻ���������12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ��������
1.���������ͬ29��
2.����Դ���룺
main( )
{
long ge,shi,qian,wan,x;
scanf("%ld",&x);
wan=x/10000;
qian=x%10000/1000;
shi=x%100/10;
ge=x%10;
if (ge==wan&&shi==qian)/*��λ������λ����ʮλ����ǧλ*/ ��printf("this number is a huiwen\n");
else
��printf("this number is not a huiwen\n");
}
������31��
��Ŀ�����������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ����������������жϵڶ�����ĸ��
1.�����������������ȽϺã������һ����ĸһ�������ж����������if����жϵڶ�����ĸ��
2.����Դ���룺
��i nclude <stdio.h>
void main()
{
char letter;
printf("please input the first letter of someday\n");
while ((letter=getch())!='Y')/*��������ĸΪYʱ�Ž���*/ { switch (letter)
{case 'S':printf("please input second letter\n");
����������if((letter=getch())=='a')
������������printf("saturday\n");
����������else if ((letter=getch())=='u')
������������������printf("sunday\n");
��������������else printf("data error\n");
����������break;
case 'F':printf("friday\n");break;
case 'M':printf("monday\n");break;
case 'T':printf("please input second letter\n");
����������if((letter=getch())=='u')
������������printf("tuesday\n");
����������else if ((letter=getch())=='h')
������������������printf("thursday\n");
��������������else printf("data error\n");
����������break;
case 'W':printf("wednesday\n");break;
default: printf("data error\n");
����}
��}
}
==============================================================
������32��
��Ŀ��Press any key to change color, do you want to try it. Please hurry up!
1.���������������������������������
2.����Դ���룺
��i nclude <conio.h>
void main(void)
{
int color;
for (color = 0; color < 8; color++)
��{ 
��textbackground(color);/*�����ı��ı�����ɫ*/ ��cprintf("This is color %d\r\n", color);
��cprintf("Press any key to continue\r\n");
��getch();/*�����ַ�������*/ ��}
}
==============================================================
������33��
��Ŀ��ѧϰgotoxy()��clrscr()����������
1.���������
2.����Դ���룺
��i nclude <conio.h>
void main(void)
{
clrscr();/*��������*/ textbackground(2);
gotoxy(1, 5);/*��λ����*/ cprintf("Output at row 5 column 1\n");
textbackground(3);
gotoxy(20, 10);
cprintf("Output at row 10 column 20\n");
}
==============================================================
������34��
��Ŀ����ϰ��������
1. ��������� 
2.����Դ���룺
��i nclude <stdio.h>
void hello_world(void)
{
printf("Hello, world!\n");
}
void three_hellos(void)
{
int counter;
for (counter = 1; counter <= 3; counter++)
hello_world();/*���ô˺���*/ }
void main(void)
{
three_hellos();/*���ô˺���*/ }
==============================================================
������35��
��Ŀ���ı���ɫ����
1.���������
2.����Դ���룺
��i nclude <conio.h>
void main(void)
{
int color;
for (color = 1; color < 16; color++)
��{
��textcolor(color);/*�����ı���ɫ*/ ��cprintf("This is color %d\r\n", color);
��}
textcolor(128 + 15);
cprintf("This is blinking\r\n");
}
==============================================================
������36��
��Ŀ����100֮�ڵ�����������
1.���������
2.����Դ���룺
��i nclude <stdio.h>
��i nclude "math.h"
#define N 101
main()
{
int i,j,line,a[N];
for(i=2;i<N;i++) a[i]=i;
for(i=2;i<sqrt(N);i++)
��for(j=i+1;j<N;j++)
��{
����if(a[i]!=0&&a[j]!=0)
����if(a[j]%a[i]==0)
����a[j]=0;}
printf("\n");
for(i=2,line=0;i<N;i++)
{
��if(a[i]!=0)
��{printf("%5d",a[i]);
��line++;}
��if(line==10)
��{printf("\n");
line=0;}
}
}
==============================================================
������37��
��Ŀ����10������������
1.�����������������ѡ�񷨣����Ӻ�9���ȽϹ����У�ѡ��һ����С�����һ��Ԫ�ؽ������´����ƣ����õڶ���Ԫ�����8�����бȽϣ������н����� ������������ 
2.����Դ���룺
#define N 10
main()
{int i,j,min,tem,a[N];
/*input data*/ printf("please input ten num:\n");
for(i=0;i<N;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);}
printf("\n");
for(i=0;i<N;i++)
printf("%5d",a[i]);
printf("\n");
/*sort ten num*/ for(i=0;i<N-1;i++)
{min=i;
for(j=i+1;j<N;j++)
if(a[min]>a[j]) min=j;
tem=a[i];
a[i]=a[min];
a[min]=tem;
}
/*output data*/ printf("After sorted \n");
for(i=0;i<N;i++)
printf("%5d",a[i]);
}
==============================================================
������38��
��Ŀ����һ��3*3����Խ���Ԫ��֮�� 
1.�������������˫��forѭ�����������ά���飬�ٽ�a[i][i]�ۼӺ������
2.����Դ���룺
main()
{
float a[3][3],sum=0;
int i,j;
printf("please input rectangle element:\n");
for(i=0;i<3;i++)
��for(j=0;j<3;j++)
��scanf("%f",&a[i][j]);
for(i=0;i<3;i++)
��sum=sum+a[i][i];
printf("duijiaoxian he is %6.2f",sum);
}
==============================================================
������39��
��Ŀ����һ���Ѿ��ź�������顣������һ������Ҫ��ԭ���Ĺ��ɽ������������С�
1. ��������������жϴ����Ƿ�������һ������Ȼ���ٿ��ǲ����м�����������������Ԫ��֮����������κ���һ��λ�á� 
2.����Դ���룺
main()
{
int a[11]={1,4,6,9,13,16,19,28,40,100};
int temp1,temp2,number,end,i,j;
printf("original array is:\n");
for(i=0;i<10;i++)
��printf("%5d",a[i]);
printf("\n");
printf("insert a new number:");
scanf("%d",&number);
end=a[9];
if(number>end)
��a[10]=number;
else
��{for(i=0;i<10;i++)
����{ if(a[i]>number)
������{temp1=a[i];
��������a[i]=number;
������for(j=i+1;j<11;j++)
������{temp2=a[j];
��������a[j]=temp1;
��������temp1=temp2;
������}
������break;
������}
����}
}
for(i=0;i<11;i++)
��printf("%6d",a[i]);
}
==============================================================
������40��
��Ŀ����һ���������������
1.����������õ�һ�������һ��������
2.����Դ���룺
#define N 5
main()
{ int a[N]={9,6,5,4,1},i,temp;
��printf("\n original array:\n");
��for(i=0;i<N;i++)
��printf("%4d",a[i]);
��for(i=0;i<N/2;i++)
��{temp=a[i];
����a[i]=a[N-i-1];
����a[N-i-1]=temp;
��}
printf("\n sorted array:\n");
for(i=0;i<N;i++)
��printf("%4d",a[i]);
}
������41��
��Ŀ��ѧϰstatic���徲̬�������÷�������
1.���������
2.����Դ���룺
��i nclude "stdio.h"
varfunc()
{
int var=0;
static int static_var=0;
printf("\40:var equal %d \n",var);
printf("\40:static var equal %d \n",static_var);
printf("\n");
var++;
static_var++;
}
void main()
{int i;
��for(i=0;i<3;i++)
����varfunc();
}
==============================================================
������42�� 
��Ŀ��ѧϰʹ��auto����������÷�
1.���������������������
2.����Դ���룺
��i nclude "stdio.h"
main()
{int i,num;
num=2;
��for (i=0;i<3;i++)
��{ printf("\40: The num equal %d \n",num);
����num++;
����{
����auto int num=1;
����printf("\40: The internal block num equal %d \n",num);
����num++;
����} 
==========================================================================
������43��
��Ŀ��ѧϰʹ��static����һ�÷���������
1.���������
2.����Դ���룺
��i nclude "stdio.h"
main()
{
int i,num;
num=2;
for(i=0;i<3;i++)
{
printf("\40: The num equal %d \n",num);
num++;
{
static int num=1;
printf("\40:The internal block num equal %d\n",num);
num++;
}
}
}
==============================================================
������44��
��Ŀ��ѧϰʹ��external���÷���
1.���������
2.����Դ���룺
��i nclude "stdio.h"
int a,b,c;
void add()
{ int a;
a=3;
c=a+b;
}
void main()
{ a=b=4;
add();
printf("The value of c is equal to %d\n",c);
}
==============================================================
������45��
��Ŀ��ѧϰʹ��register��������ķ�����
1.���������
2.����Դ���룺
void main()
{
register int i;
int tmp=0;
for(i=1;i<=100;i++)
tmp+=i;
printf("The sum is %d\n",tmp);
}
==============================================================
������46��
��Ŀ����#define������ϰ(1)������
1.���������
2.����Դ���룺
��i nclude "stdio.h"
#define TRUE 1
#define FALSE 0
#define SQ(x) (x)*(x)
void main()
{
int num;
int again=1;
printf("\40: Program will stop if input value less than 50.\n");
while(again)
{
printf("\40:Please input number==>");
scanf("%d",&num);
printf("\40:The square for this number is %d \n",SQ(num));
if(num>=50)
��again=TRUE;
else
��again=FALSE;
}
}
==============================================================
������47��
��Ŀ����#define������ϰ(2)
1.���������������������������������
2.����Դ���룺
��i nclude "stdio.h"
#define exchange(a,b) { \ /*�궨���������������������������Σ���ʱ���������ұ߼���"\"*/ ������������������������int t;\
������������������������t=a;\
������������������������a=b;\
������������������������b=t;\
����������������������}
void main(void)
{
int x=10;
int y=20;
printf("x=%d; y=%d\n",x,y);
exchange(x,y);
printf("x=%d; y=%d\n",x,y);
}
==============================================================
������48��
��Ŀ����#define������ϰ(3)������
1.���������
2.����Դ���룺
#define LAG >
#define SMA <
#define EQ ==
��i nclude "stdio.h"
void main()
{ int i=10;
int j=20;
if(i LAG j)
printf("\40: %d larger than %d \n",i,j);
else if(i EQ j)
printf("\40: %d equal to %d \n",i,j);
else if(i SMA j)
printf("\40:%d smaller than %d \n",i,j);
else
printf("\40: No such value.\n");
}
==============================================================
������49��
��Ŀ��#if #ifdef��#ifndef���ۺ�Ӧ�á�
1. ��������� 
2.����Դ���룺
��i nclude "stdio.h"
#define MAX
#define MAXIMUM(x,y) (x>y)?x:y
#define MINIMUM(x,y) (x>y)?y:x
void main()
{ int a=10,b=20;
#ifdef MAX
printf("\40: The larger one is %d\n",MAXIMUM(a,b));
#else
printf("\40: The lower one is %d\n",MINIMUM(a,b));
#endif
#ifndef MIN
printf("\40: The lower one is %d\n",MINIMUM(a,b));
#else
printf("\40: The larger one is %d\n",MAXIMUM(a,b));
#endif
#undef MAX
#ifdef MAX
printf("\40: The larger one is %d\n",MAXIMUM(a,b));
#else
printf("\40: The lower one is %d\n",MINIMUM(a,b));
#endif
#define MIN
#ifndef MIN
printf("\40: The lower one is %d\n",MINIMUM(a,b));
#else
printf("\40: The larger one is %d\n",MAXIMUM(a,b));
#endif
}
==============================================================
������50��
��Ŀ����i nclude ��Ӧ����ϰ������
1.���������
2.����Դ���룺
test.h �ļ����£�
#define LAG >
#define SMA <
#define EQ ==
��i nclude "test.h" /*һ�����ļ�50.c������test.h*/ ��i nclude "stdio.h"
void main()
{ int i=10;
int j=20;
if(i LAG j)
printf("\40: %d larger than %d \n",i,j);
else if(i EQ j)
printf("\40: %d equal to %d \n",i,j);
else if(i SMA j)
printf("\40:%d smaller than %d \n",i,j);
else
printf("\40: No such value.\n");
}
������51��
��Ŀ��ѧϰʹ�ð�λ�� & ��������
1.���������0&0=0; 0&1=0; 1&0=0; 1&1=1
2.����Դ���룺
��i nclude "stdio.h"
main()
{
int a,b;
a=077;
b=a&3;
printf("\40: The a & b(decimal) is %d \n",b);
b&=7;
printf("\40: The a & b(decimal) is %d \n",b);
}
============================================================== 
������52��
��Ŀ��ѧϰʹ�ð�λ�� | ��
1.���������0|0=0; 0|1=1; 1|0=1; 1|1=1������������������������
2.����Դ���룺
��i nclude "stdio.h"
main()
{
int a,b;
a=077;
b=a|3;
printf("\40: The a & b(decimal) is %d \n",b);
b|=7;
printf("\40: The a & b(decimal) is %d \n",b);
}
==============================================================
������53��
��Ŀ��ѧϰʹ�ð�λ��� ^ ��������
1.���������0^0=0; 0^1=1; 1^0=1; 1^1=0
2.����Դ���룺
��i nclude "stdio.h"
main()
{
int a,b;
a=077;
b=a^3;
printf("\40: The a & b(decimal) is %d \n",b);
b^=7;
printf("\40: The a & b(decimal) is %d \n",b);
}
==============================================================
������54��
��Ŀ��ȡһ������a���Ҷ˿�ʼ��4��7λ��
��������������������ǣ� 
(1)��ʹa����4λ��
(2)����һ����4λȫΪ1,����ȫΪ0����������~(~0<<4)
(3)��������߽���&���㡣
2.����Դ���룺
main()
{
unsigned a,b,c,d;
scanf("%o",&a);
b=a>>4;
c=~(~0<<4);
d=b&c;
printf("%o\n%o\n",a,d);
}
==============================================================
������55��
��Ŀ��ѧϰʹ�ð�λȡ��~��������
1.���������~0=1; ~1=0;
2.����Դ���룺
��i nclude "stdio.h"
main()
{
int a,b;
a=234;
b=~a;
printf("\40: The a's 1 complement(decimal) is %d \n",b);
a=~a;
printf("\40: The a's 1 complement(hexidecimal) is %x \n",a);
} 
==============================================================
������56��
��Ŀ����ͼ��ѧ��circle��Բ�Ρ�������
1.���������
2.����Դ���룺
/*circle*/ ��i nclude "graphics.h"
main()
{int driver,mode,i;
float j=1,k=1;
driver=VGA;mode=VGAHI;
initgraph(&driver,&mode,"");
setbkcolor(YELLOW);
for(i=0;i<=25;i++)
{
setcolor(8);
circle(310,250,k);
k=k+j;
j=j+0.3;
}
} 
==============================================================
������57��
��Ŀ����ͼ��ѧ��line��ֱ�ߡ�
1.�������������������������������
2.����Դ���룺
��i nclude "graphics.h"
main()
{int driver,mode,i;
float x0,y0,y1,x1;
float j=12,k;
driver=VGA;mode=VGAHI;
initgraph(&driver,&mode,"");
setbkcolor(GREEN);
x0=263;y0=263;y1=275;x1=275;
for(i=0;i<=18;i++)
{
setcolor(5);
line(x0,y0,x0,y1);
x0=x0-5;
y0=y0-5;
x1=x1+5;
y1=y1+5;
j=j+10;
}
x0=263;y1=275;y0=263;
for(i=0;i<=20;i++)
{
setcolor(5);
line(x0,y0,x0,y1);
x0=x0+5;
y0=y0+5;
y1=y1-5;
}
}
==============================================================
������58��
��Ŀ����ͼ��ѧ��rectangle�����Ρ�������
1.�������������forѭ������100-999������ÿ�����ֽ����λ��ʮλ����λ��
2.����Դ���룺
��i nclude "graphics.h"
main()
{int x0,y0,y1,x1,driver,mode,i;
driver=VGA;mode=VGAHI;
initgraph(&driver,&mode,"");
setbkcolor(YELLOW);
x0=263;y0=263;y1=275;x1=275;
for(i=0;i<=18;i++)
{
setcolor(1);
rectangle(x0,y0,x1,y1);
x0=x0-5;
y0=y0-5;
x1=x1+5;
y1=y1+5;
}
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(150,40,"How beautiful it is!");
line(130,60,480,60);
setcolor(2);
circle(269,269,137);
}
==============================================================
������59��
��Ŀ����ͼ���ۺ����ӡ�
1.���������
2.����Դ���룺
# define PAI 3.1415926
# define B 0.809
# include "graphics.h"
��i nclude "math.h"
main()
{
int i,j,k,x0,y0,x,y,driver,mode;
float a;
driver=CGA;mode=CGAC0;
initgraph(&driver,&mode,"");
setcolor(3);
setbkcolor(GREEN);
x0=150;y0=100;
circle(x0,y0,10);
circle(x0,y0,20);
circle(x0,y0,50);
for(i=0;i<16;i++)
{
��a=(2*PAI/16)*i;
��x=ceil(x0+48*cos(a));
��y=ceil(y0+48*sin(a)*B);
��setcolor(2); line(x0,y0,x,y);}
setcolor(3);circle(x0,y0,60);
/* Make 0 time normal size letters */ settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
outtextxy(10,170,"press a key");
getch();
setfillstyle(HATCH_FILL,YELLOW);
floodfill(202,100,WHITE);
getch();
for(k=0;k<=500;k++)
{
��setcolor(3);
��for(i=0;i<=16;i++)
��{
����a=(2*PAI/16)*i+(2*PAI/180)*k;
����x=ceil(x0+48*cos(a));
����y=ceil(y0+48+sin(a)*B);
����setcolor(2); line(x0,y0,x,y);
��}
��for(j=1;j<=50;j++)
��{
����a=(2*PAI/16)*i+(2*PAI/180)*k-1;
����x=ceil(x0+48*cos(a));
����y=ceil(y0+48*sin(a)*B);
����line(x0,y0,x,y);
��}
}
restorecrtmode();
}
============================================================== 
������60��
��Ŀ����ͼ���ۺ����ӡ�������
1.���������
2.����Դ���룺
��i nclude "graphics.h"
#define LEFT 0
#define TOP 0
#define RIGHT 639
#define BOTTOM 479
#define LINES 400
#define MAXCOLOR 15
main()
{
int driver,mode,error;
int x1,y1;
int x2,y2;
int dx1,dy1,dx2,dy2,i=1;
int count=0;
int color=0;
driver=VGA;
mode=VGAHI;
initgraph(&driver,&mode,"");
x1=x2=y1=y2=10;
dx1=dy1=2;
dx2=dy2=3;
while(!kbhit())
{
��line(x1,y1,x2,y2);
��x1+=dx1;y1+=dy1;
��x2+=dx2;y2+dy2;
��if(x1<=LEFT||x1>=RIGHT)
��dx1=-dx1;
��if(y1<=TOP||y1>=BOTTOM)
����dy1=-dy1;
��if(x2<=LEFT||x2>=RIGHT)
����dx2=-dx2;
��if(y2<=TOP||y2>=BOTTOM)
����dy2=-dy2;
��if(++count>LINES)
��{
����setcolor(color);
����color=(color>=MAXCOLOR)?0:++color;
��}
}
closegraph();
}
������61��
��Ŀ����ӡ����������Σ�Ҫ���ӡ��10������ͼ��������
1.���������
������ ���� 1
������������1 ��1
������������1 ��2 ��1
������������1�� 3 ��3�� 1
������������1�� 4�� 6 ��4 ��1
������������1�� 5�� 10��10��5 ��1�� 
2.����Դ���룺
main()
{int i,j;
int a[10][10];
printf("\n");
for(i=0;i<10;i++)
��{a[i][0]=1;
��a[i][i]=1;}
for(i=2;i<10;i++)
��for(j=1;j<i;j++)
��a[i][j]=a[i-1][j-1]+a[i-1][j];
for(i=0;i<10;i++)
��{for(j=0;j<=i;j++)
��printf("%5d",a[i][j]);
��printf("\n"); 



��}
}
==============================================================
������62��
��Ŀ��ѧϰputpixel���㡣
1.���������������������������������
2.����Դ���룺
��i nclude "stdio.h"
��i nclude "graphics.h"
main()
{
int i,j,driver=VGA,mode=VGAHI;
initgraph(&driver,&mode,"");
setbkcolor(YELLOW);
for(i=50;i<=230;i+=20)
��for(j=50;j<=230;j++)
��putpixel(i,j,1);
for(j=50;j<=230;j+=20)
��for(i=50;i<=230;i++)
��putpixel(i,j,1);
}
==============================================================
������63��
��Ŀ������Բellipse������
1.���������
2.����Դ���룺
��i nclude "stdio.h"
��i nclude "graphics.h"
��i nclude "conio.h"
main()
{
int x=360,y=160,driver=VGA,mode=VGAHI;
int num=20,i;
int top,bottom;
initgraph(&driver,&mode,"");
top=y-30;
bottom=y-30;
for(i=0;i<num;i++)
{
ellipse(250,250,0,360,top,bottom);
top-=5;
bottom+=5;
}
getch();
}
==============================================================
������64��
��Ŀ������ellipse and rectangle ��ͼ��
1.���������
2.����Դ���룺
��i nclude "stdio.h"
��i nclude "graphics.h"
��i nclude "conio.h"
main()
{
int driver=VGA,mode=VGAHI;
int i,num=15,top=50;
int left=20,right=50;
initgraph(&driver,&mode,"");
for(i=0;i<num;i++)
{
ellipse(250,250,0,360,right,left);
ellipse(250,250,0,360,20,top);
rectangle(20-2*i,20-2*i,10*(i+2),10*(i+2));
right+=5;
left+=5;
top+=10;
}
getch();
}
==============================================================
������65��
��Ŀ��һ����������ͼ����������
1.���������
2.����Դ���룺
��i nclude "graphics.h"
��i nclude "math.h"
��i nclude "dos.h"
��i nclude "conio.h"
��i nclude "stdlib.h"
��i nclude "stdio.h"
��i nclude "stdarg.h"
#define MAXPTS 15
#define PI 3.1415926
struct PTS {
int x,y;
};
double AspectRatio=0.85;
void LineToDemo(void)
{
struct viewporttype vp;
struct PTS points[MAXPTS];
int i, j, h, w, xcenter, ycenter;
int radius, angle, step;
double rads;
printf(" MoveTo / LineTo Demonstration" );
getviewsettings( &vp );
h = vp.bottom - vp.top;
w = vp.right - vp.left;
xcenter = w / 2; /* Determine the center of circle */ ycenter = h / 2;
radius = (h - 30) / (AspectRatio * 2);
step = 360 / MAXPTS; /* Determine # of increments */ angle = 0; /* Begin at zero degrees */ for( i=0 ; i<MAXPTS ; ++i ){ /* Determine circle intercepts */ rads = (double)angle * PI / 180.0; /* Convert angle to radians */ points[i].x = xcenter + (int)( cos(rads) * radius );
points[i].y = ycenter - (int)( sin(rads) * radius * AspectRatio );
angle += step; /* Move to next increment */ }
circle( xcenter, ycenter, radius ); /* Draw bounding circle */ for( i=0 ; i<MAXPTS ; ++i ){ /* Draw the cords to the circle */ for( j=i ; j<MAXPTS ; ++j ){ /* For each remaining intersect */ moveto(points[i].x, points[i].y); /* Move to beginning of cord */ lineto(points[j].x, points[j].y); /* Draw the cord */ } } }
main()
{int driver,mode;
driver=CGA;mode=CGAC0;
initgraph(&driver,&mode,"");
setcolor(3);
setbkcolor(GREEN);
LineToDemo();}
==============================================================
������66��
��Ŀ������3����a,b,c������С˳�������������
1.�������������ָ�뷽����
2.����Դ���룺
/*pointer*/ main()
{
int n1,n2,n3;
int *pointer1,*pointer2,*pointer3;
printf("please input 3 number:n1,n2,n3:");
scanf("%d,%d,%d",&n1,&n2,&n3);
pointer1=&n1;
pointer2=&n2;
pointer3=&n3;
if(n1>n2) swap(pointer1,pointer2);
if(n1>n3) swap(pointer1,pointer3);
if(n2>n3) swap(pointer2,pointer3);
printf("the sorted numbers are:%d,%d,%d\n",n1,n2,n3);
}
swap(p1,p2)
int *p1,*p2;
{int p;
p=*p1;*p1=*p2;*p2=p;
}
==============================================================
������67��
��Ŀ���������飬�������һ��Ԫ�ؽ�������С�������һ��Ԫ�ؽ�����������顣
1.���������̷��ǿ�����д������⡣������������
2.����Դ���룺
main()
{
int number[10];
input(number);
max_min(number);
output(number);
}
input(number)
int number[10];
{int i;
for(i=0;i<9;i++)
��scanf("%d,",&number[i]);
��scanf("%d",&number[9]);
}
max_min(array)
int array[10];
{int *max,*min,k,l;
int *p,*arr_end;
arr_end=array+10;
max=min=array;
for(p=array+1;p<arr_end;p++)
��if(*p>*max) max=p;
��else if(*p<*min) min=p;
��k=*max;
��l=*min;
��*p=array[0];array[0]=l;l=*p;
��*p=array[9];array[9]=k;k=*p;
��return;
}
output(array)
int array[10];
{ int *p;
for(p=array;p<array+9;p++)
��printf("%d,",*p);
printf("%d\n",array[9]);
}


ÿ�춼Ҫ�н���
C���Գ���ʵ��100��<3>
������68��
��Ŀ����n��������ʹ��ǰ�����˳�������m��λ�ã����m���������ǰ���m����
1.���������
2.����Դ���룺
main()
{
intnumber[20],n,m,i;
printf("the total numbersis:");
scanf("%d",&n);
printf("backm:");
scanf("%d",&m);
for(i=0;i<n-1;i++)
��scanf("%d,",&number[i]);
scanf("%d",&number[n-1]);
move(number,n,m);
for(i=0;i<n-1;i++)
��printf("%d,",number[i]);
printf("%d",number[n-1]);
}
move(array,n,m)
intn,m,array[20];
{
int*p,array_end;
array_end=*(array+n-1);
for(p=array+n-1;p>array;p--)
��*p=*(p-1);
��*array=array_end;
��m--;
��if(m>0)move(array,n,m);
}
==============================================================
������69��
��Ŀ����n����Χ��һȦ��˳���źš��ӵ�һ���˿�ʼ��������1��3��������������3�����˳�Ȧ�ӣ���������µ���ԭ���ڼ��ŵ���λ��
1.���������
2.����Դ���룺
#definenmax 50
main()
{
int i,k,m,n,num[nmax],*p;
printf("pleaseinput the total ofnumbers:");
scanf("%d",&n);
p=num;
for(i=0;i<n;i++)
��*(p+i)=i+1;
��i=0;
��k=0;
��m=0;
��while(m<n-1)
��{
��if(*(p+i)!=0)k++;
��if(k==3)
��{*(p+i)=0;
��k=0;
��m++;
��}
i++;
if(i==n)i=0;
}
while(*p==0) p++;
printf("%d isleft\n",*p);
}
==============================================================
������70��
��Ŀ��дһ����������һ���ַ����ĳ��ȣ���main�����������ַ�����������䳤�ȡ�������
1.���������
2.����Դ���룺
main()
{
intlen;
char *str[20];
printf("please input astring:\n");
scanf("%s",str);
len=length(str);
printf("thestring has %d characters.",len);
}
length(p)
char*p;
{
int n;
n=0;
while(*p!='\0')
{
��n++;
��p++;
}
returnn;
}
������71��
��Ŀ����дinput()��output()�������룬���5��ѧ�������ݼ�¼��
1.���������
2.����Դ���룺
#defineN 5
struct student
{ char num[6];
��charname[8];
��intscore[4];
} stu[N];
input(stu)
struct student stu[];
{int i,j;
��for(i=0;i<N;i++)
��{printf("\n please input %d of %d\n",i+1,N);
����printf("num:");
����scanf("%s",stu[i].num);
����printf("name:");
����scanf("%s",stu[i].name);
������for(j=0;j<3;j++)
������{printf("score%d.",j+1);
��������scanf("%d",&stu[i].score[j]);
������}
����printf("\n");
��}
}
print(stu)
structstudent stu[];
{ int i,j;
printf("\nNo. Name Sco1 Sco2Sco3\n");
for(i=0;i<N;i++)
{printf("%-6s%-10s",stu[i].num,stu[i].name);
��for(j=0;j<3;j++)
����printf("%-8d",stu[i].score[j]);
��printf("\n");
}
}
main()
{
��input();
��print();
}
==============================================================
������72��
��Ŀ������һ������
1.�������������������������������
2.����Դ���룺
/*creata list*/ ��include "stdlib.h"
��include "stdio.h"
struct list
{ int data;
structlist *next;
};
typedef struct list node;
typedef node*link;
void main()
{ link ptr,head;
intnum,i;
ptr=(link)malloc(sizeof(node));
ptr=head;
printf("pleaseinput 5numbers==>\n");
for(i=0;i<=4;i++)
{
��scanf("%d",&num);
��ptr->data=num;
��ptr->next=(link)malloc(sizeof(node));
��if(i==4)ptr->next=NULL;
��elseptr=ptr->next;
}
ptr=head;
while(ptr!=NULL)
{printf("The value is==>%d\n",ptr->data);
��ptr=ptr->next;
}
}
==============================================================
������73��
��Ŀ���������һ������������
1.���������
2.����Դ���룺
/*reverseoutput a list*/ ��include "stdlib.h"
��include "stdio.h"
struct list
{ int data;
��structlist *next;
};
typedef struct list node;
typedef node*link;
void main()
{ link ptr,head,tail;��
��intnum,i;
��tail=(link)malloc(sizeof(node));
��tail->next=NULL;
��ptr=tail;
��printf("\npleaseinput 5data==>\n");
��for(i=0;i<=4;i++)
��{
����scanf("%d",&num);
����ptr->data=num;
����head=(link)malloc(sizeof(node));
����head->next=ptr;
����ptr=head;
��}
ptr=ptr->next;
while(ptr!=NULL)
{printf("The value is ==>%d\n",ptr->data);
��ptr=ptr->next;
}

}
==============================================================

������74��
��Ŀ��������������
1.���������
2.����Դ���룺
��include "stdlib.h"
��include "stdio.h"
struct list
{ int data;
structlist *next;
};
typedef struct list node;
typedef node*link;
link delete_node(link pointer,link tmp)
{if(tmp==NULL) /*delete first node*/ ��returnpointer->next;
else
{ if(tmp->next->next==NULL)/*deletelast node*/ ����tmp->next=NULL;
��else/*delete the other node*/ ����tmp->next=tmp->next->next;
��returnpointer;
}
}
void selection_sort(link pointer,int num)
{link tmp,btmp;
��inti,min;
��for(i=0;i<num;i++)
��{
��tmp=pointer;
��min=tmp->data;
��btmp=NULL;
��while(tmp->next)
��{if(min>tmp->next->data)
��{min=tmp->next->data;
����btmp=tmp;
��}
��tmp=tmp->next;
��}
printf("\40:%d\n",min);
pointer=delete_node(pointer,btmp);
}
}
linkcreate_list(int array[],int num)
{ link tmp1,tmp2,pointer;
inti;
pointer=(link)malloc(sizeof(node));
pointer->data=array[0];
tmp1=pointer;
for(i=1;i<num;i++)
{tmp2=(link)malloc(sizeof(node));
��tmp2->next=NULL;
��tmp2->data=array[i];
��tmp1->next=tmp2;
��tmp1=tmp1->next;
}
returnpointer;
}
link concatenate(link pointer1,link pointer2)
{linktmp;
tmp=pointer1;
while(tmp->next)
��tmp=tmp->next;
tmp->next=pointer2;
returnpointer1;
}
void main(void)
{ intarr1[]={3,12,8,9,11};
��linkptr;
��ptr=create_list(arr1,5);
��selection_sort(ptr,5);
}


������75��
��Ŀ������һ�£���һ���򵥵���Ŀ��
1.���������
2.����Դ���룺
main()
{
inti,n;
for(i=1;i<5;i++)
{n=0;
��if(i!=1)
��n=n+1;
��if(i==3)
��n=n+1;
��if(i==4)
��n=n+1;
��if(i!=4)
��n=n+1;
��if(n==3)
����printf("zhuhao shi deshi:%c",64+i);
��}
}
==============================================================
������76��
��Ŀ����дһ������������nΪż��ʱ�����ú�����1/2+1/4+...+1/n,������nΪ����ʱ�����ú���1/1+1/3+...+1/n(����ָ�뺯��)
1.���������
2.����Դ���룺
main()
��include "stdio.h"
main()
{
floatpeven(),podd(),dcall();
float sum;
int n;
while(1)
{
��scanf("%d",&n);
��if(n>1)
����break;
}
if(n%2==0)
{
��printf("Even=");
��sum=dcall(peven,n);
}
else
{
��printf("Odd=");
��sum=dcall(podd,n);
}
printf("%f",sum);
}
floatpeven(int n)
{
float s;
inti;
s=1;
for(i=2;i<=n;i+=2)
��s+=1/(float)i;
return(s);
}
floatpodd(n)
int n;
{
float s;
inti;
s=0;
for(i=1;i<=n;i+=2)
��s+=1/(float)i;
return(s);
}
floatdcall(fp,n)
float (*fp)();
int n;
{
floats;
s=(*fp)(n);
return(s);
}
==============================================================
������77��
��Ŀ�������ϰ��ָ��ָ���ָ�룩
1.�������������������
2.����Դ���룺
main()
{char *s[]={"man","woman","girl","boy","sister"};
char**q;
int k;
for(k=0;k<5;k++)
{��������������;/*������дʲô���*/��printf("%s\n",*q);
}
}
==============================================================
������78��
��Ŀ���ҵ����������ˣ�����������ҳ���������ʲô���⡣
1.���������
2.����Դ���룺
#defineN 4
��include "stdio.h"
static struct man
{ charname[20];
int age;
}person[N]={"li",18,"wang",19,"zhang",20,"sun",22};
main()
{structman *q,*p;
int i,m=0;
p=person;
for(i=0;i<N;i++)
{if(m<p->age)
��q=p++;
��m=q->age;}
printf("%s,%d",(*q).name,(*q).age);
}
==============================================================
������79��
��Ŀ���ַ�������
1.���������
2.����Դ���룺
main()
{
char*str1[20],*str2[20],*str3[20];
char swap();
printf("pleaseinput threestrings\n");
scanf("%s",str1);
scanf("%s",str2);
scanf("%s",str3);
if(strcmp(str1,str2)>0)swap(str1,str2);
if(strcmp(str1,str3)>0)swap(str1,str3);
if(strcmp(str2,str3)>0)swap(str2,str3);
printf("after beingsorted\n");
printf("%s\n%s\n%s\n",str1,str2,str3);
}
charswap(p1,p2)
char *p1,*p2;
{
char*p[20];
strcpy(p,p1);strcpy(p1,p2);strcpy(p2,p);
}



ÿ�춼ҪC���Գ���ʵ��100��<4>

������80��
��Ŀ����̲����һ�����ӣ���ֻ�������֡���һֻ���Ӱ��������ƾ�ݷ�Ϊ��ݣ�����һ������ֻ���ӰѶ��һ�����뺣�У�������һ�ݡ��ڶ�ֻ���Ӱ�ʣ�µ�������ƽ���ֳ���ݣ��ֶ���һ������ͬ���Ѷ��һ�����뺣�У�������һ�ݣ����������ġ�����ֻ���Ӷ����������ģ��ʺ�̲��ԭ�������ж��ٸ����ӣ�
1.���������
2.����Դ���룺
main()
{inti,m,j,k,count;
for(i=4;i<10000;i+=4)
{count=0;
m=i;
for(k=0;k<5;k++)
{
��j=i/4*5+1;
��i=j;
��if(j%4==0)
����count++;
��else
����break;
}
��i=m;
��if(count==4)
��{printf("%d\n",count);
����break;}
}
}
������81��
��Ŀ��809*??=800*??+9*??+1����??�������λ��,8*??�Ľ��Ϊ��λ����9*??�Ľ��Ϊ3λ������??�������λ������809*??��Ľ����
1.���������
2.����Դ���룺
output(longb,long i)
{printf("\n%ld/%ld=809*%ld+%ld",b,i,i,b%i);
}
main()
{longinta,b,i;
a=809;
for(i=10;i<100;i++)
{b=i*a+1;
if(b>=1000&&b<=10000&&8*i<100&&9*i>=100)
output(b,i);}
}
==============================================================
������82��
��Ŀ���˽���ת��Ϊʮ����
1.�������������������������������
2.����Դ���룺
main()
{char *p,s[6];intn;
p=s;
gets(p);
n=0;
while(*(p)!='\0')
{n=n*8+*p-'0';
p++;}
printf("%d",n);
}
==============================================================
������83��
��Ŀ����0��7������ɵ�����������
1.���������
2.����Դ���룺
main()
{
longsum=4,s=4;
int j;
for(j=2;j<=8;j++)/*j is place ofnumber*/ {printf("\n%ld",sum);
if(j<=2)
s*=7;
else
s*=8;
sum+=s;}
printf("\nsum=%ld",sum);
}
==============================================================
������84��
��Ŀ��һ��ż�����ܱ�ʾΪ��������֮�͡�
1.���������
2.����Դ���룺
��include "stdio.h"
��include "math.h"
main()
{ inta,b,c,d;
scanf("%d",&a);
for(b=3;b<=a/2;b+=2)
{for(c=2;c<=sqrt(b);c++)
if(b%c==0)break;
if(c>sqrt(b))
d=a-b;
else
break;
for(c=2;c<=sqrt(d);c++)
if(d%c==0)break;
if(c>sqrt(d))
printf("%d=%d+%d\n",a,b,d);
}
}
==============================================================
������85��
��Ŀ���ж�һ�������ܱ�����9����
1.���������
2.����Դ���룺
main()
{long int m9=9,sum=9;
intzi,n1=1,c9=1;
scanf("%d",&zi);
while(n1!=0)
{if(!(sum%zi))
n1=0;
else
{m9=m9*10;
sum=sum+m9;
c9++;
}
}
printf("%ld,canbe divided by %d\"9\"",sum,c9);
}
==============================================================
������86��
��Ŀ�������ַ������ӳ���
1.���������
2.����Դ���룺
��include "stdio.h"
main()
{char a[]="acegikm";
charb[]="bdfhjlnpq";
char c[80],*p;
inti=0,j=0,k=0;
while(a[i]!='\0'&&b[j]!='\0')
{if (a[i]{c[k]=a[i];i++;}
else
c[k]=b[j++];
k++;
}
c[k]='\0';
if(a[i]=='\0')
p=b+j;
else
p=a+i;
strcat(c,p);
puts(c);
}
==============================================================
������87��
��Ŀ���ش������ṹ��������ݣ�
1.�������������������
2.����Դ���룺
��include "stdio.h"
struct student
{ int x;
charc;
}a;
main()
{a.x=3;
a.c='a';
f(a);
printf("%d,%c",a.x,a.c);
}
f(structstudentb)
{
b.x=20;
b.c='y';
}
==============================================================
������88��
��Ŀ����ȡ7������1��50��������ֵ��ÿ��ȡһ��ֵ�������ӡ����ֵ�����ģ���
1.���������
2.����Դ���룺
main()
{inti,a,n=1;
while(n<=7)
{ do{
������scanf("%d",&a);
������}while(a<1||a>50);
for(i=1;i<=a;i++)
��printf("*");
printf("\n");
n++;}
getch();
}
==============================================================
������89��
��Ŀ��ĳ����˾���ù��õ绰�������ݣ���������λ���������ڴ��ݹ������Ǽ��ܵģ����ܹ������£�ÿλ���ֶ�����5,Ȼ���úͳ���10��������������֣��ٽ���һλ�͵���λ�������ڶ�λ�͵���λ������
1.���������
2.����Դ���룺
main()
{inta,i,aa[4],t;
scanf("%d",&a);
aa[0]=a%10;
aa[1]=a%100/10;
aa[2]=a%1000/100;
aa[3]=a/1000;
for(i=0;i<=3;i++)
��{aa[i]+=5;
��aa[i]%=10;
��}
for(i=0;i<=3/2;i++)
��{t=aa[i];
��aa[i]=aa[3-i];
��aa[3-i]=t;
��}
for(i=3;i>=0;i--)
printf("%d",aa[i]);
}
==============================================================

������90��
��Ŀ��ר����һ�⣬�������
1.���������
2.����Դ���룺
��include "stdio.h"
#define M 5
main()
{inta[M]={1,2,3,4,5};
int i,j,t;
i=0;j=M-1;
while(i{t=*(a+i);
*(a+i)=*(a+j);
*(a+j)=t;
i++;j--;
}
for(i=0;iprintf("%d",*(a+i));
}
������91��
��Ŀ��ʱ�亯������1
1.���������
2.����Դ���룺
��include "stdio.h"
��include "time.h"
void main()
{ time_t lt; /*definea longint time varible*/ lt=time(NULL);/*system time and date*/printf(ctime(<)); /*english format output*/printf(asctime(localtime(<)));/*tranfer to tm*/printf(asctime(gmtime(<))); /*tranfer to Greenwich time*/}
==============================================================
������92��
��Ŀ��ʱ�亯������2
1.�������������������������������
2.����Դ���룺
/*calculatetime*/ ��include "time.h"
��include "stdio.h"
main()
{ time_t start,end;
inti;
start=time(NULL);
for(i=0;i<3000;i++)
{printf("\1\1\1\1\1\1\1\1\1\1\n");}
end=time(NULL);
printf("\1:The different is%6.3f\n",difftime(end,start));
}
==============================================================
������93��
��Ŀ��ʱ�亯������3
1.���������
2.����Դ���룺
/*calculatetime*/ ��include "time.h"
��include "stdio.h"
main()
{ clock_t start,end;
inti;
double var;
start=clock();
for(i=0;i<10000;i++)
{printf("\1\1\1\1\1\1\1\1\1\1\n");}
end=clock();
printf("\1:The different is%6.3f\n",(double)(end-start));
}
==============================================================
������94��
��Ŀ��ʱ�亯������4,һ��������Ϸ���ж�һ���˷�Ӧ������
1.���������
2.����Դ���룺
��include "time.h"
��include "stdlib.h"
��include "stdio.h"
main()
{char c;
clock_tstart,end;
time_t a,b;
double var;
inti,guess;
srand(time(NULL));
printf("do you want to playit.('y' or 'n')\n");
loop:
while((c=getchar())=='y')
{
i=rand()%100;
printf("\npleaseinput number youguess:\n");
start=clock();
a=time(NULL);
scanf("%d",&guess);
while(guess!=i)
{if(guess>i)
{printf("pleaseinput a littlesmaller.\n");
scanf("%d",&guess);}
else
{printf("pleaseinput a littlebigger.\n");
scanf("%d",&guess);}
}
end=clock();
b=time(NULL);
printf("\1:It took you %6.3fseconds\n",var=(double)(end-start)/18.2);
printf("\1:it took you %6.3fseconds\n\n",difftime(b,a));
if(var<15)
printf("\1\1You are very clever! \1\1\n\n");
elseif(var<25)
printf("\1\1 you are normal!\1\1\n\n");
else
printf("\1\1 you are stupid!\1\1\n\n");
printf("\1\1 Congradulations\1\1\n\n");
printf("The number you guess is%d",i);
}
printf("\ndo you want to try itagain?(\"yy\".or.\"n\")\n");
if((c=getch())=='y')
gotoloop;
}
==============================================================
������95��
��Ŀ����ͥ�������С����
1.���������
2.����Դ���룺
/*moneymanagement system*/ ��include "stdio.h"
��include "dos.h"
main()
{
FILE *fp;
structdate d;
float sum,chm=0.0;
int len,i,j=0;
int c;
charch[4]="",ch1[16]="",chtime[12]="",chshop[16],chmoney[8];
pp:clrscr();
sum=0.0;
gotoxy(1,1);printf("|---------------------------------------------------------------------------|");
gotoxy(1,2);printf("|money management system(C1.0) 2000.03|");
gotoxy(1,3);printf("|---------------------------------------------------------------------------|");
gotoxy(1,4);printf("|-- money records -- | -- today cost list --|");
gotoxy(1,5);printf("| ------------------------|-------------------------------------|");
gotoxy(1,6);printf("|date: -------------- | |");
gotoxy(1,7);printf("| | || |");
gotoxy(1,8);printf("| -------------- ||");
gotoxy(1,9);printf("| thgs: ------------------ ||");
gotoxy(1,10);printf("| | | ||");
gotoxy(1,11);printf("| ------------------ ||");
gotoxy(1,12);printf("| cost: ---------- ||");
gotoxy(1,13);printf("| | | ||");
gotoxy(1,14);printf("| ---------- ||");
gotoxy(1,15);printf("| ||");
gotoxy(1,16);printf("| ||");
gotoxy(1,17);printf("| ||");
gotoxy(1,18);printf("| ||");
gotoxy(1,19);printf("| ||");
gotoxy(1,20);printf("| ||");
gotoxy(1,21);printf("| ||");
gotoxy(1,22);printf("| ||");
gotoxy(1,23);printf("|---------------------------------------------------------------------------|");
i=0;
getdate(&d);
sprintf(chtime,"%4d.%02d.%02d",d.da_year,d.da_mon,d.da_day);
for(;;)
{


gotoxy(3,24);printf(" Tab __browse cost list Esc__quit");
gotoxy(13,10);printf("");
gotoxy(13,13);printf("");
gotoxy(13,7);printf("%s",chtime);
j=18;
ch[0]=getch();
if(ch[0]==27)
break;
strcpy(chshop,"");
strcpy(chmoney,"");
if(ch[0]==9)
{
mm:i=0;
fp=fopen("home.dat","r+");
gotoxy(3,24);printf("");
gotoxy(6,4);printf(" list records");
gotoxy(1,5);printf("|-------------------------------------|");
gotoxy(41,4);printf("");
gotoxy(41,5);printf("|");
while(fscanf(fp,"%10s%14s%f\n",chtime,chshop,&chm)!=EOF)
{if(i==36)
{ getch();
i=0;}
if ((i%36)<17)
{gotoxy(4,6+i);
printf("");
gotoxy(4,6+i);}
else
if((i%36)>16)
{gotoxy(41,4+i-17);
printf("");
gotoxy(42,4+i-17);}
i++;
sum=sum+chm;
printf("%10s%-14s%6.1f\n",chtime,chshop,chm);}
gotoxy(1,23);printf("|---------------------------------------------------------------------------|");
gotoxy(1,24);printf("||");
gotoxy(1,25);printf("|---------------------------------------------------------------------------|");
gotoxy(10,24);printf("totalis %8.1f$",sum);
fclose(fp);
gotoxy(49,24);printf("pressany key to.....");getch();gotopp;
}
else
{
while(ch[0]!='\r')
{ if(j<10)
{strncat(chtime,ch,1);
j++;}
if(ch[0]==8)
{
len=strlen(chtime)-1;
if(j>15)
{len=len+1;j=11;}
strcpy(ch1,"");
j=j-2;
strncat(ch1,chtime,len);
strcpy(chtime,"");
strncat(chtime,ch1,len-1);
gotoxy(13,7);printf("");}
gotoxy(13,7);printf("%s",chtime);ch[0]=getch();
if(ch[0]==9)
gotomm;
if(ch[0]==27)
exit(1);
}
gotoxy(3,24);printf("");
gotoxy(13,10);
j=0;
ch[0]=getch();
while(ch[0]!='\r')
{if (j<14)
{ strncat(chshop,ch,1);
j++;}
if(ch[0]==8)
{len=strlen(chshop)-1;
strcpy(ch1,"");
j=j-2;
strncat(ch1,chshop,len);
strcpy(chshop,"");
strncat(chshop,ch1,len-1);
gotoxy(13,10);printf("");}
gotoxy(13,10);printf("%s",chshop);ch[0]=getch();}
gotoxy(13,13);
j=0;
ch[0]=getch();
while(ch[0]!='\r')
{if (j<6)
{ strncat(chmoney,ch,1);
j++;}
if(ch[0]==8)
{len=strlen(chmoney)-1;
strcpy(ch1,"");
j=j-2;
strncat(ch1,chmoney,len);
strcpy(chmoney,"");
strncat(chmoney,ch1,len-1);
gotoxy(13,13);printf("");}
gotoxy(13,13);printf("%s",chmoney);ch[0]=getch();}
if((strlen(chshop)==0)||(strlen(chmoney)==0))
continue;
if((fp=fopen("home.dat","a+"))!=NULL);
fprintf(fp,"%10s%14s%6s",chtime,chshop,chmoney);
fputc('\n',fp);
fclose(fp);
i++;
gotoxy(41,5+i);
printf("%10s%-14s %-6s",chtime,chshop,chmoney);
}}}
==============================================================
������96��
��Ŀ�������ַ������Ӵ����ֵĴ���
1.���������
2.����Դ���룺
��include "string.h"
��include "stdio.h"
main()
{ charstr1[20],str2[20],*p1,*p2;
int sum=0;
printf("pleaseinput twostrings\n");
scanf("%s%s",str1,str2);
p1=str1;p2=str2;
while(*p1!='\0')
{
if(*p1==*p2)
{while(*p1==*p2&&*p2!='\0')
{p1++;
p2++;}
}
else
p1++;
if(*p2=='\0')
sum++;
p2=str2;
}
printf("%d",sum);
getch();}
==============================================================
������97��
��Ŀ���Ӽ�������һЩ�ַ�������������͵�������ȥ��ֱ������һ��#Ϊֹ��
1.�������������������
2.����Դ���룺
��include "stdio.h"
main()
{ FILE *fp;
charch,filename[10];
scanf("%s",filename);
if((fp=fopen(filename,"w"))==NULL)
{printf("cannotopenfile\n");
exit(0);}
ch=getchar();
ch=getchar();
while(ch!='#')
{fputc(ch,fp);putchar(ch);
ch=getchar();
}
fclose(fp);
}
==============================================================
������98��
��Ŀ���Ӽ�������һ���ַ�������Сд��ĸȫ��ת���ɴ�д��ĸ��Ȼ�������һ�������ļ���test���б��档������ַ����ԣ�������
1.���������
2.����Դ���룺
��include "stdio.h"
main()
{FILE *fp;
charstr[100],filename[10];
inti=0;
if((fp=fopen("test","w"))==NULL)
{printf("cannot open the file\n");
exit(0);}
printf("pleaseinput a string:\n");
gets(str);
while(str[i]!='!')
{if(str[i]>='a'&&str[i]<='z')
str[i]=str[i]-32;
fputc(str[i],fp);
i++;}
fclose(fp);
fp=fopen("test","r");
fgets(str,strlen(str)+1,fp);
printf("%s\n",str);
fclose(fp);
}
==============================================================
������99��
��Ŀ�������������ļ�A��B,�����һ����ĸ��Ҫ����������ļ��е���Ϣ�ϲ�������ĸ˳�����У��������һ�����ļ�C�С�
1.���������
2.����Դ���룺
��include "stdio.h"
main()
{ FILE *fp;
inti,j,n,ni;
charc[160],t,ch;
if((fp=fopen("A","r"))==NULL)
{printf("fileA cannot be opened\n");
exit(0);}
printf("\n Acontents are:\n");
for(i=0;(ch=fgetc(fp))!=EOF;i++)
{c[i]=ch;
putchar(c[i]);
}
fclose(fp);
ni=i;
if((fp=fopen("B","r"))==NULL)
{printf("fileB cannot be opened\n");
exit(0);}
printf("\n Bcontents are:\n");
for(i=0;(ch=fgetc(fp))!=EOF;i++)
{c[i]=ch;
putchar(c[i]);
}
fclose(fp);
n=i;
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
if(c[i]>c[j])
{t=c[i];c[i]=c[j];c[j]=t;}
printf("\nC file is:\n");
fp=fopen("C","w");
for(i=0;i<n;i++)
{putc(c[i],fp);
putchar(c[i]);
}
fclose(fp);
}