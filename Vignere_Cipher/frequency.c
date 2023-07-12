#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = "kgfcwdqhvinpnzyhjcocntcjjwgkuwnthnnyvngkxacjjwgurfjmxwyyjgrbbufqwivjgdjxnofsdgrmncbgiyqiquqtxwlmocazxwqcajvjgtctnplyjhqscjnpjcvejbvdntythkpecjngcnvaqvokauybknnongmvtzvvgsvcpkhbqtftcjntj***";
    float freq[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    char c[10][19];
    int i = 0;
    while (i < 190)
    {
        for (int j = 0; j < 19; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                c[j][k] = str[i];
                i++;
            }
        }
    }
    for(int m=0;m<10;m++){
        for(int n=0;n<19;n++){
            printf("%c ",c[n][m]);

        }
        printf("\n");
    }
    i=0;
    int q=0,d;
    for(int t=0;t<10;t++){
        while(i<19){
        if(c[i][t]>='a' && c[i][t]<='z'){
            d=c[i][t]-'a';
            freq[d]++;
            q++;
        }
        i++;
        }
        printf("Round %d\n",t+1);
        for(int j=0;j<26;j++){
           freq[j]=freq[j]/q*(1.0);
           printf("%c=%0.6f\n ",97+j,freq[j]);
    }
    printf("\n");
    for(int j=0;j<26;j++){
        freq[j]=0;
    }
    i=0;
    }

}