#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int elevator1()
{
    int floor[20];
    int i=0;
    int j=0;
    int t=0;
    int p=0;
    int c=0;
    int weight[10];
    int s=0;
    int h;
    int l;
    int p1;
    int m;
    int x;
    srand(time(NULL));
    x=rand()%20;
    while(1)
    {
        printf("1.��¥\n");
        printf("2.��¥\n");
        printf("3.�˳�\n");
     printf("��ѡ��(1-3):");

         scanf("%d",&c);
         switch(c)
         {
         case 1:
             printf("�˵��ݿɷ���ȫ��¥��\n");
             printf("�˵������˿�����10�ˣ����������800KG\n");
             printf("��ʱ��������%d��,�����ȴ�\n",x);
             printf("�����������ݵ�����:\n");
             scanf("%d",&p);
             printf("���ǵ�����������:\n");
             for(i=0;i<p;i++)
             {
                printf("��%d����: ",i+1);
                scanf("%d",&weight[i]);
                s=s+weight[i];
                        if(s>800)
                           {
                         printf("���أ�����ȥһ����\n");
                         s=s-weight[i];
                         p=p-1;
                           }
             }
                printf("������Ϊ%dkg,δ����\n",s);

                      printf("����������ȥ��¥��:\n");
                         for(i=0;i<p;i++)
                         {
                          printf("��%d����: ",i+1);
                           scanf("%d",&floor[i]);
                         }
              for(j=0;j<p-1;j++)
                  for(i=0;i<p-1-j;i++)
                  {
                      if(floor[i]>floor[i+1])
                      {
                      t=floor[i];
                       floor[i]=floor[i+1];
                       floor[i+1]=t;
                      }
                  }
                     printf("�����ε�������¥��:\n");

                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("�ѵ���%d�㣬�ߺ�\n",floor[j]);
                      printf("�˲���û���˽�����?��ѡ��1-2\n");
                      printf("1.����\n");
                      printf("2.����\n");
                      scanf("%d",&h);

                     switch(h)
                      {
                      case 1:
                          printf("�������\n");
                          printf("�����������:\n");
                          scanf("%d",&p1);
                          printf("���ε�����:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               s=s+weight[l];
                        if(s>800)
                           {
                         printf("���أ�����ȥһ����\n");
                         s=s-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("������Ϊ%dkg,δ����\n",s);
                          printf("��������ȥ��¥��:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("�ѵ���%d�㣬�ߺ�\n",floor[m]);
                           continue;

                         }
                           break;


                      case 2:
                          printf("�رյ�����\n");
                          break;
                      }



                  }

                  break;



         case 2:
              printf("�˵��ݿɷ���ȫ��¥��\n");
              printf("�˵������˿�����10�ˣ����������800KG\n");
              printf("��ʱ��������%d��,�����ȴ�\n",x);
              printf("�����������ݵ�����:\n");
              scanf("%d",&p);
              printf("���ǵ�����������:\n");
             for(i=0;i<p;i++)
             {
                printf("��%d����: ",i+1);
                scanf("%d",&weight[i]);
                s=s+weight[i];
                       if(s>800)
                           {
                         printf("���أ�����ȥһ����\n");
                         s=s-weight[i];
                    p=p-1;
                           }
             }
                printf("������Ϊ%dkg,δ����\n",s);

                      printf("����������ȥ��¥��:\n");
                         for(i=0;i<p;i++)
                         {
                              printf("��%d����: ",i+1);
                           scanf("%d",&floor[i]);
                         }
              for(j=0;j<p-1;j++)
                  for(i=0;i<p-1-j;i++)
                  {
                      if(floor[i]<floor[i+1])
                      {
                      t=floor[i];
                       floor[i]=floor[i+1];
                       floor[i+1]=t;
                      }
                  }
                      printf("�����ε�������¥��:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("�ѵ���%d�㣬�ߺ�\n",floor[j]);
                      printf("�˲���û���˽�����?��ѡ��1-2\n");
                      printf("1.����\n");
                      printf("2.����\n");
                      scanf("%d",&h);

                     switch(h)
                      {
                      case 1:
                          printf("�������\n");
                          printf("�����������:\n");
                          scanf("%d",&p1);
                          printf("���ε�����:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               s=s+weight[l];
                        if(s>800)
                           {
                         printf("���أ�����ȥһ����\n");
                         s=s-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("������Ϊ%dkg,δ����\n",s);
                          printf("��������ȥ��¥��:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("�ѵ���%d�㣬�ߺ�\n",floor[m]);
                           continue;

                         }
                          break;
                      case 2:
                          printf("�رյ�����\n");
                          break;
                      }
                  }
                  break;
        case 3:
             return 0;
             break;
         }
    }
    }


    int elevator2()
    {

    int floor[20];
    int i=0;
    int j=0;
    int t;
    int p;
    int c;
    int h;
    int weight[10];
    int s=0;
    int l;
    int p1;
    int m;


    while(1)
    {
        printf("1.��¥\n");
        printf("2.��¥\n");
        printf("3.�˳�\n");
     printf("��ѡ��(1-3):");

         scanf("%d",&c);
         switch(c)
         {
         case 1:
             printf("�˵���ֻ���񵥺�¥��\n");
             printf("�˵������˿�����10�ˣ����������800KG\n");
             printf("�����������ݵ�����:\n");
             scanf("%d",&p);
             printf("���ǵ�����������:\n");
             for(i=0;i<p;i++)
             {
                printf("��%d����: ",i+1);
                scanf("%d",&weight[i]);
                s=s+weight[i];
                            if(s>800)
                           {
                         printf("���أ�����ȥһ����");
                         s=s-weight[i];
                    p=p-1;
                           }
             }
                printf("������Ϊ%dkg,δ����\n",s);

                      printf("����������ȥ�ĵ���¥��:\n");
                         for(i=0;i<p;i++)
                         {
                            printf("��%d����: ",i+1);
                           scanf("%d",&floor[i]);
                         }
              for(j=0;j<p-1;j++)
                  for(i=0;i<p-1-j;i++)
                  {
                      if(floor[i]>floor[i+1])
                      {
                      t=floor[i];
                       floor[i]=floor[i+1];
                       floor[i+1]=t;
                      }
                  }
                      printf("�����ε�������¥��:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("�ѵ���%d�㣬�ߺ�\n",floor[j]);
                      printf("�˲���û���˽�����?��ѡ��1-2\n");
                      printf("1.����\n");
                      printf("2.����\n");
                      scanf("%d",&h);

                     switch(h)
                      {
                      case 1:
                          printf("�������\n");
                          printf("�����������:\n");
                          scanf("%d",&p1);
                          printf("���ε�����:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               s=s+weight[l];
                        if(s>800)
                           {
                         printf("���أ�����ȥһ����\n");
                         s=s-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("������Ϊ%dkg,δ����\n",s);
                          printf("��������ȥ��¥��:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("�ѵ���%d�㣬�ߺ�\n",floor[m]);
                           continue;

                         }
                          break;
                      case 2:
                          printf("�رյ�����\n");
                          break;
                      }
                  }
                  break;

         case 2:

             printf("�˵���ֻ���񵥺�¥��\n");
             printf("�˵������˿�����10�ˣ����������800KG\n");
             printf("�����������ݵ�����:\n");
             scanf("%d",&p);
             printf("���ǵ�����������:\n");
             for(i=0;i<p;i++)
             {
                printf("��%d����: ",i+1);
                scanf("%d",&weight[i]);
                s=s+weight[i];
                             if(s>800)
                           {
                         printf("���أ�����ȥһ����");
                         s=s-weight[i];
                    p=p-1;
                           }
             }
                printf("������Ϊ%dkg,δ����\n",s);

                      printf("����������ȥ�ĵ���¥��:\n");
                         for(i=0;i<p;i++)
                         {
                               printf("��%d����: ",i+1);
                           scanf("%d",&floor[i]);
                         }
              for(j=0;j<p-1;j++)
                  for(i=0;i<p-1-j;i++)
                  {
                      if(floor[i]<floor[i+1])
                      {
                      t=floor[i];
                       floor[i]=floor[i+1];
                       floor[i+1]=t;
                      }
                  }
                      printf("�����ε�������¥��:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("�ѵ���%d�㣬�ߺ�\n",floor[j]);
                      printf("�˲���û���˽�����?��ѡ��1-2\n");
                      printf("1.����\n");
                      printf("2.����\n");
                      scanf("%d",&h);

                     switch(h)
                      {
                      case 1:
                          printf("�������\n");
                          printf("�����������:\n");
                          scanf("%d",&p1);
                          printf("���ε�����:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               s=s+weight[l];
                        if(s>800)
                           {
                         printf("���أ�����ȥһ����\n");
                         s=s-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("������Ϊ%dkg,δ����\n",s);
                          printf("��������ȥ��¥��:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("�ѵ���%d�㣬�ߺ�\n",floor[m]);
                           continue;

                         }
                          break;
                      case 2:
                          printf("�رյ�����\n");
                          break;
                      }
                  }
                  break;
          case 3:
             return 0;
             break;

         }
    }
    }



    int elevator3()
    {
    int floor[20];
    int i=0;
    int j=0;
    int t;
    int p;
    int c;
    int weight[20];
    int s=0;
    int h;
    int l;
    int p1;
    int m;
    while(1)
    {
        printf("1.��¥\n");
        printf("2.��¥\n");
        printf("3.�˳�\n");
     printf("��ѡ��(1-3):");

         scanf("%d",&c);
         switch(c)
         {
         case 1:
             printf("�˵���ֻ����˫��¥��\n");
             printf("�˵������˿�����20�ˣ����������1600KG\n");
             printf("�����������ݵ�����:\n");
             scanf("%d",&p);
             printf("���ǵ�����������:\n");
             for(i=0;i<p;i++)
             {
                printf("��%d����: ",i+1);
                scanf("%d",&weight[i]);
                s=s+weight[i];
                         if(s>1600)
                           {
                         printf("���أ�����ȥһ����");
                         s=s-weight[i];
                    p=p-1;
                           }
             }
                printf("������Ϊ%dkg,δ����\n",s);

                      printf("����������ȥ��˫��¥��:\n");
                         for(i=0;i<p;i++)
                         {
                             printf("��%d����: ",i+1);
                           scanf("%d",&floor[i]);
                         }
              for(j=0;j<p-1;j++)
                  for(i=0;i<p-1-j;i++)
                  {
                      if(floor[i]>floor[i+1])
                      {
                      t=floor[i];
                       floor[i]=floor[i+1];
                       floor[i+1]=t;
                      }
                  }
                  printf("�����ε�������¥��:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("�ѵ���%d�㣬�ߺ�\n",floor[j]);
                      printf("�˲���û���˽�����?��ѡ��1-2\n");
                      printf("1.����\n");
                      printf("2.����\n");
                      scanf("%d",&h);

                     switch(h)
                      {
                      case 1:
                          printf("�������\n");
                          printf("�����������:\n");
                          scanf("%d",&p1);
                          printf("���ε�����:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               s=s+weight[l];
                        if(s>800)
                           {
                         printf("���أ�����ȥһ����\n");
                         s=s-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("������Ϊ%dkg,δ����\n",s);
                          printf("��������ȥ��¥��:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("�ѵ���%d�㣬�ߺ�\n",floor[m]);
                           continue;

                         }
                          break;
                      case 2:
                          printf("�رյ�����\n");
                          break;
                      }
                  }
                  break;


         case 2:
                printf("�˵���ֻ����˫��¥��\n");
                printf("�˵������˿�����20�ˣ����������1600KG\n");
                printf("�����������ݵ�����:\n");
                scanf("%d",&p);
                printf("���ǵ�����������:\n");
                  for(i=0;i<p;i++)
                  {
                printf("��%d����: ",i+1);
                scanf("%d",&weight[i]);
                s=s+weight[i];
                           if(s>1600)
                           {
                         printf("���أ�����ȥһ����");
                         s=s-weight[i];
                    p=p-1;
                           }
                  }
                printf("������Ϊ%dkg,δ����\n",s);

                      printf("����������ȥ��˫��¥��:\n");
                         for(i=0;i<p;i++)
                         {
                             printf("��%d����: ",i+1);
                           scanf("%d",&floor[i]);
                         }
              for(j=0;j<p-1;j++)
                  for(i=0;i<p-1-j;i++)
                  {
                      if(floor[i]<floor[i+1])
                      {
                      t=floor[i];
                       floor[i]=floor[i+1];
                       floor[i+1]=t;
                      }
                  }
                  printf("�����ε�������¥��:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("�ѵ���%d�㣬�ߺ�\n",floor[j]);
                      printf("�˲���û���˽�����?��ѡ��1-2\n");
                      printf("1.����\n");
                      printf("2.����\n");
                      scanf("%d",&h);

                     switch(h)
                      {
                      case 1:
                          printf("�������\n");
                          printf("�����������:\n");
                          scanf("%d",&p1);
                          printf("���ε�����:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               s=s+weight[l];
                        if(s>800)
                           {
                         printf("���أ�����ȥһ����\n");
                         s=s-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("������Ϊ%dkg,δ����\n",s);
                          printf("��������ȥ��¥��:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("�ѵ���%d�㣬�ߺ�\n",floor[m]);
                           continue;

                         }
                          break;
                      case 2:
                          printf("�رյ�����\n");
                          break;
                      }
                  }
                  break;
           case 3:
             return 0;
             break;

         }
    }
    }


    int elevator4()
    {
    int floor[20];
    int i=0;
    int j=0;
    int t;
    int p;
    int c;
    int weight[20];
    int s=0;
    int h;
    int x;
    int l;
    int p1;
    int m;
    srand(time(NULL));
    x=rand()%20;
    while(1)
    {
        printf("1.��¥\n");
        printf("2.��¥\n");
        printf("3.�˳�\n");
     printf("��ѡ��(1-3):");

         scanf("%d",&c);
         switch(c)
         {
         case 1:
             printf("�˵��ݿɷ���ȫ��¥��\n");
             printf("�˵������˿�����20�ˣ����������2000KG\n");
             printf("��ʱ��������%d��,�����ȴ�\n",x);
            printf("�����������ݵ�����:\n");
             scanf("%d",&p);
             printf("���ǵ�����������:\n");
             for(i=0;i<p;i++)
             {
                printf("��%d����: ",i+1);
                scanf("%d",&weight[i]);
                s=s+weight[i];
                    if(s>2000)
                    {
                         printf("���أ�����ȥһ����");
                         s=s-weight[p];
                    p=p-1;
                    }
             }
                printf("������Ϊ%dkg,δ����\n",s);


                      printf("����������ȥ��¥��:\n");
                         for(i=0;i<p;i++)
                         {
                             printf("��%d����: ",i+1);
                           scanf("%d",&floor[i]);
                         }
              for(j=0;j<p-1;j++)
                  for(i=0;i<p-1-j;i++)
                  {
                      if(floor[i]>floor[i+1])
                      {
                      t=floor[i];
                       floor[i]=floor[i+1];
                       floor[i+1]=t;
                      }
                  }
                      printf("�����ε�������¥��:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("�ѵ���%d�㣬�ߺ�\n",floor[j]);
                      printf("�˲���û���˽�����?��ѡ��1-2\n");
                      printf("1.����\n");
                      printf("2.����\n");
                      scanf("%d",&h);

                     switch(h)
                      {
                      case 1:
                          printf("�������\n");
                           printf("�����������:\n");
                          scanf("%d",&p1);
                          printf("���ε�����:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               s=s+weight[l];
                        if(s>800)
                           {
                         printf("���أ�����ȥһ����\n");
                         s=s-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("������Ϊ%dkg,δ����\n",s);
                          printf("��������ȥ��¥��:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("�ѵ���%d�㣬�ߺ�\n",floor[m]);
                           continue;

                         }
                          break;
                      case 2:
                          printf("�رյ�����\n");
                          break;
                      }
                  }
                  break;


         case 2:


             printf("�˵��ݷ���ȫ��¥��\n");
             printf("�˵������˿�����20�ˣ����������2000KG\n");
             printf("��ʱ��������%d��,�����ȴ�\n",x);
             printf("�����������ݵ�����:\n");
             scanf("%d",&p);
             printf("���ǵ�����������:\n");
             for(i=0;i<p;i++)
             {
                printf("��%d����: ",i+1);
                scanf("%d",&weight[i]);
                s=s+weight[i];
                   if(s>2000)
                   {
                    printf("���أ�����ȥһ����");
                    s=s-weight[i];
                p=p-1;
                   }

             }
             printf("������Ϊ%dkg,δ����\n",s);

                      printf("����������ȥ��¥��:\n");
                         for(i=0;i<p;i++)
                         {
                            printf("��%d����: ",i+1);
                           scanf("%d",&floor[i]);
                         }
              for(j=0;j<p-1;j++)
                  for(i=0;i<p-1-j;i++)
                  {
                      if(floor[i]<floor[i+1])
                      {
                      t=floor[i];
                       floor[i]=floor[i+1];
                       floor[i+1]=t;
                      }
                  }
                     printf("�����ε�������¥��:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("�ѵ���%d�㣬�ߺ�\n",floor[j]);
                      printf("�˲���û���˽�����?��ѡ��1-2\n");
                      printf("1.����\n");
                      printf("2.����\n");
                      scanf("%d",&h);

                     switch(h)
                      {
                      case 1:
                          printf("�������\n");
                           printf("�����������:\n");
                          scanf("%d",&p1);
                          printf("���ε�����:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               s=s+weight[l];
                        if(s>800)
                           {
                         printf("���أ�����ȥһ����\n");
                         s=s-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("������Ϊ%dkg,δ����\n",s);
                          printf("��������ȥ��¥��:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("�ѵ���%d�㣬�ߺ�\n",floor[m]);
                           continue;

                         }
                          break;
                      case 2:
                          printf("�رյ�����\n");
                          break;
                      }
                  }
                  break;
         case 3:
             return 0;
             break;
         }
    }
    }

    void main()
    {
        int a;
    while(1)
        {

        printf("��ӭʹ�õ���\n");
        printf("1.����1�ŵ���\n");
        printf("2.����2�ŵ���\n");
        printf("3.����3�ŵ���\n");
        printf("4.����4�ŵ���\n");
        printf("5.�˳�\n");
        printf("��ѡ��(1-5):");

         scanf("%d",&a);

         getchar();

         switch(a)

         {
         case 1:
             elevator1();
             break;
         case 2:
            elevator2();
             break;

         case 3:
               elevator3();
               break;
         case 4:
            elevator4();
             break;
         case 5:
             exit(0);
             break;
         }
    }
    }