import java.util.*;
class numbercommon{
    public static int count(int a,int b){
        int g=1,i,m;
        if(a>b)
        m=b;
        else;
        m=a;
        for(i=1;i<=m;i++)
        if(a%i==0 && b%i==0)
        g=g*i;
        return g;
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        System.out.println("Greatest common divisor in "+b+" & "+a+" is "+count(a,b));

    }
}
