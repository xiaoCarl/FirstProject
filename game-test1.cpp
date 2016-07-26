# include<stdio.h>  //插入输入输出头文件

# include<string.h> //字符数组的函数定义的头文件

# include<stdlib.h> //stdlib 头文件即standard library标准库头文件stdlib 头文件里包含了C、C++语言的最常用的系统函数该 ,文件包含了C语言标准库函数的定义.

# define SPA 0       //在C或C++语言源程序中允许用一个标识符来表示一个字符串，称为“宏”。 “define”为宏定义命令。

# define MAN 1

# define COM 2

    /* 空位置设为0 ，玩家下的位置设为1 ，电脑下的位置设为2 */

#define ORDEX 15

int qipan[ORDEX][ORDEX];  //自己定义的预处理函数，以二维数组形式构建棋盘  /* 15*15的棋盘 */



typedef struct//typedef的作用是在C中定义一个结构体类型

{

    int iFlag;

    int iX, iY;

}ScmPiece;


int g_iPieceLen;

ScmPiece g_ScmGame1, g_ScmGame2;





void start();  /* 程序的主要控制函数 */

void draw();   /* 画棋盘 */

int Victory( ScmPiece * pScmPiece );  /* 判断胜利 p q为判断点坐标 */

void AI(int *p,int *q);     /* 电脑下子 p q返回下子坐标 */

int value(int p,int q);     /* 计算空点p q的价值 */

int qixing(int n,int p,int q);    /* 返回空点p q在n方向上的棋型 n为1-8方向 从右顺时针开始数 */

void yiwei(int n,int *i,int *j);   /* 在n方向上对坐标 i j 移位 n为1-8方向 从右顺时针开始数  */



void InitGame(){

    int i;

    g_iPieceLen = ORDEX * ORDEX;

    g_ScmGame1.iX = 0;

    g_ScmGame1.iY = 0;

    g_ScmGame1.iFlag = COM;

    g_ScmGame2.iX = 7;

    g_ScmGame2.iY = 7;

    g_ScmGame2.iFlag = MAN;

    for( i=0; i < ORDEX*ORDEX; ++i )

        *( (int*)qipan + i ) = SPA;

}



main()
{
    char k;

    do{

        InitGame();

        start();

        printf("还要再来一把吗?输入y或n："); getchar(); scanf("%c",&k);

        while(k!='y'&&k!='n'){ printf("输入错误,请重新输入\n"); scanf("%c",&k); }

        system("cls");

    }while(k=='y');

    printf("谢谢使用!\n");

}

void MakePiece( ScmPiece * pScmPiece, int iGameFlag ){

    if( iGameFlag )

    {

        printf("请下子：");

        while( scanf( "%d%d", &pScmPiece->iX, &pScmPiece->iY ) )

        {

            if( ( pScmPiece->iX < 0 || pScmPiece->iX > ORDEX-1 ) || ( pScmPiece->iY < 0 || pScmPiece->iY > ORDEX-1 ) )

                printf( "坐标错误!请重新输入：");

            else if( qipan[pScmPiece->iX][pScmPiece->iY] )

                printf( "该位置已有子!请重新输入：");

            else break;

        }

    }

    qipan[pScmPiece->iX][pScmPiece->iY] = pScmPiece->iFlag;

    --g_iPieceLen;

    system("cls");

    draw();

    if( iGameFlag == 0 )

        printf("电脑下在%d %d\n", pScmPiece->iX, pScmPiece->iY );

}



void start()

{

    int choice;

    //ScmPiece ScmGameTemp1, ScmGameTemp2;/* a1 b1储存玩家上手坐标 c1 d1储存电脑上手坐标 */

    printf("\t╔═══════════════════════════════╗\n");

    printf("\t║                                                               ║\n");

    printf("\t║      欢迎使用五子棋对战程序     祝您玩的愉快挑战无极限       ║\n");

    printf("\t║                                                              ║\n");

    printf("\t║                 ._______________________.                    ║\n"); 

    printf("\t║                 | _____________________ |                    ║\n");

    printf("\t║                 | I                   I |                    ║\n");

    printf("\t║                 | I                   I |                    ║\n");

    printf("\t║                 | I     五 子 棋      I |                    ║\n");

    printf("\t║                 | I                   I |                    ║\n");

     printf("\t║                 | I___________________I |                    ║\n");

    printf("\t║                 !_______________________!                    ║\n");

     printf("\t║                     ._[__________]_.                         ║\n");

    printf("\t║                 .___|_______________|___.                    ║\n");

    printf("\t║                  |::: ____             |                     ║\n"); 

    printf("\t║                  |    ~~~~ [CD-ROM]    |                     ║\n");

    printf("\t║                  !_____________________!                     ║\n");

    printf("\t║                                                              ║\n");

    printf("\t║                                                              ║\n");

    printf("\t║         寒 星 溪 月 疏 星 首，花 残 二 月 并 白 莲。         ║\n");

    printf("\t║         雨 月 金 星 追 黑 玉，松 丘 新 宵 瑞 山 腥。         ║\n");

    printf("\t║         星 月 长 峡 恒 水 流，白 莲 垂 俏 云 浦 岚。         ║\n");

    printf("\t║         黑 玉 银 月 倚 明 星，斜 月 明 月 堪 称 朋。         ║\n");

    printf("\t║         二 十 六 局 先 弃 二，直 指 游 星 斜 彗 星。         ║\n");

    printf("\t║                                                              ║\n");

    printf("\t║                                                              ║\n");

    printf("\t║          1.人机对战                 2.人人对战               ║\n");

    printf("\t║                                                              ║\n");

    printf("\t╚═══════════════════════════════╝\n");

    printf("\t\t\t请输入1或2：");

    while( scanf( "%d", &choice ), choice!=1 && choice!=2 )

        printf( "输入错误，请重新输入：" );

    system("cls"); 

    if( choice == 1 )

    {                                    /* 人机模式 */

        printf("\t\t\t欢迎使用五子棋人机对战！\n\t\t下子请输入坐标（如13 6）中间以空格分隔。\n\n\n"); 

        draw();

        printf("先下请按1，后下请按2：");

        while( scanf( "%d", &choice ), choice!=1 && choice!=2 )

            printf( "输入错 误，请重新输入：" );

        if( choice == 2 )

            MakePiece( &g_ScmGame2, 0 );

        choice = 1;

    }

    else

    {

        printf("欢迎使用五子棋人人对战！下子请输入坐标(如13 6)。悔棋请输入15 15。    \n\n\n"); 

        draw();

    }

    while( g_iPieceLen )

    {

        MakePiece( &g_ScmGame1, 1 );

        if( Victory( &g_ScmGame1 ) )

        {

            printf("电脑神马的都是浮云!!!\n");

            return;

        }    /* 玩家赢 */

        if( choice == 1 )

        {

            AI( &g_ScmGame2.iY, &g_ScmGame2.iX );

            MakePiece( &g_ScmGame2, 0 );

            if( Victory( &g_ScmGame2 ) )

            {               /* 电脑赢 */

                int iChoice;

                printf("要悔棋吗？请输入y或n：");

STARTFLAGE:

                setbuf( stdin, NULL );

                scanf( "%c", &iChoice );

                switch( (char)iChoice ){

                case 'y':

                case 'Y':

                    g_iPieceLen += 2;

                    qipan[g_ScmGame2.iX][g_ScmGame2.iY] = SPA;

                    qipan[g_ScmGame1.iX][g_ScmGame1.iY] = SPA;

                    system("cls"); draw();

                    break;

                case 'n':

                case 'N':

                    printf( "下不过电脑很正常，请不要灰心!!!\n" );

                    return;

                default:

                    printf("输入错误，请重新输入：");

                    goto STARTFLAGE;

                }

            }

        }

        else

        {

            MakePiece( &g_ScmGame2, 1 );

            if( Victory( &g_ScmGame2 ) )

            {

                printf("电脑神马的都是浮云!!!\n");

                return;

            }

        }

    }

    printf("和局\n");

}

void draw() /* 画棋盘 */

{

    int i,j;

    char p[15][15][4];

    for(j=0;j<15;j++)

        for(i=0;i<15;i++){

            if(qipan[j][i]==SPA) strcpy(p[j][i],"  \0");

            if(qipan[j][i]==MAN) strcpy(p[j][i],"●\0");

            if(qipan[j][i]==COM) strcpy(p[j][i],"◎\0");

        }

    printf("         0   1   2   3   4   5   6   7   8   9   10  11  12  13  14  \n"); 

    printf("       ┌─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┐\n");

    for(i=0,j=0;i<14;i++,j++){

    printf("     %2d│%s│%s│%s│%s│%s│%s│%s│%s│%s│%s│%s│%s│%s│%s│%s│%d\n",j,p[i][0],p[i][1],p[i][2],p[i][3],p[i][4],p[i][5],p[i][6],p[i][7],p[i][8],p[i][9],p[i][10],p[i][11],p[i][12],p[i][13],p[i][14],j);

    printf("       ├─┼─┼─┼─┼─┼─┼─┼─┼─┼─┼─┼─┼─┼─┼─┤\n");

    }

    printf("     14│%s│%s│%s│%s│%s│%s│%s│%s│%s│%s│%s│%s│%s│%s│%s│0\n",p[14][0],p[14][1],p[14][2],p[14][3],p[14][4],p[14][5],p[14][6],p[14][7],p[14][8],p[14][9],p[14][10],p[14][11],p[14][12],p[14][13],p[14][14]);

    printf("       └─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┘\n");

    printf("         0   1   2   3   4   5   6   7   8   9   10  11  12  13  14  \n");

}

static int DirectionValue( int * piX, int * piY, int iDirection ){

    switch( iDirection ){

    case 0:

        --*piX;

        break;

    case 4:

        ++*piX;

        break;

    case 1:

        --*piY;

        break;

    case 5:

        ++*piY;

        break;

    case 2:

        --*piX; --*piY;

        break;

    case 6:

        ++*piX; ++*piY;

        break;

    case 3:

        --*piX; ++*piY;

        break;

    case 7:

         ++*piX; --*piY;

        break;

    }

    if( (*piX >= 0 && *piX <= ORDEX-1) && (*piY >= 0 && *piY <= ORDEX-1) )

        return 1;

    else return 0;

}

static int SubVictory( ScmPiece * pScmPiece, int iDirection ){

    int iX = pScmPiece->iX;

    int iY = pScmPiece->iY;

    int iPieceCount = 1;

    while( DirectionValue( &iX, &iY, iDirection ) && qipan[iX][iY] ==  pScmPiece->iFlag )

        ++iPieceCount;

    iX = pScmPiece->iX;

    iY = pScmPiece->iY;

    while( DirectionValue( &iX, &iY, iDirection+4 ) && qipan[iX][iY] ==  pScmPiece->iFlag )

        ++iPieceCount;

    return iPieceCount;

}

int Victory( ScmPiece * pScmPiece )      /* 判断胜利 p q为判断点坐标，胜利返回1，否则返回0 */

{

    int iDirection = 0;

    while( iDirection < 4 )

        if( SubVictory( pScmPiece, iDirection++ ) >= 5 )

            return 1;

    return 0;

}

void AI(int *p,int *q)           /* 电脑下子 *p *q返回下子坐标 */

{

    int i,j,k,max=0,I,J;        /* I J为下点坐标 */

    for(j=0;j<15;j++)

        for(i=0;i<15;i++)

            if(qipan[j][i]==SPA){      /* 历遍棋盘，遇到空点则计算价值，取最大价值点下子。 */

                k=value(i,j);

                if(k>=max) { I=i; J=j; max=k; }

            }

    *p=I; *q=J;

}

/*计算空点p,q的价值，返回价值为k
空点p,q 在8个方向(4条线) 的棋型的价值之和，就是空点p,q的价值 


一个棋型价值，每条线上的价值，相对两个方向通过每条线上 

*/ 

int value(int p,int q) /* 计算空点p q的价值 以k返回 */ 

{

    int n=1,k=0,k1,k2,K1,K2,X1,Y1,Z1,X2,Y2,Z2,temp;  

    int a[2][4][4]={40,400,3000,10000,6,10,600,10000,20,120,200,0,6,10,500,0,30,300,2500,5000,2,8,300,8000,26,160,0,0,4,20,300,0};

           /* 数组a中储存己方和对方共32种棋型的值  己方0对方1    活0冲1空活2空冲3    子数0-3（0表示1个子，3表示4个子） */

    while(n!=5){
        
		/* k1,k2为2个反方向的棋型编号 */
        k1=qixing(n,p,q);
        
		k2=qixing(n+4,p,q);
        
		n=n+1;



        if(k1>k2) { temp=k1; k1=k2; k2=temp; }  /* 使编号小的为k1,大的为k2 */

        K1=k1; K2=k2;       /* K1 K2储存k1 k2的编号 */


        Z1=k1%10;
		Z2=k2%10; 
		
		k1/=10; 
		k2/=10; 
		
		Y1=k1%10; 
		Y2=k2%10; 
		
		k1/=10; 
		k2/=10; 
		
		X1=k1%10; 
		X2=k2%10;

            /* X Y Z分别表示 己方0对方1    活0冲1空活2空冲3    子数0-3（0表示1个子，3表示4个子） */
            

        if(K1==-1) 
		{ 
		  if(K2<0)
		  { 
		   k+=0;
		   continue; 
		   } 
		   else
		      k+=a[X2][Y2][Z2]+5;
			 
		   continue;
	    };    /* 空棋型and其他 */
	    

        if(K1==-2) { if(K2<0) { k+=0; continue; } else k+=a[X2][Y2][Z2]/2; continue; };       /* 边界冲棋型and其他 */ 

        if(K1==-3) { if(K2<0) { k+=0; continue; } else k+=a[X2][Y2][Z2]/3; continue; };    /* 边界空冲棋型and其他 */ 
        
        

        if(((K1>-1&&K1<4)&&((K2>-1&&K2<4)||(K2>9&&K2<14)))||((K1>99&&K1<104)&&((K2>99&&K2<104)||(K2>109&&K2<114)))){

            /* 己活己活 己活己冲 对活对活 对活对冲 的棋型赋值*/

            if(Z1+Z2>=2) { k+=a[X2][Y2][3]; continue; }

            else { k+=a[X2][Y2][Z1+Z2+1]; continue; }

        }

        if(((K1>9&&K1<14)&&(K2>9&&K2<14))||((K1>109&&K1<114)&&(K2>109&&K2<114))){

            /* 己冲己冲 对冲对冲 的棋型赋值*/

            if(Z1+Z2>=2) { k+=10000; continue; }

            else { k+=0; continue; }

        }

        if(((K1>-1&&K1<4)&&((K2>99&&K2<104)||(K2>109&&K2<114)))||((K1>9&&K1<14)&&((K2>99&&K2<104)||(K2>109&&K2<114)))){

            /* 己活对活 己活对冲 己冲对活 己冲对冲 的棋型赋值*/

            if(Z1==3||Z2==3) { k+=10000; continue; }

            else { k+=a[X2][Y2][Z2]+a[X1][Y1][Z1]/4; continue; } 

        }

        else  { k+=a[X1][Y1][Z1]+a[X2][Y2][Z2]; continue;  }    /* 其他棋型的赋值 */

    }

    return k;

}


/* 棋型号，是判断一个位置棋的价值的分类方法 */ 

/*棋型：
000，001，002，003   //己活，己方在该位置上有可能下成5个子活 
010，011，012，013   //己冲  
020，021，022，023   //已空活 
030，031，032，033   //已空冲 
 
100，101，102，103
110，111，112，113
120，121，122，123
130，131，132，133		 

*/



int qixing(int n,int p,int q)            /* 返回空点p q在n方向上的棋型号 n为1-8方向 从右顺时针开始数 */ 

{

    int k,m=0;  /* 棋型号注解:  己活000-003 己冲010-013 对活100-103 对冲110-113 己空活020-023 己空冲030-033 对空活120-123 对空冲130-133 空-1 边界冲-2 边界空冲-3*/

    yiwei(n,&p,&q);

    if(p<0||p>14||q<0||q>14) k=-2;                                      /* 边界冲棋型 */

    switch(qipan[q][p]){

        case COM:{

                    m++; yiwei(n,&p,&q);

                    if(p<0||p>14||q<0||q>14) { k=m+9; return k; }/*移位一次如果就超过边界，就是冲1棋型，该棋型为010*/ 

                    while(qipan[q][p]==COM) 
					{ 
					  m++; 
					  yiwei(n,&p,&q);
					  if(p<0||p>14||q<0||q>14) 
					  { k=m+9; return k; 
					  } 
					}

                    if(qipan[q][p]==SPA) k=m-1;                         /* 己方活棋型 */

                    else k=m+9;                                         /* 己方冲棋型 */

                 }break;

        case MAN:{

                    m++; yiwei(n,&p,&q);

                    if(p<0||p>14||q<0||q>14) { k=m+109; return k; }

                    while(qipan[q][p]==MAN) { m++; yiwei(n,&p,&q); if(p<0||p>14||q<0||q>14) { k=m+109; return k; } }

                    if(qipan[q][p]==SPA) k=m+99;                         /* 对方活棋型 */

                    else k=m+109;                                        /* 对方冲棋型 */

                 }break;

        case SPA:{

                    yiwei(n,&p,&q);

                    if(p<0||p>14||q<0||q>14) { k=-3; return k; }         /* 边界空冲棋型 */

                    switch(qipan[q][p]){

                    case COM:{

                                m++; yiwei(n,&p,&q);

                                if(p<0||p>14||q<0||q>14) { k=m+29; return k; }

                                while(qipan[q][p]==COM) { m++; yiwei(n,&p,&q); if(p<0||p>14||q<0||q>14) { k=m+29; return k; } }

                                if(qipan[q][p]==SPA) k=m+19;                      /* 己方空活棋型 */

                                else k=m+29;                                      /* 己方空冲棋型 */

                             }break;

                    case MAN:{

                                m++; yiwei(n,&p,&q);

                                if(p<0||p>14||q<0||q>14) { k=m+129; return k; }

                                while(qipan[q][p]==MAN) { m++; yiwei(n,&p,&q); if(p<0||p>14||q<0||q>14) { k=m+129; return k; } }           

                                if(qipan[q][p]==SPA) k=m+119;                     /* 对方空活棋型 */

                                else k=m+129;                                     /* 对方空冲棋型 */ 

                             }break;

                    case SPA: k=-1; break;                                         /* 空棋型 */

                    }

                }break;

    }

    return k;

}



/*给定1-8方向值，算8个方向的对应的下一个坐标值，值放在i,j的指针中返回*/
 
void yiwei(int n,int *i,int *j)        /* 在n方向上对坐标 i j 移位 n为1-8方向 从右顺时针开始数 */

{

    switch(n){

    case 1: *i+=1; break;

    case 2: *i+=1; *j+=1; break;

    case 3: *j+=1; break;

    case 4: *i-=1; *j+=1; break;

    case 5: *i-=1; break;

    case 6: *i-=1; *j-=1; break;

    case 7: *j-=1; break;

    case 8: *i+=1; *j-=1; break;

    }

}
