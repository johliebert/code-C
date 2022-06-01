#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void find_track(char search_for[], char tracks[][80])
{
    int i;
    for(i = 0; i < 5; i++)
    {
        if(strstr(tracks[i], search_for))
            printf("Track %d : %s", i + 1, tracks[i]);
    }
}
int main ()
{
    char tracks[][80] = { 
        "I left my heart in harvard med school",
        "Newark, Newark - a wonderful town",
        "Dacing with a Dork",
        "From here to maternity",
        "The girl from two Jima",
    };
    char search_for[80];
    fgets(search_for, sizeof(search_for), stdin);// use scanf . it do not have \n //
    find_track(search_for, tracks);
    return 0;
}