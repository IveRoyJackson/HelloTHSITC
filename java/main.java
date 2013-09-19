class Greeter {
	String name;

	public Greeter(String name) {
		this.name=name;
	}

	public doGreet() {
		System.out.println("Hello, "+name+";");
	}

	public static void main(String args[]) {
		Greeter greeter=new Greeter("THSITC");
		greeter.doGreet();
	}
}