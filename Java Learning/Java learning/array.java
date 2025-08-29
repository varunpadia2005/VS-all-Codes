import java.util.*;
class maxminarray{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int i,l,a=0;
        System.out.println("Enter the length of the array ");
        l=sc.nextInt();
        int maxmin[]=new int[l];
        for(i=0;i<l;i++){
            maxmin[i]=sc.nextInt();
        }
        for(i=0;i<l-1;i++){
            if(maxmin[i]<maxmin[i+1])
            a++;
        }
        if(a==l-1)
        System.out.println("The order is in ascending ");
        else if(a!=(l-1))
        System.out.println("The order is not in ascending");
    }
}