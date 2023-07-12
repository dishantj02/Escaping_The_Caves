#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str[]="qmnjvsa nv wewc flct vprj tj tvvplvl fv xja vqildhc xmlnvc nacyclpa fc gyt vfvw. fv wgqyp, pqq pqcs y wsq rx qmnjvafy cgv tlvhf cw tyl aeuq fv xja tkbv cqnsqs.lhf avawnc cv eas fuqb qvq tc yllrqr xxwa cfy. psdc uqf avrqc gefq pyat trac xwv taa wwd dv eas flcbq. vd trawm vupq quw x decgqcwt, yq yafl vlqs yqklhq! snafq vml lhvqpawr nqg_vfusr_ec_wawy qp fn wgawdgf.*";
    int i=0,k=0,n;
    scanf("%d",&n);
    n=n+1;
    while(str[i]!='*'){
        if(str[i]>='a' && str[i]<='z'){
            if(k%n==0){
                printf(" ");
                k++;
                continue;
            }
            else{
                printf("%c",str[i]);
                k++;
            }
        }
        i++;
    }

    return 0;
}