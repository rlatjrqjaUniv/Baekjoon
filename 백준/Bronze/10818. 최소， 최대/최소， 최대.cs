namespace Problem10807_CSharp
{
    internal class Program
    {
        static void Main()
        {
            int n = int.Parse(Console.ReadLine());

            int[] arr = new int[n];

            string[] t = Console.ReadLine().Split();

            for (int i = 0; i < n; i++)
            {
                arr[i] = int.Parse(t[i]);
            }

            Array.Sort(arr);

            Console.WriteLine($"{arr[0]} {arr[n - 1]}");
        }
    }
}
