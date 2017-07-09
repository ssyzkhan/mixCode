public class Test{
	public static void main(String[] args){
		Hanoi.count=0;
		char[] current={'A','A','A','A'};
		char A='A',B='B',C='C';
		Hanoi.hanoi(current,4,A,B,C);
	}
}