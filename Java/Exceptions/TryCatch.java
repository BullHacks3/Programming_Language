class TryCatchExample
{
	void DivideZero()
	{
	  int a,b;
	try
	{
		a=10;
		b=0;
      int c=a/b;
	}
    catch(Exception e)
    {
    	System.out.println("The Exception Occurs is:- "+ e);
    }
   }
}
class TryCatch
{
	public static void main(String []args)
	{
        TryCatchExample obj=new TryCatchExample();
        obj.DivideZero();
	}
}