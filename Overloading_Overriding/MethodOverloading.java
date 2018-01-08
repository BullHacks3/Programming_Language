//Also Known As Compile Time Polymorphism
//One name --> many forms (functionality)
class Example
{
	void area(int l,int b)
	{
		System.out.println("The area of rectangle is:- " + l*b);
	}
	void area(int s)
	{
		System.out.println("The area of sqaure is:- " + s*s);
	}
	void area(double r)
	{
		System.out.println("The area of circle is:- " + 3.14*r*r);
	}
}

class MethodOverloading 
{
	public static void main(String []args)
	{
     Example obj=new Example();
     obj.area(10,20);
     obj.area(10);
     obj.area(1.3);
	}
}