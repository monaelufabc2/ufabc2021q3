public class Teste
{
    public static void main(String[] args)
    {
        int a = 10;
        System.out.println("Antes de Soma(): a = " + a);
        soma(a);
        System.out.println("Depois de Soma(): a = " + a);
    }

    public static void soma(int a)
    {
        System.out.println("a recebido de Main(): a = " + a);
        a = a + 1;
        System.out.println("a depois de operado: a = " + a);
    }
}