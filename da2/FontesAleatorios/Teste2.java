public class Teste2
{
    public static void main(String[] args)
    {
        int v[] = new int[5], i;

        for(i=0; i<5; i++)
        {
            v[i] = i+1;
        }

        System.out.print("Antes do soma(): v: ");
        for(i=0; i<5; i++)
        {
            System.out.print(v[i] + (i<4?" ":"\n"));
        }

        soma(v);

        System.out.print("Depois do soma(): v: ");
        for(i=0; i<5; i++)
        {
            System.out.print(v[i] + (i<4?" ":"\n"));
        }

    }

    public static void soma(int v[])
    {
        int i;
        for(i=0; i<5; i++)
        {
            v[i] = v[i] + 1;
        }
    }
}