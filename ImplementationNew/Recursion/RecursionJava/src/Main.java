public class Main {
    public static void main(String[] args) {


        int ara[] =  {96, 44, 25, 37, 61, 8};
        ZobayerHasanBlog blog = new ZobayerHasanBlog();
        blog.printReverseOrder(ara, ara.length-1);
        System.out.println();
        blog.printDiffOrder(ara, 0, ara.length-1);
        System.out.println();


    }
}
