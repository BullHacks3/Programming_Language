abstract class Hello
{
	Hello()
	{
		System.out.println("Hello Constructor of abstract class is called");
	}

	void ShowString()
	{
		System.out.println("The ShowString method of Abstract Class is called");
	}
	abstract void Abstractmethod();
}


class AbstractExample extends Hello
{
     public void Abstractmethod()
     {
     	System.out.println("The Abstract method defined in child class called");
     }

	public static void main(String []args)
	{
           AbstractExample obj=new AbstractExample();
           obj.ShowString();
           obj.Abstractmethod();
	}
}