str="qmnjvsanvwewcflctvprjtjtvvplvlfvxjavqildhcxmlnvcnacyclpafcgytvfvwfvwgqyppqqpqcsywsqrxqmnjvafycgvtlvhfcwtylaeuqfvxjatkbvcqnsqslhfavawnccveasfuqbqvqtcyllrqrxxwacfypsdcuqfavrqcgefqpyattracxwvtaawwddveasflcbqvdtrawmvupqquwxdecgqcwtyqyaflvlqsyqklhqsnafqvmllhvqpawrnqgvfusrecwawyqpfnwga"
str1=list(str)
str2=['a']*280
for i in range (56):
    str2[i*5]=str1[i*5+3]
    str2[i*5+3]=str1[i*5]
    str2[i*5+4]=str1[i*5+1]
    str2[i*5+1]=str1[i*5+2]
    str2[i*5+2]=str1[i*5+4]

print(str2)