import java.util.Scanner;
import java.math.BigInteger;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner (System.in);
		BigInteger a;
		BigInteger b = new BigInteger("0");

		while (sc.hasNext()){
			a = sc.nextBigInteger();
			b = b.add(a);

			if(a.compareTo(a)==0){
				break;
    		}
    	System.out.println(b);
		}
	}
}