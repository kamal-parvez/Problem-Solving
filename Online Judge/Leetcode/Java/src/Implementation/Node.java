package Implementation;

import java.util.Arrays;

public class Node {
    boolean endWord;
    Node[] children;

    public Node(int alphabetSize){
        endWord = false;
        children = new Node[alphabetSize];
        Arrays.fill(children, null);
    }
}
