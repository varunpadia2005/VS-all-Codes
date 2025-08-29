import java.util.*;
class sortingar{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int l,i,j,d;
        System.out.println("Enter the length of the array");
        l=sc.nextInt();
        int sary[]=new int[l];
        System.out.println("Enter the values of the array one by one");
        for(i=0;i<l;i++){
            sary[i]=sc.nextInt();
        }
        for(i=0;i<l-1;i++){
            for(j=0;j<(l-i-1);j++){
                if(sary[j]>sary[j+1]){
                    d=sary[j];
                    sary[j]=sary[j+1];
                    sary[j+1]=d;
                }
            }
        }
        System.out.println("The sorted array is");
        for(i=0;i<l;i++)
        System.out.println(sary[i]);
    }
}