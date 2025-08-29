import java.util.*;
class string12{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        String s1;
        int len,i,c=0;
        s1=sc.nextLine();
        len=s1.length();
        for(i=0;i<len;i++){
        System.out.println(s1.charAt(i));
        c++;
        }
        System.out.println("The no. of char in the word is "+c);
    }
}