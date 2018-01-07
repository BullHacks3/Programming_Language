import java.util.Scanner;
class DifferentFunction
{
	public static void main(String []args)
	{
    int a;
	String k;
	float b;
	Function obj1=new Function();
	Scanner obj=new Scanner(System.in);
    System.out.println("Enter the value of string (k):-");
    k=obj.nextLine();
    System.out.println("Enter the value of integer (a):- ");
    a=obj.nextInt();
    System.out.println("Enter the value of decimal (b) :-");
    b=obj.nextFloat();
    obj1.integer(a);
    obj1.string(k);
    obj1.decimal(b);
	}
}
class Function
{
	int a;
	String k;
	float b;

	void integer (int a)
	{
		System.out.println("The value of a is:-" + a);
	}
  void string(String k)
  {
  	System.out.println("The value of string is:- " + k);
  }

  void decimal(float b)
{
	System.out.println("The value of decimal is:- " + b);
}
}