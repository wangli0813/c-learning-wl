int main(){

    int a,b,c,max;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>max){
        max=a+b;
    }
    if(a+c>max){
        max=a+c;
    }
    if(b+c>max){
        max=b+c;
    }
    printf("%d",max);

    return 0;
}
