class Overload
{
  void hello()
  {
  	System.out.println("The Parent Class Method is Called");
  }
}


class MethodOverriding extends Overload
{
    void hello()
    {
    	System.out.println("The parent class method hello has been overriden");
    }	

	public static void main(String []args)
	{
       MethodOverriding obj=new MethodOverriding();
       obj.hello();
	}
}