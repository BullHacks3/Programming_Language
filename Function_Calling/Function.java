import java.util.Scanner;
class Function
{
	int a;
	String k;
	float b;

	static void integer (int a)
	{
		System.out.println("The value of a is:-" + a);
	}
 static void string(String k)
  {
  	System.out.println("The value of string is:- " + k);
  }

 static void decimal(float b)
{
	System.out.println("The value of decimal is:- " + b);
}

public static void main(String []args)
{
	int a;
	String k;
	float b;
	Scanner obj=new Scanner(System.in);
    System.out.println("Enter the value of string (k):-");
    k=obj.nextLine();
    System.out.println("Enter the value of integer (a):- ");
    a=obj.nextInt();
    System.out.println("Enter the value of decimal (b) :-");
    b=obj.nextFloat();
    integer(a);
    string(k);
    decimal(b);

}
}