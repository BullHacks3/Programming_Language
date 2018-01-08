//This Keyword is used to access the value of global
//variable when the name of local and global variable is same
class ThisExample
{
	int a;//Global Variable w.r.t Function
	ThisExample(int a) 
	{
      this.a=a+10;
	System.out.println("The value of local variable (here a) is:-"+a);
	System.out.println("The value of global variable (here a) is :-"+this.a);
	}
   public static void main(String []args)
	{
      ThisExample obj=new ThisExample(20);
	}
}