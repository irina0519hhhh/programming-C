// Функция для вычисления периметра треугольника
double per_tr (double a, double b, double c)
{
    if (a < 0 || b < 0 || c < 0)
  {
      return 0;
  }
  return a + b + c;
}