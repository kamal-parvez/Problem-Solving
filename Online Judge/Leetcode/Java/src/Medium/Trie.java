package Medium;
import java.util.Arrays;

//LeetCode Problem No. - 208
//Trie Implementation

public class Trie {
    public int alphabetSize = 26;
    Node root;

    class Node {
        boolean endWord;
        Node[] children;

        public Node(){
            endWord = false;
            children = new Node[alphabetSize];
            Arrays.fill(children, null);
        }
    }

    public Trie(){
        root = new Node();
    }

    public void insert(String word){
        Node currentNode = root;
        int length = word.length();

        for(int i=0; i<length; i++){
            int index = word.charAt(i) - 'a';
            if(currentNode.children[index] == null){
                currentNode.children[index] = new Node();
            }
            currentNode = currentNode.children[index];
        }

        currentNode.endWord = true;
    }


    public boolean search(String word){
        Node currentNode = root;
        int length = word.length();

        for(int i=0; i<length; i++){
            int index = word.charAt(i) - 'a';
            if(currentNode.children[index] == null){
                return false;
            }
            currentNode = currentNode.children[index];
        }
        return currentNode.endWord;
    }

    public boolean startsWith(String prefix) {
        Node currentNode = root;
        int length = prefix.length();

        for(int i=0; i<length; i++){
            int index = prefix.charAt(i) - 'a';
            if(currentNode.children[index] == null){
                return false;
            }
            currentNode = currentNode.children[index];
        }
        return true;
    }
}
