# include<stdio.h>  //�����������ͷ�ļ�

# include<string.h> //�ַ�����ĺ��������ͷ�ļ�

# include<stdlib.h> //stdlib ͷ�ļ���standard library��׼��ͷ�ļ�stdlib ͷ�ļ��������C��C++���Ե���õ�ϵͳ������ ,�ļ�������C���Ա�׼�⺯���Ķ���.

# define SPA 0       //��C��C++����Դ������������һ����ʶ������ʾһ���ַ�������Ϊ���ꡱ�� ��define��Ϊ�궨�����

# define MAN 1

# define COM 2

    /* ��λ����Ϊ0 ������µ�λ����Ϊ1 �������µ�λ����Ϊ2 */

#define ORDEX 15

int qipan[ORDEX][ORDEX];  //�Լ������Ԥ���������Զ�ά������ʽ��������  /* 15*15������ */



typedef struct//typedef����������C�ж���һ���ṹ������

{

    int iFlag;

    int iX, iY;

}ScmPiece;


int g_iPieceLen;

ScmPiece g_ScmGame1, g_ScmGame2;





void start();  /* �������Ҫ���ƺ��� */

void draw();   /* ������ */

int Victory( ScmPiece * pScmPiece );  /* �ж�ʤ�� p qΪ�жϵ����� */

void AI(int *p,int *q);     /* �������� p q������������ */

int value(int p,int q);     /* ����յ�p q�ļ�ֵ */

int qixing(int n,int p,int q);    /* ���ؿյ�p q��n�����ϵ����� nΪ1-8���� ����˳ʱ�뿪ʼ�� */

void yiwei(int n,int *i,int *j);   /* ��n�����϶����� i j ��λ nΪ1-8���� ����˳ʱ�뿪ʼ��  */



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

        printf("��Ҫ����һ����?����y��n��"); getchar(); scanf("%c",&k);

        while(k!='y'&&k!='n'){ printf("�������,����������\n"); scanf("%c",&k); }

        system("cls");

    }while(k=='y');

    printf("ллʹ��!\n");

}

void MakePiece( ScmPiece * pScmPiece, int iGameFlag ){

    if( iGameFlag )

    {

        printf("�����ӣ�");

        while( scanf( "%d%d", &pScmPiece->iX, &pScmPiece->iY ) )

        {

            if( ( pScmPiece->iX < 0 || pScmPiece->iX > ORDEX-1 ) || ( pScmPiece->iY < 0 || pScmPiece->iY > ORDEX-1 ) )

                printf( "�������!���������룺");

            else if( qipan[pScmPiece->iX][pScmPiece->iY] )

                printf( "��λ��������!���������룺");

            else break;

        }

    }

    qipan[pScmPiece->iX][pScmPiece->iY] = pScmPiece->iFlag;

    --g_iPieceLen;

    system("cls");

    draw();

    if( iGameFlag == 0 )

        printf("��������%d %d\n", pScmPiece->iX, pScmPiece->iY );

}



void start()

{

    int choice;

    //ScmPiece ScmGameTemp1, ScmGameTemp2;/* a1 b1��������������� c1 d1��������������� */

    printf("\t�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n");

    printf("\t�U                                                               �U\n");

    printf("\t�U      ��ӭʹ���������ս����     ף����������ս�޼���       �U\n");

    printf("\t�U                                                              �U\n");

    printf("\t�U                 ._______________________.                    �U\n"); 

    printf("\t�U                 | _____________________ |                    �U\n");

    printf("\t�U                 | I                   I |                    �U\n");

    printf("\t�U                 | I                   I |                    �U\n");

    printf("\t�U                 | I     �� �� ��      I |                    �U\n");

    printf("\t�U                 | I                   I |                    �U\n");

     printf("\t�U                 | I___________________I |                    �U\n");

    printf("\t�U                 !_______________________!                    �U\n");

     printf("\t�U                     ._[__________]_.                         �U\n");

    printf("\t�U                 .___|_______________|___.                    �U\n");

    printf("\t�U                  |::: ____             |                     �U\n"); 

    printf("\t�U                  |    ~~~~ [CD-ROM]    |                     �U\n");

    printf("\t�U                  !_____________________!                     �U\n");

    printf("\t�U                                                              �U\n");

    printf("\t�U                                                              �U\n");

    printf("\t�U         �� �� Ϫ �� �� �� �ף��� �� �� �� �� �� ����         �U\n");

    printf("\t�U         �� �� �� �� ׷ �� ���� �� �� �� �� ɽ �ȡ�         �U\n");

    printf("\t�U         �� �� �� Ͽ �� ˮ ������ �� �� �� �� �� ᰡ�         �U\n");

    printf("\t�U         �� �� �� �� �� �� �ǣ�б �� �� �� �� �� ��         �U\n");

    printf("\t�U         �� ʮ �� �� �� �� ����ֱ ָ �� �� б �� �ǡ�         �U\n");

    printf("\t�U                                                              �U\n");

    printf("\t�U                                                              �U\n");

    printf("\t�U          1.�˻���ս                 2.���˶�ս               �U\n");

    printf("\t�U                                                              �U\n");

    printf("\t�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");

    printf("\t\t\t������1��2��");

    while( scanf( "%d", &choice ), choice!=1 && choice!=2 )

        printf( "����������������룺" );

    system("cls"); 

    if( choice == 1 )

    {                                    /* �˻�ģʽ */

        printf("\t\t\t��ӭʹ���������˻���ս��\n\t\t�������������꣨��13 6���м��Կո�ָ���\n\n\n"); 

        draw();

        printf("�����밴1�������밴2��");

        while( scanf( "%d", &choice ), choice!=1 && choice!=2 )

            printf( "����� �����������룺" );

        if( choice == 2 )

            MakePiece( &g_ScmGame2, 0 );

        choice = 1;

    }

    else

    {

        printf("��ӭʹ�����������˶�ս����������������(��13 6)������������15 15��    \n\n\n"); 

        draw();

    }

    while( g_iPieceLen )

    {

        MakePiece( &g_ScmGame1, 1 );

        if( Victory( &g_ScmGame1 ) )

        {

            printf("��������Ķ��Ǹ���!!!\n");

            return;

        }    /* ���Ӯ */

        if( choice == 1 )

        {

            AI( &g_ScmGame2.iY, &g_ScmGame2.iX );

            MakePiece( &g_ScmGame2, 0 );

            if( Victory( &g_ScmGame2 ) )

            {               /* ����Ӯ */

                int iChoice;

                printf("Ҫ������������y��n��");

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

                    printf( "�²������Ժ��������벻Ҫ����!!!\n" );

                    return;

                default:

                    printf("����������������룺");

                    goto STARTFLAGE;

                }

            }

        }

        else

        {

            MakePiece( &g_ScmGame2, 1 );

            if( Victory( &g_ScmGame2 ) )

            {

                printf("��������Ķ��Ǹ���!!!\n");

                return;

            }

        }

    }

    printf("�;�\n");

}

void draw() /* ������ */

{

    int i,j;

    char p[15][15][4];

    for(j=0;j<15;j++)

        for(i=0;i<15;i++){

            if(qipan[j][i]==SPA) strcpy(p[j][i],"  \0");

            if(qipan[j][i]==MAN) strcpy(p[j][i],"��\0");

            if(qipan[j][i]==COM) strcpy(p[j][i],"��\0");

        }

    printf("         0   1   2   3   4   5   6   7   8   9   10  11  12  13  14  \n"); 

    printf("       �����Щ��Щ��Щ��Щ��Щ��Щ��Щ��Щ��Щ��Щ��Щ��Щ��Щ��Щ���\n");

    for(i=0,j=0;i<14;i++,j++){

    printf("     %2d��%s��%s��%s��%s��%s��%s��%s��%s��%s��%s��%s��%s��%s��%s��%s��%d\n",j,p[i][0],p[i][1],p[i][2],p[i][3],p[i][4],p[i][5],p[i][6],p[i][7],p[i][8],p[i][9],p[i][10],p[i][11],p[i][12],p[i][13],p[i][14],j);

    printf("       �����੤�੤�੤�੤�੤�੤�੤�੤�੤�੤�੤�੤�੤�੤��\n");

    }

    printf("     14��%s��%s��%s��%s��%s��%s��%s��%s��%s��%s��%s��%s��%s��%s��%s��0\n",p[14][0],p[14][1],p[14][2],p[14][3],p[14][4],p[14][5],p[14][6],p[14][7],p[14][8],p[14][9],p[14][10],p[14][11],p[14][12],p[14][13],p[14][14]);

    printf("       �����ة��ة��ة��ة��ة��ة��ة��ة��ة��ة��ة��ة��ة��ة���\n");

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

int Victory( ScmPiece * pScmPiece )      /* �ж�ʤ�� p qΪ�жϵ����꣬ʤ������1�����򷵻�0 */

{

    int iDirection = 0;

    while( iDirection < 4 )

        if( SubVictory( pScmPiece, iDirection++ ) >= 5 )

            return 1;

    return 0;

}

void AI(int *p,int *q)           /* �������� *p *q������������ */

{

    int i,j,k,max=0,I,J;        /* I JΪ�µ����� */

    for(j=0;j<15;j++)

        for(i=0;i<15;i++)

            if(qipan[j][i]==SPA){      /* �������̣������յ�������ֵ��ȡ����ֵ�����ӡ� */

                k=value(i,j);

                if(k>=max) { I=i; J=j; max=k; }

            }

    *p=I; *q=J;

}

/*����յ�p,q�ļ�ֵ�����ؼ�ֵΪk
�յ�p,q ��8������(4����) �����͵ļ�ֵ֮�ͣ����ǿյ�p,q�ļ�ֵ 


һ�����ͼ�ֵ��ÿ�����ϵļ�ֵ�������������ͨ��ÿ������ 

*/ 

int value(int p,int q) /* ����յ�p q�ļ�ֵ ��k���� */ 

{

    int n=1,k=0,k1,k2,K1,K2,X1,Y1,Z1,X2,Y2,Z2,temp;  

    int a[2][4][4]={40,400,3000,10000,6,10,600,10000,20,120,200,0,6,10,500,0,30,300,2500,5000,2,8,300,8000,26,160,0,0,4,20,300,0};

           /* ����a�д��漺���ͶԷ���32�����͵�ֵ  ����0�Է�1    ��0��1�ջ�2�ճ�3    ����0-3��0��ʾ1���ӣ�3��ʾ4���ӣ� */

    while(n!=5){
        
		/* k1,k2Ϊ2������������ͱ�� */
        k1=qixing(n,p,q);
        
		k2=qixing(n+4,p,q);
        
		n=n+1;



        if(k1>k2) { temp=k1; k1=k2; k2=temp; }  /* ʹ���С��Ϊk1,���Ϊk2 */

        K1=k1; K2=k2;       /* K1 K2����k1 k2�ı�� */


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

            /* X Y Z�ֱ��ʾ ����0�Է�1    ��0��1�ջ�2�ճ�3    ����0-3��0��ʾ1���ӣ�3��ʾ4���ӣ� */
            

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
	    };    /* ������and���� */
	    

        if(K1==-2) { if(K2<0) { k+=0; continue; } else k+=a[X2][Y2][Z2]/2; continue; };       /* �߽������and���� */ 

        if(K1==-3) { if(K2<0) { k+=0; continue; } else k+=a[X2][Y2][Z2]/3; continue; };    /* �߽�ճ�����and���� */ 
        
        

        if(((K1>-1&&K1<4)&&((K2>-1&&K2<4)||(K2>9&&K2<14)))||((K1>99&&K1<104)&&((K2>99&&K2<104)||(K2>109&&K2<114)))){

            /* ����� ����� �Ի�Ի� �Ի�Գ� �����͸�ֵ*/

            if(Z1+Z2>=2) { k+=a[X2][Y2][3]; continue; }

            else { k+=a[X2][Y2][Z1+Z2+1]; continue; }

        }

        if(((K1>9&&K1<14)&&(K2>9&&K2<14))||((K1>109&&K1<114)&&(K2>109&&K2<114))){

            /* ���强�� �Գ�Գ� �����͸�ֵ*/

            if(Z1+Z2>=2) { k+=10000; continue; }

            else { k+=0; continue; }

        }

        if(((K1>-1&&K1<4)&&((K2>99&&K2<104)||(K2>109&&K2<114)))||((K1>9&&K1<14)&&((K2>99&&K2<104)||(K2>109&&K2<114)))){

            /* ����Ի� ����Գ� ����Ի� ����Գ� �����͸�ֵ*/

            if(Z1==3||Z2==3) { k+=10000; continue; }

            else { k+=a[X2][Y2][Z2]+a[X1][Y1][Z1]/4; continue; } 

        }

        else  { k+=a[X1][Y1][Z1]+a[X2][Y2][Z2]; continue;  }    /* �������͵ĸ�ֵ */

    }

    return k;

}


/* ���ͺţ����ж�һ��λ����ļ�ֵ�ķ��෽�� */ 

/*���ͣ�
000��001��002��003   //��������ڸ�λ�����п����³�5���ӻ� 
010��011��012��013   //����  
020��021��022��023   //�ѿջ� 
030��031��032��033   //�ѿճ� 
 
100��101��102��103
110��111��112��113
120��121��122��123
130��131��132��133		 

*/



int qixing(int n,int p,int q)            /* ���ؿյ�p q��n�����ϵ����ͺ� nΪ1-8���� ����˳ʱ�뿪ʼ�� */ 

{

    int k,m=0;  /* ���ͺ�ע��:  ����000-003 ����010-013 �Ի�100-103 �Գ�110-113 ���ջ�020-023 ���ճ�030-033 �Կջ�120-123 �Կճ�130-133 ��-1 �߽��-2 �߽�ճ�-3*/

    yiwei(n,&p,&q);

    if(p<0||p>14||q<0||q>14) k=-2;                                      /* �߽������ */

    switch(qipan[q][p]){

        case COM:{

                    m++; yiwei(n,&p,&q);

                    if(p<0||p>14||q<0||q>14) { k=m+9; return k; }/*��λһ������ͳ����߽磬���ǳ�1���ͣ�������Ϊ010*/ 

                    while(qipan[q][p]==COM) 
					{ 
					  m++; 
					  yiwei(n,&p,&q);
					  if(p<0||p>14||q<0||q>14) 
					  { k=m+9; return k; 
					  } 
					}

                    if(qipan[q][p]==SPA) k=m-1;                         /* ���������� */

                    else k=m+9;                                         /* ���������� */

                 }break;

        case MAN:{

                    m++; yiwei(n,&p,&q);

                    if(p<0||p>14||q<0||q>14) { k=m+109; return k; }

                    while(qipan[q][p]==MAN) { m++; yiwei(n,&p,&q); if(p<0||p>14||q<0||q>14) { k=m+109; return k; } }

                    if(qipan[q][p]==SPA) k=m+99;                         /* �Է������� */

                    else k=m+109;                                        /* �Է������� */

                 }break;

        case SPA:{

                    yiwei(n,&p,&q);

                    if(p<0||p>14||q<0||q>14) { k=-3; return k; }         /* �߽�ճ����� */

                    switch(qipan[q][p]){

                    case COM:{

                                m++; yiwei(n,&p,&q);

                                if(p<0||p>14||q<0||q>14) { k=m+29; return k; }

                                while(qipan[q][p]==COM) { m++; yiwei(n,&p,&q); if(p<0||p>14||q<0||q>14) { k=m+29; return k; } }

                                if(qipan[q][p]==SPA) k=m+19;                      /* �����ջ����� */

                                else k=m+29;                                      /* �����ճ����� */

                             }break;

                    case MAN:{

                                m++; yiwei(n,&p,&q);

                                if(p<0||p>14||q<0||q>14) { k=m+129; return k; }

                                while(qipan[q][p]==MAN) { m++; yiwei(n,&p,&q); if(p<0||p>14||q<0||q>14) { k=m+129; return k; } }           

                                if(qipan[q][p]==SPA) k=m+119;                     /* �Է��ջ����� */

                                else k=m+129;                                     /* �Է��ճ����� */ 

                             }break;

                    case SPA: k=-1; break;                                         /* ������ */

                    }

                }break;

    }

    return k;

}



/*����1-8����ֵ����8������Ķ�Ӧ����һ������ֵ��ֵ����i,j��ָ���з���*/
 
void yiwei(int n,int *i,int *j)        /* ��n�����϶����� i j ��λ nΪ1-8���� ����˳ʱ�뿪ʼ�� */

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
