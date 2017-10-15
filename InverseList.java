import java.util.*;

public class InverseList{
	public static void main(String[] args) {
		Scanner inp = new Scanner(System.in);
		int t;
		t = inp.nextInt();

		while(t != 0){
			int n = inp.nextInt();

			long[] list = new long[n];

			int i;

			for(i=0; i<n; ++i){
				list[i] = inp.nextLong();
			}

			/*
			// Display List
			for(i=0; i<n; ++i){
				System.out.printf("%d ", list[i]);
			}
			System.out.println();
			*/

			boolean flag = true;
			i = 0;
			while((i < n) && (flag)){
				if(list[((int)list[i]) - 1] != (i + 1)){
					flag = false;
				}
				++i;
			}

			if(flag){
				System.out.println("inverse");
			}
			else{
				System.out.println("not inverse");
			}

			t--;
		}
	}
}