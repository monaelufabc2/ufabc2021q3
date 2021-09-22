public class Teste
{
    public static void main(String[] args)
    {
        int a = 10;
        System.out.println("Antes de soma(): a=" + a);
        soma(a);
        System.out.println("Depois de soma(): a=" + a);
    }

    public static void soma(int a)
    {
        System.out.println("Chegando em soma(): a=" + a);
        a = a + 1;
        System.out.println("Saindo de soma(): a=" + a);
    }
}