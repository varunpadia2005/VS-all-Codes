import java.util.*;
class doubleArray{
    public static void main(String args[]){
    Scanner sc=new Scanner(System.in);
    int i,j,d=0,r,c;
    System.out.println("Enter the no. of rows and coloums in the array");
    r=sc.nextInt();
    c=sc.nextInt();
    int arr[][]=new int[r][c];
    for(i=0;i<r;i++){
    for(j=0;j<c;j++)
    arr[i][j]=sc.nextInt();
    }
    for(j=0;j<c;j++){
    for(i=0;i<r;i++){
        System.out.print(arr[i][j]);
    }
        System.out.println();
    }
    }
}
