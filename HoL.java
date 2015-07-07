package com.company;

import java.util.Random;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	    Random rand = new Random();
        Scanner in = new Scanner(System.in);

        while(true){
            int start = rand.nextInt(10) + 1;
            int next = rand.nextInt(10) + 1;

            System.out.println("Your number is: " + start + "\nWill the next number be higher of lower? (1-10)");
            String guess = in.next();

            if((guess.equals("higher") && next <= start) || (guess.equals("lower") && next >= start))
                break;
        }
    }
}
