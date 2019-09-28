class Object
{
  static int count;
   Object()
   {
    System.out.println("Object Is Created");
    count++;
   }
}
class ObjectCount
{
	public static void main(String []args)
	{
      Object obj1=new Object();
      Object obj2=new Object();
      Object obj3=new Object();
      Object obj4=new Object();
	System.out.println("The number of times objects created is:- "+obj1.count);
    }
}