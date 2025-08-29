
import java.util.*;
class Printpatterfjf
{
    
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int a,b,n;
        n=5;
        for(a=n;a>=1;a--){
                for(b=1;b<a;b++)
                    System.out.print(" ");
                System.out.print("*");
                if(a==5 || a==1){
                    for(b=2;b<n;b++)
                    System.out.print("*");
                }
                else if(a==4 || a==3 || a==2){
                    for(b=1;b<=3;b++)
                    System.out.print(" ");
                }
                System.out.print("*");
            System.out.println();
        }
    }
}

