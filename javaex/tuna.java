public class tuna{
	private String girlName;
	public void setName(String name){
		girlName = name;
	}
	public String getName(){
		return girlName;
	}
	public void saying(){
		System.out.printf("You first gf was %s", getName());
	}
}