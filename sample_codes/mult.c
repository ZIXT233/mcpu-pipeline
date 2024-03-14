
void print(int num){ 
    *((volatile int*)0x8000)=num;
}



int main()
{
    int i;
    for(i=2;i!=256;i*=i){
        print(i);
    }
    return 0;
}