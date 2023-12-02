// Type your code here, or load an example.
__asm__("j main\n\t"
        "li $sp,0x3000");

typedef unsigned char uchar;
void print(int num){ 
    *((volatile int*)0x8000)=num;
}


void seg7Sb(uchar seg,int dig){
    *((volatile char*)0x8100+dig)=seg;
}
void seg7Sw(uchar n3,uchar n2,uchar n1,uchar n0,int sel){
    int d=(n3<<24)|(n2<<16)|(n1<<8)|n0;
    *((volatile int*)0x8100+sel)=d;
}
void delay_1K(){
    __asm__("addiu $t1,$0,998\n\t"
            "_delay: bne $t1,$0,_delay\n\t"
            "addiu $t1,$t1,-2\n\t"
            "jr $31\n\tnop");
}
void delay_ms(int i){
    while(i--){
        for(int j=0;j<100;j++) delay_1K();
    }
}
int main()
{
    unsigned char seg[10];
    seg[0]=0x3f;
    seg[1]=0x06;
    seg[2]=0x5b;
    seg[3]=0x4f;
    seg[4]=0x66;
    seg[5]=0x6d;
    seg[6]=0x7d;
    seg[7]=0x07;
    seg[8]=0x7f;
    seg[9]=0x6f;
    unsigned char k=1;
    int b=1;

    seg7Sw(seg[2],seg[2],seg[3],seg[3],1);
    seg7Sw(seg[1],seg[1],seg[4],seg[5],0);
    for(;;){
        print(k);
        seg7Sb(seg[b],1);
        k<<=1;
        if(++b>9)b=0;
        if(!k) k=1;
        delay_ms(2000);
    };
    return 0;
}