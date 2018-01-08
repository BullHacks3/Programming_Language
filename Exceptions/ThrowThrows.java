class ThrowExample
{
	void A() throws ArithmeticException
	{
		throw new ArithmeticException("Exception 1 occurred");
	}

}




class ThrowThrows
{
	public static void main(String []args)
	{
     ThrowExample obj=new ThrowExample();
     try
     {
     	obj.A();
     }
     catch(Exception e)
     {
     	System.out.println("The exception occurred is as follows:- " + e);
     }
     finally
     {
     	System.out.println("The finally block is executed:-");
     }
	}
}