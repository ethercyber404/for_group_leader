#include <stdio.h>                            //----------------15
int main(){
    int arr[5] = {1,2,3,4,5};
    int num,count = 0; 

    scanf("%d",&num);
    for(int i = 0;i < 5;i++){
        if(arr[i] == num) {
            count++;
            break;      
        }
    }
    if(count == 1){
        printf("%d exists\n",num);
    } 
    else {
        printf("%d does not exist\n",num);
    }
    return 0;
}


#include <stdio.h>                                // max/min number by array[] --------(16)
int main()
{
    int a[100], size, i, max ,min, sum = 0;
    float  avg;
    printf("Enter Size of Array: ");
    scanf("%d", &size);
    printf("Enter value in Array: ");
    for (i = 0; i < size; i++){
        scanf("%d", &a[i]);
    }
    max = a[0];

    for (i = 0; i < size; i++){
        if (a[i] > max){
            max = a[i];
        }
    }
    min = a[0];

    for (i = 0; i < size; i++){
        if (a[i] < min){
            min = a[i];
        }
    }
    for (i = 0; i < size; i++){
        sum += a[i];
    }
    avg = sum/(float)size;

    printf("  Max : %d\n", max);
    printf("  Min : %d\n", min);
    printf("  Avg : %.2f\n", avg);
    return 0;
}


#include<stdio.h>                              //-----------------17
int main(){
    int arr_1[4] = {1,2,3,5};
    int arr_2[4] = {4,5,6,7};
    int count = 0;

    for(int i = 0;i < 4;i++){
        for(int j = 0;j < 4;j++){
            if(arr_1[i] == arr_2[j]){
                count++;
                break;
            } 
        }
    }
    (count == 1) ? printf("True\n") : printf("False\n");
    return 0;
}

#include<stdio.h>                                //18
int main(){
    int arr1[100],arr2[100];
    int size1,size2;
    scanf("%d %d",&size1,&size2);
    for(int i = 0;i < size1;i++){
        printf("arr1's %d element : ",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("\n\n");
    for(int i = 0;i < size1;i++){
        printf("arr2's %d element : ",i+1);
        scanf("%d",&arr2[i]);
    }
    for(int i = 0;i < size1;i++){
        for(int j = 0;j < size2;j++){
            if(arr1[i] == arr2[j]){
                printf("%d ",arr2[j]);
            }
        }
    }
    return 0;
}

#include <stdio.h>                                 //19
#include<string.h>                          
int main(){
    char a[100];
    int i;
    scanf("%s",a); 
    int lnt = strlen(a);
    for(i = lnt;i >= 0;i--){
        printf("%c",a[i]);
    }
    return 0;
}

#include <stdio.h>                                 //20
#include <string.h>
int main() {
    char ch[1000];
    char vow[5] = {'a','e','i','o','u'};
    int vowel = 0,cons = 0;

    scanf("%s",ch);
    int lnt = strlen(ch);

    for(int i = 0; i < lnt; i++){
        int count = 0;
        for(int j = 0; j < 5; j++){
            if(ch[i] == vow[j]){
                vowel++;
                count++;
            }
        }
            if(count == 0){
                cons++;
            }
    }
    printf("%d vowel's and %d consonant's\n",vowel,cons);

    return 0;
}

#include <stdio.h>                         //21
#include <string.h>

int main() {
    char ch[100];
    int i,lnt,count = 0;

    scanf("%s",ch);

    lnt = strlen(ch);
    for(i = 0; i < lnt/2; i++){
        if(ch[i] != ch[lnt-i-1]){
            count++;
            break;
        }
    }
    if(count == 0){
        printf("Palindrome.\n");
    } 
    else{
        printf("No!\n");
    }

    return 0;
}