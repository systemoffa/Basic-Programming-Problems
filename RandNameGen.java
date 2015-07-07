package com.company;

import java.util.Random;
import java.lang.*;

enum NameFirst{
    Jackson, Aiden, Liam, Lucas, Noah, Mason, Ethan, Caden, Jacob, Logan
}

enum NameLast{
    Smith, Johnson, Williams, Brown, Jones, Miller, Davis, Garcia, Rodriguez, Wilson
}

public class Main {

    public static void main(String[] args) {
        Random rand = new Random();
        System.out.println(" Your name is : " + NameFirst.values()[rand.nextInt(10)] + " "  + NameLast.values()[rand.nextInt(10)]);
    }
}
