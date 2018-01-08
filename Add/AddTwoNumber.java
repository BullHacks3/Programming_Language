import java.util.Scanner;

class AddTwoNumber
{
	static void add(int a,int b)
	{
   int c;
   c=a+b;
   System.out.println("The addition of numbers i.e "+ a+ " + " + b + " = " + c);
	}
	public static void main(String []args)
	{
       int a,b;
       Scanner obj=new Scanner(System.in);
       System.out.println("Enter the first number:- ");
       a=obj.nextInt();
       System.out.println("Enter the second number:- ");
       b=obj.nextInt();
       add(a,b);
	}
}