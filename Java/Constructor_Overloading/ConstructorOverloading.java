class ConstructorOverloading
{
	int a;
	//Default Constructor
	ConstructorOverloading()
	{
		System.out.println("Default Constructor is Called");
		a=10;
	}
     
     String c;
	//Parameterised Constructor
    ConstructorOverloading(String c,String d)
    {
    	System.out.println("Parameterised Constructor is Called");
    	this.c=c + " " + d;
    }

    //Copy Constructor
    ConstructorOverloading(ConstructorOverloading obj)
    {
        System.out.println("Copy Constructor is Called");
        this.c=obj.c + obj.c;
    }

public static void main(String []args)
{
	int a;
	String c="Hello";
	String d="World";
	//Default Constructor Calling
	ConstructorOverloading obj=new ConstructorOverloading();
    System.out.println("The value of a is:-"+obj.a);
    //Parameterised Constructor
    ConstructorOverloading obj1=new ConstructorOverloading(c,d);
    System.out.println("The value of string is :-"+obj1.c);

    ConstructorOverloading obj2=new ConstructorOverloading(obj1);
    System.out.println("The value of string after copy constructor calling is :- "+obj2.c);
}



}