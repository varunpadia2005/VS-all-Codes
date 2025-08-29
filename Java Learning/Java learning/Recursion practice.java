import java.util.*;
class recursion1{
    public static void printnum(int a,int x,int n,int p){
        if(a>n){
            System.out.println(p);
            return;
        }
        if(n==0){
            System.out.println("1");
            return;
        }
        if(x==0){
            System.out.println("0");
            return;
        }
        p*=x;
        printnum(a+1,x,n,p);
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n,x,p=1;
        System.out.println("Enter the no. whose power we want");
        x=sc.nextInt();
        System.out.println("Enter the no. of terms we want");
        n=sc.nextInt();
        int a=1;
        printnum(a,x,n,p);
    }
}