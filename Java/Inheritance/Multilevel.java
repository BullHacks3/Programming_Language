class Grandparent
{
	Grandparent()
	{
		System.out.println("Grandparent Class is called");
	}
}

class Parent extends Grandparent
{
	Parent()
	{
		System.out.println("Parent Class is called");
	}
}

class Child extends Parent
{
	Child()
	{
		System.out.println("Child Class is called");
	}
}

class Multilevel
{
	public static void main(String []args)
	{
          Child obj=new Child();
	}
}