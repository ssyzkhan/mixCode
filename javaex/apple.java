import java.util.Scanner;
class apple{
	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		tuna tunaObject = new tuna();
		System.out.println("Enter your name here: ");
		String temp=input.nextLine();
		tunaObject.setName(temp);		
		tunaObject.saying();
	}
}