// Type your code here, or load an example.
__asm__("li $sp,0x3000\n\t"
        "j main\n\t");

void print(int num){ 
    *((volatile int*)0x8000)=num;
}
void QkSort(int *arr, int left, int right){
    if (left > right)
    {
        return;
    } 
    int tmp = arr[left];
    int i = left; 
    int j = right;   
  
    while (i != j)
    {   
        while (arr[j] >= tmp && j > i)
        {
            j--;
        }
         
        while (arr[i] <= tmp && j > i)
        {
            i++;
        }
 
        if (j > i) 
        {
            int t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    }

    arr[left] = arr[i];
    arr[i] = tmp;

    QkSort(arr, left, i - 1);
    QkSort(arr, i + 1, right);
 
}


int main()
{
    int arr[7];
    arr[0]=2,arr[1]=3;arr[2]=4;
    arr[3]=1,arr[4]=0,arr[5]=7,arr[6]=5;
    int len=7;
    for (int i = 0; i <=len-1; i++)
    {
        print(arr[i]);
    }
    print(-1);
    QkSort(arr,0,len-1);//调用快速排序函数
    for (int i = 0; i <=len-1; i++)
    {
        print(arr[i]);
    }
    for(;;);
    return 0;
}