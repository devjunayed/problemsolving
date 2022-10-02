import java.util.Scanner;
public class watermelon {
    


    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int w;
        w = input.nextInt();

        if(w > 2 && w%2 == 0){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
}
}
