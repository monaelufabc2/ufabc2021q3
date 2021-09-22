public class Teste
{
    public static void main(String[] args)
    {
        int a;
        a = 10;
        System.out.println("Antes de soma(): a = " + a);
        soma(a);
        System.out.println("Depois de soma(): a = " + a);
    }

    public static void soma(int a)
    {
        System.out.println("No inicio de soma(): a = " + a);
        a = a + 1;
        System.out.println("Ao final de soma(): a = " + a);
    }
}