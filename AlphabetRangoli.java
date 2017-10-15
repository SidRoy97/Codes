import java.util.*;

public class AlphabetRangoli{
	public static void main(String[] args) {
		Scanner inp = new Scanner(System.in);

		int n = inp.nextInt();

		String string = "";

		ArrayList<String> stuff = new ArrayList<String>();

		// Initiate str with -'s

		int i;
		int starting_num = n + (n - 1);
		for(i=0; i<starting_num; ++i){
			string += "-";
		}

		char[] str = string.toCharArray();

		// Start Doing stuff in a loop

		int cutTill = 1;

		int startAlphabet = 96 + n;

		for(i=(string.length() - 1); i>=0; i -= 2){
			int j = i;

			while(j < (string.length() - 1)){
				str[j] = str[j+2];
				j += 2;
			}

			if(j == (string.length() - 1)){
				str[j] = (char) startAlphabet;
				startAlphabet -= 1;
			}

			String string1 = String.valueOf(str);


			String reverse = new StringBuffer(string1.substring(0, (string.length() - 1))).reverse().toString();


			string1 += reverse;

			System.out.println(string1);
			if(i != 0){
				stuff.add(string1);
			}
		}
		for(i=(stuff.size() - 1); i>=0; --i){
			System.out.println(stuff.get(i));
		}
	}
}