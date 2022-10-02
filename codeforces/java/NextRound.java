import java.net.ConnectException;
import java.util.Scanner;

public class NextRound {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int contestant, position, count = 0;
        
        contestant = input.nextInt();
        int[] score = new int[contestant];

        position  = input.nextInt();

        for(int i = 0; i < contestant; i++){
            score[i] = input.nextInt();
        }
        for(int i = 0; i < contestant; i++){
            if(score[position-1] <= score[i] && score[position-1] != 0){
                count++;
            }else if(score[position-1] == 0 && score[i] > 0){
                count++;
            }
        }
        System.out.println(count);
    }
}
