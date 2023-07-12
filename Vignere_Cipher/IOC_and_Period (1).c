#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str[]="kgfcwdqhvinpnzyhjcocntcjjwgkuwnthnnyvngkxacjjwgurfjmxwyyjgrbbufqwivjgdjxnofsdgrmncbgiyqiquqtxwlmocazxwqcajvjgtctnplyjhqscjnpjcvejbvdntythkpecjngcnvaqvokauybknnongmvtzvvgsvcpkhbqtftcjntj*";
    float freq[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int i=0,d,k=0;
    while(str[i]!='*'){
        if(str[i]>='a' && str[i]<='z'){
            d=str[i]-'a';
            freq[d]++;
        }
        i++;
    }
    float ioc=0;
    for(int j=0;j<26;j++){
        ioc=ioc+(((freq[j])*(freq[j]-1))/((i)*(i-1)));
    }
    printf("ioc = %f ",ioc);

    float period;
    period=(ioc*(i)-1)/(0.75);
    printf("period = %f",period);

    return 0;
}