package Implementation;


public class Trie {
    public int alphabetSize = 26;
    Node root;

    public Trie(){
        root = new Node(alphabetSize);
    }

    public void insert(String word){
        Node currentNode = root;
        int length = word.length();

        for(int i=0; i<length; i++){
            int index = word.charAt(i) - 'a';
            if(currentNode.children[index] == null){
                currentNode.children[index] = new Node(alphabetSize);
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
}
