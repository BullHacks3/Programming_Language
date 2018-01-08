interface Father1
{
	void Fname();
}
interface Mother1
{
	void Mname();
}
class Child1 implements Mother1,Father1
{
  Child1()
  {
  	System.out.println("Child Class is called");
  }

  public void Fname()
  {
  	System.out.println("The Fname function is called");
  }
  public void Mname()
  {
  	System.out.println("The Mname function is called");
  }
}


class Multiple
{
	public static void main(String []args)
	{
		Child1 obj=new Child1();
		obj.Fname();
		obj.Mname();

	}
}