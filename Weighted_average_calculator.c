#include<stdio.h>
int main(){
    float TotalScore=0;//�ܳɼ�
    float Single=0;//���Ƴɼ�
    float Credit=0;//ѧ��
    float CreditSum = 0;//ѧ���ܺ�
    float Product=0;//����
    float ProductSum = 0;//�����ܺ�
    float SumScore=0;//ǰ�벿��
    float Elective=0;//ѡ��
    char a='\0';//�ж��Ƿ��������
    char t='\0';//һ���ж�
    char y='\0';//�����ж�
    char c='\0';//�жϵȼ�n
    double b=0;//�ȼ�����

    do{
        a='\0';//�ж��Ƿ��������
        t='\0';//һ���ж�
        y='\0';//�����ж�
        c='\0';//�жϵȼ�n
        TotalScore=0;//�ܳɼ�
        Single=0;//���Ƴɼ�
        Credit=0;//ѧ��
        CreditSum = 0;//ѧ���ܺ�
        Product=0;//����
        ProductSum = 0;//�����ܺ�
        SumScore=0;//ǰ�벿��
        Elective=0;//ѡ��
        printf("�Ƿ��л�����Ŀ? Y/N\n");
        t = getchar();
        fflush(stdin); 
        if(t=='Y'){
            printf("���뻺����Ŀ�Ʒֳ���\n");
            do{//������㻺������
                printf("������ɼ�\n");
                scanf("%f", &Single);
                fflush(stdin); 
                printf("������ѧ��\n");
                scanf("%f", &Credit);
                fflush(stdin); 
                Product = Single * 0.85 * Credit;//�������
                ProductSum = ProductSum + Product;//��������ۺ�
                CreditSum = CreditSum + Credit;//����ѧ���ܺ�
                printf("�Ƿ��������? Y/N\n");
                y=getchar();
                fflush(stdin); 
            } while (y == 'Y');
            printf("�˳�������Ŀ�Ʒֳ���\n");
        }
        t='\0';
        y='\0';//����


        printf("�Ƿ��еȼ��ּ��Ʒֿ�Ŀ? Y/N\n");
        t=getchar();
        fflush(stdin); 
        if(t=='Y'){
            printf("����ȼ��ּ���Ŀ�Ʒֳ���\n");
            do{//�������ȼ��ּ��Ʒֿ�Ŀ����
                printf("������ȼ���A->�ţ�B->����C->�У�D->����E->������\n");
                c = getchar();
                fflush(stdin); //�ȼ�
                switch (c) {
                case 'A' :b = 90;break;
                case 'B' :b = 80;break;
                case 'C' :b = 70;break;
                case 'D' :b = 60;break;
                case 'E' :b = 50;break;
                }
                printf("������ѧ��\n");
                scanf("%f", &Credit);
                fflush(stdin); 
                Product = b * Credit;//�������
                ProductSum = ProductSum + Product;//��������ۺ�
                CreditSum = CreditSum + Credit;//����ѧ���ܺ�
                printf("�Ƿ��������? Y/N\n");
                y=getchar();
                fflush(stdin); 
            } while (y == 'Y');
            printf("�˳��ȼ��ּ���Ŀ�Ʒֳ���\n");
        }
        t='\0';
        y='\0';//����

        printf("������޼Ʒֳ���\n");
        do{
            printf("������ɼ�\n");
            scanf("%f", &Single);
            fflush(stdin); 
            printf("������ѧ��\n");
            scanf("%f", &Credit);
            fflush(stdin); 
            Product = Single * Credit;  //�������
            ProductSum = ProductSum + Product; //��������ۺ�
            CreditSum = CreditSum + Credit;    //����ѧ���ܺ�
            printf("�Ƿ��������? Y/N\n");
            t=getchar();
            fflush(stdin); 
        } while (t == 'Y');
        SumScore = ProductSum / CreditSum;
        printf("�˳����޼Ʒֳ���\n");
        t='\0';


        printf("�Ƿ���ѡ�޿�Ŀ? Y/N\n");
        t=getchar();
        fflush(stdin); 
        if(t=='Y'){
            printf("����ѡ�޼����������߼Ʒֳ���\n");
            do{//����ѡ�޼Ʒֻ���
                printf("������ɼ���A->����,B->���������C->������\n");
                c = getchar();//�ȼ�
                fflush(stdin); 
                printf("������ѧ��\n");
                scanf("%f", &Credit);
                fflush(stdin); 
                switch (c) {
                case 'A' :b = 0.2;break;
                case 'B' :b = 0.1;break;
                case 'C' :b = -0.1;break;
                }
                Elective = Elective + b * Credit;
                printf("�Ƿ��������? Y/N\n");
                y=getchar();
                fflush(stdin); 
            } while ( y == 'Y');
            printf("�˳�������Ŀ�Ʒֳ���\n");
        }

        
        TotalScore = Elective + SumScore;
        printf("�����������ʷ�Ϊ %f \n", TotalScore);
        printf("�Ƿ������һλͬѧ�ļ���? Y/N\n");
        a=getchar();
        fflush(stdin); 
    } while (a == 'Y');

    return 0;

}

//BY:�Ƽ���  2020.9.11