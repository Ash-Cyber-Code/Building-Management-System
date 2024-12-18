#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int type1,j,c,st,p,l,b,A;
    double cbag= 0,cprice= 0,sandcft= 0,sprice= 0,aggregate= 0;
    double agprice= 0,steel= 0,stprice= 0,paint= 0,pprice= 0;
    double bricks= 0,bprice= 0,tiles= 0,tprice= 0,labour= 0;
    double flooring= 0,furnishing= 0,ceiling= 0,costceiling= 0;
    double electricity= 0,dw= 0,sanitary= 0,total= 0.0;

    printf("\n\n\t\t\t\t===== BUILDING MANAGEMENT SYSTEM =====\n");

    printf("\nEnter the length of the plot (in ft): ");
    scanf("%d",&l);
    
    printf("Enter the breadth of the plot (in ft): ");
    scanf("%d",&b);
   
    A= l*b;
    printf("\nTotal plot area: %d sq ft\n",A);

    printf("\nSelect House Type:\n");
    printf("1. Normal House\n");
    printf("2. Deluxe House\n");
    printf("3. Super Deluxe House\n");
    scanf("%d",&type1);

    printf("\nSelect Construction Type:\n");
    printf("1. Self-Made Construction\n");
    printf("2. Builder-Made Construction\n");
    int type2;
    scanf("%d",&type2);

    if(type2 == 2) 
    {
        switch(type1) 
        {
            case 1:
                total= A*1500;
                printf("\nNormal House Estimated Cost: Rs. %.2f\n", total);
                break;
            case 2:
                total= A*2500;
                printf("\nDeluxe House Estimated Cost: Rs. %.2f\n", total);
                break;
            case 3:
                total= A*5500;
                printf("\nSuper Deluxe House Estimated Cost: Rs. %.2f\n", total);
                break;
            default:
                printf("Wrong option, please choose again\n");
                exit(1);
        }
    }

    if(type2 == 1) 
    {
        switch(type1) 
        {
            case 1: 
                printf("\nSelect Cement Brand:\n");
                printf("1. Ultratech (Rs.440/bag)\n");
                printf("2. ACC (Rs.425/bag)\n");
                printf("3. Ambuja (Rs.400/bag)\n");
                printf("4. JK (Rs.390/bag)\n");
                scanf("%d",&c);

                cbag = (int)(A*0.4);
                switch(c) 
                {
                    case 1: cprice= cbag*440; break;
                    case 2: cprice= cbag*425; break;
                    case 3: cprice= cbag*400; break;
                    case 4: cprice= cbag*390; break;
                    default: 
                        printf("Invalid cement brand!\n");
                        exit(1);
                }
                 
    printf("\nSelect Steel Brand:\n");
    printf("1. Tata Tiscon (Rs.65/kg)\n");
    printf("2. JSW Steel (Rs.78/kg)\n");
    printf("3. Sail Steel (Rs.75/kg)\n");
    scanf("%d",&st);
    steel= A*4;
    switch(st)  
    {
        case 1:
            stprice= steel*65;
            break;
        case 2:
            stprice= steel*78;
            break;
        case 3:
            stprice= steel*75;
            break;
        default:
            printf("Invalid steel brand!\n");
            exit(1);
    }

    printf("\nSelect Paint Brand:\n");
    printf("1. Asian Paints (Rs.560/litre)\n");
    printf("2. Berger Paints (Rs.450/litre)\n");
    printf("3. Indigo Paints (Rs.390/litre)\n");
    scanf("%d",&p);
    paint= (int)(A*0.18);
    switch(p) 
    {
        case 1:
            pprice= paint*560;
            break;
        case 2:
            pprice= paint*450;
            break;
        case 3:
            pprice= paint*390;
            break;
        default:
            printf("Invalid paint brand!\n");
            exit(1);
    }

    sandcft= (int)(A*1.8);
    sprice= sandcft*40;
    aggregate= (int)(A*1.35);
    agprice= aggregate*50;
    bricks= (int)(A*35);
    bprice= bricks*7;
    tiles= (int)(A*1.3);
    tprice= tiles*100;
    labour= A*250;
    electricity= A*50;
    dw= A*70;
    sanitary= A*50;
    total= cprice+stprice+pprice+sprice+agprice+bprice+tprice+labour+electricity+dw+sanitary;
    printf("\nTotal Cost: Rs.%.2f\n",total);
    break;

        
            case 2: 
            printf("\nSelect Cement Brand:\n");
            printf("1. Ultratech (Rs.440/bag)\n");
            printf("2. ACC (Rs.425/bag)\n");
            printf("3. Ambuja (Rs.400/bag)\n");
            printf("4. JK (Rs.390/bag)\n");
            scanf("%d",&c);
            cbag = (int)(A*0.45);
            switch (c) 
            {
                case 1:
                    cprice= cbag*440;
                    break;
                case 2:
                    cprice= cbag*425;
                    break;
                case 3:
                    cprice= cbag*400;
                    break;
                case 4:
                    cprice= cbag*390;
                    break;
                default:
                    printf("Invalid cement brand!\n");
                    exit(1);
            }

            printf("\nSelect Steel Brand:\n");
            printf("1. Tata Tiscon (Rs.65/kg)\n");
            printf("2. JSW Steel (Rs.78/kg)\n");
            printf("3. Sail Steel (Rs.75/kg)\n");
            scanf("%d",&st);
            steel= A*4.5;
            switch (st) 
            {
                case 1:
                    stprice= steel*65;
                    break;
                case 2:
                    stprice= steel*78;
                    break;
                case 3:
                    stprice= steel*75;
                    break;
                default:
                    printf("Invalid steel brand!\n");
                    exit(1);
            }

            printf("\nSelect Paint Brand:\n");
            printf("1. Asian Paints (Rs.560/litre)\n");
            printf("2. Berger Paints (Rs.450/litre)\n");
            printf("3. Indigo Paints (Rs.390/litre)\n");
            scanf("%d",&p);
            paint= (int)(A*0.2);
            switch (p) 
            {
                case 1:
                    pprice= paint*560;
                    break;
                case 2:
                    pprice= paint*450;
                    break;
                case 3:
                    pprice= paint*390;
                    break;
                default:
                    printf("Invalid paint brand!\n");
                    exit(1);
            }

            sandcft= (int)(A*2);
            sprice= sandcft*40;
            aggregate= (int)(A*1.5);
            agprice= aggregate*50;
            bricks= (int)(A*40);
            bprice= bricks*7;
            tiles= (int)(A*1.5);
            tprice= tiles*100;
            labour= A*300;
            electricity= A*60;
            dw= A*80;
            sanitary= A*60;
            total= cprice+stprice+pprice+sprice+agprice+bprice+tprice+labour+electricity+dw+sanitary;
        printf("\nTotal Cost: Rs.%.2f\n", total);
                break;

            case 3:

        printf("\nSelect Cement Brand:\n");
        printf("1. Ultratech (Rs.440/bag)\n");
        printf("2. ACC (Rs.425/bag)\n");
        printf("3. Ambuja (Rs.400/bag)\n");
        printf("4. JK (Rs.390/bag)\n");
        scanf("%d",&c);
        cbag = (int)(A*0.5);
        switch (c) 
        {
            case 1:
                cprice= cbag*440;
                break;
            case 2:
                cprice= cbag*425;
                break;
            case 3:
                cprice= cbag*400;
                break;
            case 4:
                cprice= cbag*390;
                break;
            default:
                printf("Invalid cement brand!\n");
                exit(1);
        }

        printf("\nSelect Steel Brand:\n");
        printf("1. Tata Tiscon (Rs.65/kg)\n");
        printf("2. JSW Steel (Rs.78/kg)\n");
        printf("3. Sail Steel (Rs.75/kg)\n");
        scanf("%d",&st);
        steel = A*5;
        switch (st) 
        {
            case 1:
                stprice= steel*65;
                break;
            case 2:
                stprice= steel*78;
                break;
            case 3:
                stprice= steel*75;
                break;
            default:
                printf("Invalid steel brand!\n");
                exit(1);
        }

        printf("\nSelect Paint Brand:\n");
        printf("1. Asian Paints (Rs.560/litre)\n");
        printf("2. Berger Paints (Rs.450/litre)\n");
        printf("3. Indigo Paints (Rs.390/litre)\n");
        scanf("%d",&p);
        paint= (int)(A*0.22);
        switch (p) 
        {
            case 1:
                pprice= paint*560;
                break;
            case 2:
                pprice= paint*450;
                break;
            case 3:
                pprice= paint*390;
                break;
            default:
                printf("Invalid paint brand!\n");
                exit(1);
        }

        sandcft= (int)(A*2.2);
        sprice= sandcft*40;
        aggregate= (int)(A*1.7);
        agprice= aggregate*50;
        bricks= (int)(A*45);
        bprice= bricks*7;
        tiles= (int)(A*1.7);
        tprice= tiles*100;
        labour= A*350;
        electricity= A*70;
        dw= A*90;
        sanitary= A*70;
        total= cprice+stprice+pprice+sprice+agprice+bprice+tprice+labour+electricity+dw+sanitary;
        printf("\nTotal Cost: Rs.%.2f\n",total);
                break;

            default:
                printf("Invalid house type!\n");
                exit(1);
        }
    }

    return 0;
}