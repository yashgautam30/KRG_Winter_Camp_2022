class Singleton {
	private static Singleton s_instance = null;
	public int n;

	private Singleton()
	{
		n=97;
	}

	public static Singleton getInstane()
	{
		if (s_instance == null) {
			s_instance = new Singleton();
		}
		return s_instance;
	}
}

class SingletonMain {   
	public static void main(String args[])
	{
		Singleton x = Singleton.getInstane();
		Singleton y = Singleton.getInstane();
		Singleton z = Singleton.getInstane();

		System.out.println("Value of x is " + x.n);
		System.out.println("Value of y is " + y.n);
		System.out.println("Value of z is " + z.n);
		System.out.println("\n");

		y.n = 90;

		System.out.println("Value of x is " + x.n);
		System.out.println("Value of y is " + y.n);
		System.out.println("Value of z is " + z.n);
		System.out.println("\n");
		
		z.n=100;
		
		System.out.println("Value of x is " + x.n);
		System.out.println("Value of y is " + y.n);
		System.out.println("Value of z is " + z.n);
		System.out.println("\n");
	}
}