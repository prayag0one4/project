#include <stdio.h>
int main()
{
    int a, b;
    int c,d;
    printf("select one fruit \napple\nmango\nbanana\norange\ngrapes\n");
    printf("press 1 to start\n");
    scanf("%d", &d);


    printf("is your fruit available\napple\nmango\norange\ngrapes\npear\nkiwi\nberry\n");
    printf("enter 1 for YES and 0 for NO\n");
    scanf("%d", &c);

    if (c == 1)
    {
        a = 1;
    }
    printf("is your fruit available\nbanana\ndates\nmango\npear\norange\nkiwi\ngrapes\n");
    printf("enter 1 for YES and 0 for NO\n");
    scanf("%d", &c);
    if (c == 1)
    {
        a = a + 1;
    }
    printf("is your fruit available\ncherry\nbanana\nkiwi\norange\npear\ngrapes\nberry\n");

    printf("enter 1 for YES and 0 for NO\n");
    scanf("%d", &c);
    if (c == 1)
    {
        a = a + 1;
    }
    printf("is your fruit available\nmelon\nbanana\ndates\nberry\npear\norange\ngrapes\nplum\n");
    printf("enter 1 for YES and 0 for NO\n");
    scanf("%d", &c);
    if (c == 1)
    {
        a = a + 1;
    }
    printf("is your fruit available\npear\ndates\nmelon\norange\ncherry\nberry\nplum\n");
    printf("enter 1 for YES and 0 for NO\n");
    scanf("%d", &c);
    if (c == 1)
    {
        a = a + 1;
    }

    if(a==1){
        printf("your fruit is apple");
    }
    if(a==2){
        printf("your fruit is mango");
    }
    if(a==3){
        printf("your fruit is banana");
    }
    if(a==4){
        printf("your fruit is grapes");
    }
    if(a==5){
        printf("your fruit is orange"); 
    }
    return 0;
}