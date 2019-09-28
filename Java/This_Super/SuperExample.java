class Super
{
 int a;
   void add(int b ,int c)
    {
    	System.out.println("The add method of parent class is called");
    	a=b+c;
        System.out.println("The value of a is:- " + a);
    }


}


class SuperExample extends Super
{
    int a;
    void add(int b ,int c)
    {
    	System.out.println("The add method of child class is called");
    	a=c-b;
        System.out.println("The value of a is:- " + a);
    super.add(10,20);
    }

	public static void main(String []args)
	{
	SuperExample obj1=new SuperExample();
	obj1.add(10,20);
	}
}