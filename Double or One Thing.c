#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    int i=0;
    char line[255];
    fgets(line, 255, stdin);
    int t=atoi(line);
    i++;
    while(i<=t)
    {
        printf("Case #%d: ",i);
        fgets(line, 255, stdin);
        int ind=0;
        int x=strlen(line)-1;
        while((ind)<=(x)) //ignore the last letter because it will never  be doubled
        {
            
            int cmp=ind+1;
            int dub=0;
            int stop=0;
            while((cmp<x)&&(stop==0))
            {
                if(line[ind]<line[cmp])
                    {dub=1;
                    stop=1;}
                else
                {
                    if(line[ind]>line[cmp])
                        {
                            stop=1;
                        }
                }
                cmp++;
            }
            if(dub==1)
                {
                    printf("%c%c",line[ind],line[ind]);
                }
            else
            {
                printf("%c",line[ind]);
            }
            ind++;
        }
        i++;
    }
    return 0;
}
