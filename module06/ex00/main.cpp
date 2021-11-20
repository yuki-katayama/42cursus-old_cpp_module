#include <iostream>

#include <iostream>
#include <string>

int main()
{
  // 10進法での変換
  std::cout << "---- decimal point" << std::endl;

  double a = std::stod("1.5"); // std::stod("1.5", nullptr);
  std::cout << a << std::endl;

  double aw = std::stod(L"1."); // std::stod(L"1.", nullptr);
  std::cout << aw << std::endl;

  // 指数表記の変換
  std::cout << "---- base = 8" << std::endl;

  double b = std::stod("0.5e3", nullptr);
  std::cout << b << std::endl;

  double bw = std::stod(L".25e3", nullptr);
  std::cout << bw << std::endl;

  // 16進法での変換
  std::cout << "---- base = 16" << std::endl;

  double c = std::stod("0x1.2P3", nullptr);
  std::cout << c << std::endl;

  double cw = std::stod(L"0x1.2P4", nullptr);
  std::cout << cw << std::endl;

  // 2番目の仮引数の使用例
  std::cout << "---- use of idx parameter" << std::endl;

  std::string es = "30.75%";
  std::size_t ei;
  double e = std::stod(es, &ei);
  std::cout << e << ' ' << es[ei] << std::endl;

  std::wstring ews = L"32%";
  std::size_t ewi;
  double ew = std::stod(ews, &ewi);
  std::cout << ew << ' ' << ewi << std::endl;

  // 文字列先頭に空白がある場合
  std::cout << "---- space character before number" << std::endl;
  std::cout << std::stod("    -1") << std::endl;
  std::cout << std::stod(L"    -.25") << std::endl;
}
