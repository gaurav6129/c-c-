// import java.util.Scanner;

// public class Practice {
//     // public static void main(String[] args) {
//     public static void main(String[] args) {
//         // int x=10;
//         // int y=25;
//         // int z=x+y;

//         // System.out.println("Sum of x+y = " + z);
//         System.out.println("Take Input");
//         Scanner sc = new Scanner(System.in);
//         System.out.println("enter the first number");
//         int a = sc.nextInt();
//         System.out.println("enter the second number");
//         int b = sc.nextInt();
//         int sum = a + b;
//         System.out.println(sum);

//     }
// }
// import java.util.Scanner;
// public class Practice{
    
//     public static void main(String[] args){
//         System.out.println("Symple two number addition program");
//             Scanner sc = new Scanner(System.in);

//             System.out.print("enter the first number ");
//             int a=sc.nextInt();
//             System.out.println("enter the second number");
//             int b=sc.nextInt();
//             int result=a+b;
//             System.out.println("result are given output screen "+result);
//         }
//     }
import java.util.Scanner;
class Practice{
    public static void main ( String []args ){
        //int i=0;
        //System.out.println("Type any integer and float value");
        // while(i<=2){
        //     System.out.println("Enter any value");
        // Scanner sc=new Scanner(System.in);
        // boolean b1=sc.hasNextInt();//integer value btata hain hasNextInt()
        // System.out.println(b1);
        // i++;
        //}
        System.out.println("Type any string value");
        Scanner sc =new Scanner(System.in);
        String string1=sc.next();
        System.out.println(string1);//only ak string ko print kerta hain .next()
        String string2=sc.nextLine();//sare string print krta hai .nextline()
        System.out.println(string2);
        }
    }