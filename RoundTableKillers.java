import java.util.*;

public class RoundTableKillers{
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int n, k, x;
        n = inp.nextInt();
        k = inp.nextInt();
        x = inp.nextInt();

        int killed = 0;
        while(n > 1){
            int kill = (x % k);
            n -= kill;
            x = (x + kill + 1) % 5;
            if(x == 0){
                x = 5;
            }
        }
    }
}
