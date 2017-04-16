int main(){
    int i,j,k,a,b,c;
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++){
        for(j=0;j<i+1;j++){
            if(i==0 || i==1 || i==a-1 || j==0 || j==b-1 || j==b-j){
                printf("@");
            }
            else{
                printf(" ");
            }


        }
            printf("\n");
    }






    return 0;
}
