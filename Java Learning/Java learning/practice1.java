import java.util.*;
class numberscouh{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int i,c=0,a=0,b=1,n;
        System.out.println("Enter the no. of elements we want to see in fibonacci series");
        n=sc.nextInt();
        System.out.print("0 1 ");
        for(i=0;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
            System.out.print(c+" ");

        }
    }
}
