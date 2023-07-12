#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str[]="qmnjvsanvwewcflctvprjtjtvvplvlfvxjavqildhcxmlnvcnacyclpafcgytvfvwfvwgqyppqqpqcsywsqrxqmnjvafycgvtlvhfcwtylaeuqfvxjatkbvcqnsqslhfavawnccveasfuqbqvqtcyllrqrxxwacfypsdcuqfavrqcgefqpyattracxwvtaawwddveasflcbqvdtrawmvupqquwxdecgqcwtyqyaflvlqsyqklhqsnafqvmllhvqpawrnqgvfusrecwawyqpfnwgawdgf*";
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
        ioc=ioc+(((freq[j])*(freq[j]-1))/((i-1)*(i-2)));
    }
    printf("ioc = %f ",ioc);

    return 0;
}