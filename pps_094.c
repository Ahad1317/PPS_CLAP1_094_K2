//ABDUL AHAD
//RA2111028010094
//CSE CLOUD COMPUTING
//K2 SECTION
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int aa;
    printf("\n1. Arithmetic Operator\n2. Bitwise Operator\n3. Increment & Decrement Operator\n4. Sizeof\n5. Exit\n");
    printf("\nSelect the opetator = ");
    scanf("%d",&aa);
    switch(aa)
    {
        case 1:
        printf("\nAssignment Operator\n");
        int i,j;
        printf("\ni = ");
        scanf("%d",&i);
        printf("\nj = ");
        scanf("%d",&j);
        int aa4;
        printf("\nEnter Your Choice (1. Addittion, 2. Subtraction, 3. Multiplication, 4. Division, 5. Modulus)= ");
        scanf("%d",&aa4);
        switch(aa4)
        {
            case 1:
            i+=j;
            printf("\nAnswer = %d\n",i);
            break;
            case 2:
            i-=j;
            printf("\nAnswer = %d\n",i);
            break;
            case 3:
            i*=j;
            printf("\nAnswer = %d\n",i);
            break;
            case 4:
            i/=j;
            printf("\nAnswer = %d\n",i);
            break;
            case 5:
            i%=j;
            printf("\nAnswer = %d\n",i);
            break;
        }
        break;
        case 2:
        printf("\nBitwise Operator\n");
        int k,l;
        printf("\nk = ");
        scanf("%d",&k);
        printf("\nl = ");
        scanf("%d",&l);
        int aa5;
        printf("Enter Your Choice (1. Bitwise AND, 2. Bitwise OR, 3. One's Complement, 4. Shift right, 5. Shift left, 6. Exclusive OR) = ");
        scanf("%d",&aa5);
        switch(aa5)
        {
            case 1:
            printf("\nAnswer = %d\n",k&l);
            break;
            case 2:
            printf("\nAnswer = %d\n",k|l);
            break;
            case 3:
            printf("\nAnswer = %d\n",~k);
            break;
            case 4:
            printf("\nAnswer = %d\n",k>>l);
            break;
            case 5:
            printf("\nAnswer = %d\n",k<<l);
            break;
            case 6:
            printf("\nAnswer = %d\n",k^l);
            break;
        }
        break;
        case 3:
        printf("\nIncrement & Decrement Operator\n");
        int aa1;
        printf("\nEnter a Choice (1. Increment Operator & 2. Decrement Operator) = ");
        scanf("%d",&aa1);
        switch(aa1)
        {
            case 1:
            printf("\nIncrement Operator\n");
            int aa2;
            printf("\nEnter a Choice (1. Pre Increment & 2. Post Increment) = ");
            scanf("%d",&aa2);
            switch(aa2)
            {
                case 1:
                printf("\nPre Increment\n");
                int a,b;
                printf("\na = ");
                scanf("%d",&a);
                printf("\nb = ");
                scanf("%d",&b);
                while(++a<b)
                {
                    printf("%d",a);
                }
                break;
                case 2:
                printf("\nPost Increment\n");
                int c,d;
                printf("\nc = ");
                scanf("%d",&c);
                printf("\nd = ");
                scanf("%d",&c);
                while(c++<d)
                {
                    printf("%d",c);
                }
                break;
            }
            break;
            case 2:
            printf("\nDecrement Operator\n");
            int aa3;
            printf("\nEnter a Choice (1. Pre Decrement & 2. Post Decrement) = ");
            scanf("%d",&aa3);
            switch(aa3)
            {
                case 1:
                printf("\nPre Decrement\n");
                int e,f;
                printf("\ne = ");
                scanf("%d",&e);
                printf("\nf = ");
                scanf("%d",&f);
                while(--e<f)
                {
                    printf("%d",e);
                }
                break;
                case 2:
                printf("\nPost Decrement\n");
                int g,h;
                printf("\ng = ");
                scanf("%d",&g);
                printf("\nh = ");
                scanf("%d",&h);
                while(g--<h)
                {
                    printf("%d",g);
                }
                break;
            }
            break;
        }
        case 4:
        printf("\nEnter the value\n");
        int m;
        printf("\ni = ");
        scanf("%d",&m);
        printf("\nSize of Variable = %d\n",sizeof(m));
        printf("\nSize of Integer = %d\n",sizeof(int));
        printf("\nSize of Floating Point = %d\n",sizeof(float));
        printf("\nSize of Double = %d\n",sizeof(double));
        printf("\nSize of Character = %d\n",sizeof(char));
        break;
        case 5:
        exit(0);
        break;
    }
    return 0;
}