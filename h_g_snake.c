#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

    int i=0,j,x=2,y=5,e=1,z=0,b[80000],n[80000],d[80000],q=0,w=0,r=0,f=0,s1,s2,o=0,t1,t2,j1;
    char m='6',mat[50][20],m1;
    FILE *ptr;

main()
{
    struct data
    {
        char name[20];
         int score;
    }s[100];

ptr=fopen("amit.txt","r");

fseek (ptr, 0, SEEK_SET);
i=0;
while (fscanf (ptr,"%s %d",s[i].name,&s[i].score)!=EOF)
{
i++;
}
j1=i;


for(;i<100;i++)
    s[i].score=0;

fclose(ptr);

   system("cls");
 //  printf("******************************************%d",j1);

     time_t s9;
     srand((unsigned) time(&s9));

         for(i=0;i<50;i++)
{
     mat[i][0]='v';
     mat[i][19]='^';
}

    for(j=1;j<19;j++)
  {
      mat[0][j]='>';
      mat[49][j]='<';
  }


if(f==0)
{
    mat[2][5]=257;


    mat[6][10]='0';
     printf("\n\n\n\n\n\n\n\t\t\tpress key any to start the game..");
          printf("\n\n\t\t\tINSTRUCTIONS:-");
               printf("\n\t\t\t\tUse 2,4,6,8 key of numpad.");

    getch();
     system("cls");

}

mover();

f++;

  if(o==0)
    main();

    else
    {
        printf("your game is over :(");
        getch();
        for(i=0;i<=j1;i++)
        {
            if(e<=s[i].score)
                continue;
            else
                break;
        }

        for(j=j1;j>=i;j--)
        {
            strcpy(s[j+1].name,s[j].name);
            s[j+1].score=s[j].score;
        }



        printf("\nenter your name:");
        gets(s[i].name);
        s[i].score=e;


        ptr=fopen("amit.txt","w");

              for(j=0;j<=j1;j++)
        fprintf(ptr,"%s %d\n",s[j].name,s[j].score);

        fclose(ptr);

        system("cls");
        printf("\t\t\t\t LEADERBOARD\n\n");

    for(j=0;j<=j1;j++)
        printf("%d. %s %d\n",j+1,s[j].name,s[j].score);


        printf("\n\n  credits: amit jain \n\n\n\n\ ",e);
        getch();
    }
}

void mover(void)
{
    do
        {
            system("cls");
                   fflush(stdin);

               for(j=0;j<20;j++)
                {
                        for(i=0;i<50;i++)
                        printf("%c",mat[i][j]);

                        printf("\n");
                }
                for(t2=0;t2<2*(250000-e*40000);t2++)
                for(t1=0;t1<100;t1++);

    if(m=='6')
         {
             if(mat[x+1][y]=='0')
             {
                e++;
                egg();
             }

              else if (mat[x+1][y]=='<'||mat[x+1][y]=='*')
                    o=1;

             if(o==0)
             {

                mat[++x][y]=257;
             del(x-1,y,e);
            }
            else
                break;
         }

    else if(m=='4')
    {
         if(mat[x-1][y]=='0')
             {
                e++;
                egg();
             }

              else if (mat[x-1][y]=='>'||mat[x-1][y]=='*')
                    o=1;

         if(o==0)
             {
            mat[--x][y]=257;
            del(x+1,y,e);
            }
            else
                    break;
    }

    else if(m=='2')
        {
             if(mat[x][y+1]=='0')
                 {
                e++;
                egg();
             }

              else if (mat[x][y+1]=='^'||mat[x][y+1]=='*')
                    o=1;

 if(o==0)
             {
            mat[x][++y]=257;
            del(x,y-1,e);
            }

            else
                break;


       }

    else if(m=='8')
    {
         if(mat[x][y-1]=='0')
             {
                e++;
                egg();
             }

              else if (mat[x][y-1]=='v'||mat[x][y-1]=='*')
                    o=1;

         if(o==0)
             {
            mat[x][--y]=257;
            del(x,y+1,e);
            }

            else
                break;

   }


        }while(!kbhit());

          m=getch();

}

void del(int x,int y,int e)
{
    d[q++]=e;

    b[w++]=x;
    n[r++]=y;

 z=q-1;

delet();
}

void delet(void)
{
    for(;z>=0;z--)
    {
        if(d[z]>0)
         mat[b[z]][n[z]]='*';

        d[z]--;

        if(d[z]==0)
        {
            mat[b[z]][n[z]]=' ';
        }
    }
}


void egg(void)
{
      while(1){
        s1=rand()%29;
        s2=rand()%19;

    if(s1<2)
        continue;
else if(s1>48)
        continue;
else if(s2<2)
        continue;
else if(s2>=18)
        continue;

     else if(mat[s1][s2]=='*')
     continue;

 else if(mat[s1][s2]==257)
     continue;

    else
    {mat[s1][s2]='0';
        break;}}

}





