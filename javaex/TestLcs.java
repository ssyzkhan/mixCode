public class TestLcs{
	public static void main(String[] args){
		Character[] x={'A','C','C','G','T','C','G','A','A','C','C','G','T','C','G','A','A','C','C','G','T','C','G','A','G','T','C','G','A'},
		y={'A','C','C','G','T','C','G','A','A','C','C','G','T','C','G','A','A','C','C','G','T','C','G','A','G','T','C','G'};
		Integer[] a={389,207,155,300,299,170,158,65},b={389,300,299,207,170,158,155,65};
		int[][] c;
		c=Lcs.lcsLength(x,y);
		Lcs.printLcs(c,x,y,29,28);
		System.out.println();
		
		c=Lcs.lcsLength(a,b);
		Lcs.printLcs(c,a,b,8,8);
		System.out.println();
		
	}

}