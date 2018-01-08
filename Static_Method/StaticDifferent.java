import java.util.Scanner;
class StaticDifferent 
{
	public static void main(String []args)
	{
       int a;
       Static k=new Static();
       Scanner obj=new Scanner(System.in);
       System.out.print("Entered the value of an integer (i.e a ):- ");
       a=obj.nextInt();
       k.example(a);
	}
}

class Static
{
   static void example(int a)
   {
    System.out.println("Static Method Is Called");
    System.out.println("The value of entered integer is:- "+ a);
   }

}