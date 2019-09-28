import java.util.Scanner;
class StaticSame
{
   static void example(int a)
   {
   	System.out.println("Static Method Is Called");
   	System.out.println("The value of entered integer is:- "+ a);
   }



	public static void main(String []args)
	{
       int a;
       Scanner obj=new Scanner(System.in);
       System.out.print("Entered the value of an integer (i.e a ):- ");
       a=obj.nextInt();
       example(a);
	}
}