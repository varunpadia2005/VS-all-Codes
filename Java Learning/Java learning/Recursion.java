import java.util.*;
class recursion{
    public static void printnum(int a,int n,int b,int c){
        if(a>n-2){
            return;
        }
        int d=b+c;
        b=c;
        c=d;
        System.out.println(d);
        printnum(a+1,n,b,c);
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n;
        System.out.println("Enter the no. of terms we want");
        n=sc.nextInt();
        int a=1;
        System.out.println("0");
        System.out.println("1");
        int b=0,c=1;
        printnum(a,n,b,c);
    }
}