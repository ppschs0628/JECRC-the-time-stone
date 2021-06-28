#include<stdio.h>
#include<windows.h>
#ifdef __unix__
# include <unistd.h>
#elif defined _WIN32
# include <windows.h>
#define sleep(x) Sleep(1000 * (x))
#endif


int main()
{
    system("Color 0A");
    fmain();
    printf("On planet Vormir soul stone is located\n");
    pause1();
    pause2();
    pause3();
    pause4();
    pause5();
    pause6();
    pause7();
}

int fmain()
{
    FILE *fpmain;
    fpmain=fopen("RedSkull.dat","wb");
    char str[]="You";
    if(fpmain==NULL)
    {
        printf("Re-run the program again");
        exit(1);
    }
    fwrite(str,1,sizeof(str),fpmain);
    fclose(fpmain);
}


int pause1()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("*\n");
        sleep(2);
    }
}

int pause2()
{
    int i;
    printf("File is processing");
    for(i=0;i<10;i++)
    {
        printf("..");
        sleep(0.2);
    }
    f1();
    printf("\n/-/-/-/-/-/-/-/-/-/-/-/-/");
    printf("\nIn order to get soul stone you have to sacrifice someone you love\n");
}

int f1()
{
    char data[]="done it";
    FILE *fp1;
    fp1=fopen("RedSkull.dat","ab");
    if(fp1==NULL)
    {
        printf("File cannot open");
        exit(1);
    }
    fwrite(data,1,sizeof(data),fp1);
    fclose(fp1);
}

int pause3()
{
    pause1();
    printf("Search for soul in everything\n");
}

int f4()
{
    char data[]="jecrc vormir\n";
    FILE *fp4;
    fp4=fopen("RedSkull.dat","ab");
    if(fp4==NULL)
    {
        printf("File cannot open");
        exit(1);
    }
    fwrite(data,1,sizeof(data),fp4);
    fclose(fp4);
    f5();
}

int pause4()
{
    int i;
    for(i=0;i<3;i++)
        printf("*\n");
    sleep(3);
    for(i=0;i<4;i++)
    {
        printf("*\n");
        sleep(0.6);
    }
    f2();
    printf("Time is what we want most but");
    for(i=0;i<10;i++)
    {
        printf(".");
        sleep(0.5);
    }
    printf("\nwhat we use worst\n");
}

int f5()
{
    char data[]="see you there.";
    FILE *fp5;
    fp5=fopen("RedSkull.dat","ab");
    if(fp5==NULL)
    {
        printf("File cannot open");
        exit(1);
    }
    fwrite(data,1,sizeof(data),fp5);
    fclose(fp5);
}

int f2()
{
    char data[]="link to next";
    FILE *fp2;
    fp2=fopen("RedSkull.dat","ab");
    if(fp2==NULL)
    {
        printf("File cannot open");
        exit(1);
    }
    fwrite(data,1,sizeof(data),fp2);
    fclose(fp2);
}

int pause5()
{
    int i;
    for(i=0;i<4;i++)
    {
        printf(".\n");
        sleep(1);
    }
    for(i=0;i<6;i++)
    {
        printf("wait..");
        sleep(2);
    }
    printf("\n\n\n");
    f3();
    printf("The more you wait the far is the stone\n");
}

int f3()
{
    char data[]="Repository\n";
    FILE *fp3;
    fp3=fopen("RedSkull.dat","ab");
    if(fp3==NULL)
    {
        printf("File cannot open");
        exit(1);
    }
    fwrite(data,1,sizeof(data),fp3);
    fclose(fp3);
    f4();
}

int pause6()
{
    sleep(1);
    printf("_______________");
    sleep(0.3);
    printf("______________\n");
    sleep(1);
    printf("Time waits for no one\n");
}

int pause7()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf(".");
        sleep(3);
    }
    system("Color 4F");
    printf("Uh oh, try again(notepad is the key to open)\n\n\n");
}

