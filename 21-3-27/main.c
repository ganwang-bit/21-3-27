////#include <stdio.h>
////#include <stdlib.h>
////
////int main()
////{
////    printf("Hello world!\n");
////    return 0;
////}
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//int main()
//{
//    int n,tmp=2,i,flag=1,t;
//    int arr[10000]={0};
//    scanf("%d",&n);
//    t=n;
//    for(i=2;i<sqrt(n);i++)
//    {
//        if(n%i==0)
//            break;
//    }
//    if(i>=sqrt(n))
//    {
//        printf("%d = %d",n,n);
//        exit(0);
//    }
//    while(n!=1)
//    {
//        if(n%tmp==0)
//        {
//            arr[tmp]++;
//            n=n/tmp;
//            tmp=2;
//        }
//        else
//        {
//            while(flag)
//            {
//                tmp++;
//                for(i=2;i<sqrt(tmp);i++)
//                {
//                    if(n%i==0)
//                        break;
//                }
//                if(i>=sqrt(tmp))
//                    flag=0;
//            }
//            flag=1;
//        }
//    }
//    printf("%d =",t);
//    flag=1;
//    for(i=0;i<10000;i++)
//        if(arr[i]&&!flag)
//        {
//            if(arr[i]!=1)
//                printf(" * %d^%d",i,arr[i]);
//            else
//                printf(" * %d",i);
//        }
//        else if(flag&&arr[i])
//        {
//            if(arr[i]!=1)
//                printf(" %d^%d",i,arr[i]);
//            else
//                printf(" %d",i);
//            flag=0;
//        }
//    return 0;
//}
