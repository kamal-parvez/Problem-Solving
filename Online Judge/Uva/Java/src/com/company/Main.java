package com.company;

import java.util.Arrays;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        class Node {
            boolean endMark;
            Node[] child;

            Node(int nodeSize) {
                endMark = false;
                child = new Node[nodeSize];
                Arrays.fill(child, null);
            }
        }

        Node root;
        int nodeSize = 10;


        Scanner scanner = new Scanner(System.in);
        int testCase = scanner.nextInt();
        int totalPhoneNumber;
        String phoneNumber;

        while (testCase > 0) {

            boolean isConsistent = true;
            totalPhoneNumber = scanner.nextInt();
            root = new Node(nodeSize);
            for (int i = 0; i < totalPhoneNumber; i++) {
                phoneNumber = scanner.next();
                if (!isInsertable(phoneNumber)) {
                    isConsistent = false;
                    break;
                }
            }
            if (isConsistent) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }

            testCase--;
        }
        }

        public boolean isInsertable (String phoneNumber){
            int size = phoneNumber.length();
            Node current = root;
            int index;

            for (int i = 0; i < size; i++) {

                index = Integer.parseInt(String.valueOf(phoneNumber.charAt(i)));
                if (current.child[index] != null && current.child[index].endMark == true) {
                    //System.out.println("yyyyy");
                    return false;
                } else if (current.child[index] == null) {
                    //System.out.println("yyyyy0000000");
                    current.child[index] = new Node(nodeSize);
                }

                current = current.child[index];

            }

            for (int i = 0; i < nodeSize; i++) {
                if (current.child[i] != null) {
                    return false;
                }
            }
            current.endMark = true;
            //System.out.println("end: " + current.endMark);

            return true;
        }
    }


    }


    static class PhoneList {
        PhoneList(){

        }

    }
}



