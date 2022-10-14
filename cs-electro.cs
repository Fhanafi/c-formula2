using System;
class mencariVolt {
  static void Main() {
    Console.Write("berapa ampere : ");
    double amp = Convert.ToDouble(Console.ReadLine());
    Console.Write("berapa Ohm : ");
    int ohm = Convert.ToInt32(Console.ReadLine());
    double v = amp * ohm;
    Console.WriteLine("hasil = {0} volt", v);
  }
}
