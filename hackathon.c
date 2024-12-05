#include<stdio.h>
int main(){
    int arr[100];
    int n = 0;
    int vitri,value = 0;
    int luachon = 0;
        while (1)
        {
            printf("1. Nhap va gan gia tri cho mang\n");
            printf("2. In ra gia tri ca phan tu \n");
            printf("3. Dem so luong so hoan hao trong mang\n");
            printf("4. Tim ra gia tri lon thu 2 trong mang\n");
            printf("5. Them phan tu vao vi tri\n");
            printf("6. Xoa phan tu\n");
            printf("7. Xap xep mang theo thu tu tang dan\n");
            printf("8. Tim kiem phan tu\n");
            printf("9. Sap xep lai mang va in ra so chan duong truoc so le dung sau\n");
            printf("10. Dao nguoc ca thu tu ca phan tu trong mang\n");
            printf("11. Thoat\n");
            int luachon = 0;
            arr[n];
            while (luachon < 1 || luachon > 12)
            {  
                
                 printf("Lua chon cua bn la: ");
                 scanf("%d",&luachon);
            }
            printf("----------------------------------------------------------------------\n");
            if (luachon == 1)
            {
                while (n < 1)
                {
                    printf("hay nhap vao kich thuoc mang: ");
                    scanf("%d",&n);
                }
                for (int i = 0; i < n; i++)
                {
                    printf("hay nhap vao gia tri cho mang: ");
                    scanf("%d",&arr[i]);
                }
                arr[n];
                printf("----------------------------------------------------------------------\n");
            }else if (luachon == 2)
            {
                for (int i = 0; i < n; i++)
                {
                    printf("arr[%d]= %d \n",i,arr[i]);
                }
                printf("----------------------------------------------------------------------\n");
            }else if (luachon == 3)
            {
                
            }else if (luachon == 4)
            {
                int num[n];
                for (int i = 0; i < n; i++)
                {
                    num[i] = arr[i];
                }
                for (int i = 0; i < n; i++)
                {
                    for (int j = i + 1; j < n; j++)
                    {
                        if (num[j] > num[i])
                        {

                            int temp = num[j];
                            num[i] = num[j];
                            num[j] = temp;
                        }
                        
                    }
                }
                printf("so lon thu hai trong mang la: %d\n",num[1]);
                printf("----------------------------------------------------------------------\n"); 
            }else if (luachon == 5)
            {
               do
               {
                printf("hay nhap vao vi tri bn muon them:");
                scanf("%d",&vitri);
               } while (vitri<1);
                printf("hay nhap vao gia tri bn muon them: ");
                scanf("%d",&value);
                for (int i = n+1; i < vitri; i--)
                {
                    arr[i] = arr[i - 1];
                }
                arr[vitri] = value;
                n++;
                printf("----------------------------------------------------------------------\n");
            }else if (luachon == 6)
            {
                vitri = 0;
                 while (vitri < 1)
                {
                    printf("hay nhap vao vi tri bn muon xoa: ");
                    scanf("%d",&vitri);
                }
                for (int i = vitri; i < n; i++)
                {
                    arr[i] = arr[i + 1];
                }
                n--;
            printf("----------------------------------------------------------------------\n");
            }else if (luachon == 7)
            {
                for (int i = 1; i < n; i++)
                {
                   int key = arr[i];
                   int j = i - 1;
                   while (j >=0 && key<arr[j])
                    {
                        arr[j+1] = arr[j];
                        j = j - 1;
                    }
                    arr[j + 1] = key;
                }
            printf("----------------------------------------------------------------------\n");
         }else if (luachon == 8)
            {
                int strat=0;
                int end = n-1;
                int mid = (end + strat)/2;
                int vlu = 0;
                int count = 0;
                printf("hay nhap gia tri bn muon tim: ");
                scanf("%d",&vlu);
                while (strat<=end)
                {
                    if (mid = vlu)
                    {
                        count++;
                        break;
                    }else if (mid < vlu)
                    {
                        end = mid - 1;
                    }else if (mid < value)
                    {
                        strat = mid + 1;
                    }
                }
                if (count == 0)
                {
                    printf("co phan tu bn muon tim trong mang");
                }else
                {
                    printf("%d ko trong mang",vlu);
                }
                printf("----------------------------------------------------------------------\n");
            }else if (luachon == 9)
            {
                for (int i = 0; i < n-1; i++)
                {
                    int temp = arr[i];
                    for (int j = i + 1; j < n; j++)
                    {
                        if (arr[j]%2==0)
                        {
                            temp = arr[j];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
                printf("----------------------------------------------------------------------\n");
            }else if (luachon == 10)
            {
                int a[n];
                for (int i = 0; i < n; i++)
                {
                    a[i] = arr[i];
                }
                for (int i = n; i > 0; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        arr[j] = a [i];
                    } 
                }
                printf("----------------------------------------------------------------------\n");
            }else if (luachon == 11)
            {
                break;
            }   
        }
    return 0;
}