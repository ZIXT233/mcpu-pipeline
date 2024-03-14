void print(int num){ 
    *((volatile int*)0xBFD08000)=num;
}
void seg7Sb(unsigned char seg,int dig){
    *((volatile char*)0xBFD08100+dig)=seg;
}


unsigned char seg[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
void segShow(int *arr){
    for (int i = 0; i < 7; i++)
    {
        seg7Sb(seg[arr[i]],i);
    }
    for(volatile int i=0;i<1000;i++) for(volatile int j=0;j<5000;j++);
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
        segShow(arr);
    }

    arr[left] = arr[i];
    arr[i] = tmp;
    segShow(arr);
    QkSort(arr, left, i - 1);
    QkSort(arr, i + 1, right);
 
}

int A[7]={2,3,4,0,1,7,5};


int main()
{
    int len=7;
    int arr[7];
    for (int i = 0; i <=len-1; i++)
    {
        arr[i]=A[i];
        print(arr[i]);
    }
    segShow(arr);
    print(-1);
    QkSort(arr,0,len-1);//调用快速排序函数
    for (int i = 0; i <=len-1; i++)
    {
        print(arr[i]);
    }
    segShow(arr);
    for(;;);
    return 0;
}