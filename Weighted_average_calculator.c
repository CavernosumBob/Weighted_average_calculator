#include<stdio.h>
int main(){
    float TotalScore=0;//总成绩
    float Single=0;//单科成绩
    float Credit=0;//学分
    float CreditSum = 0;//学分总和
    float Product=0;//分子
    float ProductSum = 0;//分子总和
    float SumScore=0;//前半部分
    float Elective=0;//选修
    char a='\0';//判断是否继续计算
    char t='\0';//一级判断
    char y='\0';//二级判断
    char c='\0';//判断等级n
    double b=0;//等级赋分

    do{
        a='\0';//判断是否继续计算
        t='\0';//一级判断
        y='\0';//二级判断
        c='\0';//判断等级n
        TotalScore=0;//总成绩
        Single=0;//单科成绩
        Credit=0;//学分
        CreditSum = 0;//学分总和
        Product=0;//分子
        ProductSum = 0;//分子总和
        SumScore=0;//前半部分
        Elective=0;//选修
        printf("是否有缓考科目? Y/N\n");
        t = getchar();
        fflush(stdin); 
        if(t=='Y'){
            printf("进入缓考科目计分程序\n");
            do{//进入计算缓考环节
                printf("请输入成绩\n");
                scanf("%f", &Single);
                fflush(stdin); 
                printf("请输入学分\n");
                scanf("%f", &Credit);
                fflush(stdin); 
                Product = Single * 0.85 * Credit;//计算分子
                ProductSum = ProductSum + Product;//计算分子综合
                CreditSum = CreditSum + Credit;//计算学分总和
                printf("是否继续输入? Y/N\n");
                y=getchar();
                fflush(stdin); 
            } while (y == 'Y');
            printf("退出缓考科目计分程序\n");
        }
        t='\0';
        y='\0';//归零


        printf("是否有等级分级计分科目? Y/N\n");
        t=getchar();
        fflush(stdin); 
        if(t=='Y'){
            printf("进入等级分级科目计分程序\n");
            do{//进入计算等级分级计分科目环节
                printf("请输入等级，A->优，B->良，C->中，D->及格，E->不及格\n");
                c = getchar();
                fflush(stdin); //等级
                switch (c) {
                case 'A' :b = 90;break;
                case 'B' :b = 80;break;
                case 'C' :b = 70;break;
                case 'D' :b = 60;break;
                case 'E' :b = 50;break;
                }
                printf("请输入学分\n");
                scanf("%f", &Credit);
                fflush(stdin); 
                Product = b * Credit;//计算分子
                ProductSum = ProductSum + Product;//计算分子综合
                CreditSum = CreditSum + Credit;//计算学分总和
                printf("是否继续输入? Y/N\n");
                y=getchar();
                fflush(stdin); 
            } while (y == 'Y');
            printf("退出等级分级科目计分程序\n");
        }
        t='\0';
        y='\0';//归零

        printf("进入必修计分程序\n");
        do{
            printf("请输入成绩\n");
            scanf("%f", &Single);
            fflush(stdin); 
            printf("请输入学分\n");
            scanf("%f", &Credit);
            fflush(stdin); 
            Product = Single * Credit;  //计算分子
            ProductSum = ProductSum + Product; //计算分子综合
            CreditSum = CreditSum + Credit;    //计算学分总和
            printf("是否继续输入? Y/N\n");
            t=getchar();
            fflush(stdin); 
        } while (t == 'Y');
        SumScore = ProductSum / CreditSum;
        printf("退出必修计分程序\n");
        t='\0';


        printf("是否有选修科目? Y/N\n");
        t=getchar();
        fflush(stdin); 
        if(t=='Y'){
            printf("进入选修及形势与政策计分程序\n");
            do{//进入选修计分环节
                printf("请输入成绩：A->优秀,B->及格和良，C->不及格\n");
                c = getchar();//等级
                fflush(stdin); 
                printf("请输入学分\n");
                scanf("%f", &Credit);
                fflush(stdin); 
                switch (c) {
                case 'A' :b = 0.2;break;
                case 'B' :b = 0.1;break;
                case 'C' :b = -0.1;break;
                }
                Elective = Elective + b * Credit;
                printf("是否继续输入? Y/N\n");
                y=getchar();
                fflush(stdin); 
            } while ( y == 'Y');
            printf("退出缓考科目计分程序\n");
        }

        
        TotalScore = Elective + SumScore;
        printf("智育基本素质分为 %f \n", TotalScore);
        printf("是否进行下一位同学的计算? Y/N\n");
        a=getchar();
        fflush(stdin); 
    } while (a == 'Y');

    return 0;

}

//BY:黄吉喆  2020.9.11