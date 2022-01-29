package Medium;

import java.util.Arrays;

// Leetcode - Problem No. 211
// Design Add and Search Words Data Structure
//Solved using Trie

public class WordDictionaryTrie {
    public int alphabetSize = 26;
    Node root;

    class Node{
        boolean endWord;
        Node[] children;

        Node(){
            endWord = false;
            children = new Node[alphabetSize];
            Arrays.fill(children, null);
        }
    }

    public WordDictionaryTrie(){
        root = new Node();
    }

    public void insert(String word){
        Node currentNode = root;
        int length = word.length();
        int index;

        for(int i=0; i<length; i++){
            index = word.charAt(i) - 'a';
            if(currentNode.children[index] == null){
                currentNode.children[index] = new Node();
            }
            currentNode = currentNode.children[index];
        }
        currentNode.endWord = true;
    }

    public boolean search(String word){
        int length = word.length();
        Node currentNode = root;

        return googleSearch(word, 0, length, currentNode);
    }

    public boolean googleSearch(String word, int i, int length, Node currentNode){
        if(i == length){
            return currentNode.endWord;
        }
        if(currentNode == null){
            return false;
        }


        if(word.charAt(i) != '.'){
            int index = word.charAt(i) - 'a';
            if(currentNode.children[index] == null){
                return false;
            }
            return googleSearch(word, i+1, length, currentNode.children[index]);
        }
        else{
            boolean res = false;
            for(int j=0; j<alphabetSize; j++){
                res |= googleSearch(word, i+1, length, currentNode.children[j]);
            }

            return res;
        }
    }
}
