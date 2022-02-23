#include <iostream>
#include <iomanip>
#include <ios>

int main(int argc, char** argv)
{
    std::cout << "Hello";
    std::cout << "World";
    std::cout << std::endl;
    std::cout << "-----------" << std::endl;

    std::cout << "HelloWorld\n";
    std::cout << "-----------" << std::endl;

    std::cout << std::endl;
    std::cout << "this is a nice message..." << std::endl << std::flush;
    std::cout << std::endl;
    
    std::cout << "Unformatted table : " << std::endl;
    std::cout << "Daniel" << " " << "Gray" << " 25" << std::endl; 
    std::cout << "Stanley" << " " << "Woods" << " 25" << std::endl; 
    std::cout << "Jordan" << " " << "Parker" << " 25" << std::endl; 
    std::cout << "Joe" << " " << "Ball" << " 25" << std::endl; 
    std::cout << "Josh" << " " << "Carr" << " 25" << std::endl; 
    std::cout << std::endl;

    std::cout << "Formatted table : " << std::endl;
    std::cout << std::setw(10) << "Daniel" << std::setw(10) << "Gray" << std::setw(10) << "25" << std::endl; 
    std::cout << std::setw(10) << "Stanley" << std::setw(10) << "Woods"<< std::setw(10) << "25" << std::endl; 
    std::cout << std::setw(10) << "Jordan" << std::setw(10) << "Parker"<< std::setw(10) << "25" << std::endl; 
    std::cout << std::setw(10) << "Joe" << std::setw(10) << "Ball"<< std::setw(10) << "25" << std::endl; 
    std::cout << std::setw(10) << "Josh" << std::setw(10) << "Carr"<< std::setw(10) << "25" << std::endl; 
    std::cout << std::endl;

    int width{20};
    std::cout << std::left; //左对齐
    std::cout << "Formatted table with variable width: " << std::endl;
    std::cout << std::setw(width) << "Daniel" << std::setw(width) << "Gray" << std::setw(width) << "25" << std::endl; 
    std::cout << std::setw(width) << "Stanley" << std::setw(width) << "Woods"<< std::setw(width) << "25" << std::endl; 
    std::cout << std::setw(width) << "Jordan" << std::setw(width) << "Parker"<< std::setw(width) << "25" << std::endl; 
    std::cout << std::setw(width) << "Joe" << std::setw(width) << "Ball"<< std::setw(width) << "25" << std::endl; 
    std::cout << std::setw(width) << "Josh" << std::setw(width) << "Carr"<< std::setw(width) << "25" << std::endl; 
    std::cout << std::endl;

    std::cout << std::right; //右对齐
    std::cout << "Formatted table with variable width: " << std::endl;
    std::cout << std::setw(width) << "Daniel" << std::setw(width) << "Gray" << std::setw(width) << "25" << std::endl; 
    std::cout << std::setw(width) << "Stanley" << std::setw(width) << "Woods"<< std::setw(width) << "25" << std::endl; 
    std::cout << std::setw(width) << "Jordan" << std::setw(width) << "Parker"<< std::setw(width) << "25" << std::endl; 
    std::cout << std::setw(width) << "Joe" << std::setw(width) << "Ball"<< std::setw(width) << "25" << std::endl; 
    std::cout << std::setw(width) << "Josh" << std::setw(width) << "Carr"<< std::setw(width) << "25" << std::endl; 
    std::cout << std::endl;

    std::cout << "Internal justified : " << std::endl;
    std::cout << std::right; //整体右对其
    std::cout << std::setw(width) << -123.45 << std::endl;
    std::cout << std::internal; //负号左对齐，数字右对齐
    std::cout << std::setw(width) << -123.45 << std::endl;

    std::cout << std::left;
    std::cout << std::setfill('*'); //空白处用*填充
    std::cout << "Formatted table with fill: " << std::endl;
    std::cout << std::setw(width) << "Daniel" << std::setw(width) << "Gray" << std::setw(width) << "25" << std::endl; 
    std::cout << std::setw(width) << "Stanley" << std::setw(width) << "Woods"<< std::setw(width) << "25" << std::endl; 
    std::cout << std::setw(width) << "Jordan" << std::setw(width) << "Parker"<< std::setw(width) << "25" << std::endl; 
    std::cout << std::setw(width) << "Joe" << std::setw(width) << "Ball"<< std::setw(width) << "25" << std::endl; 
    std::cout << std::setw(width) << "Josh" << std::setw(width) << "Carr"<< std::setw(width) << "25" << std::endl; 
    std::cout << std::endl;


    bool condition{true};
    bool other_condition{false};
    std::cout << "condition: " << condition << std::endl;
    std::cout << "other condition: " << other_condition << std::endl;
    std::cout << std::endl;
    std::cout << std::boolalpha;
    std::cout << "condition: " << condition << std::endl;
    std::cout << "other condition: " << other_condition << std::endl;
    std::cout << std::endl;
    std::cout << std::noboolalpha;
    std::cout << "condition: " << condition << std::endl;
    std::cout << "other condition: " << other_condition << std::endl;

    int pos_num {34};
    int neg_num {-45};
    std::cout << "pos_num: " << pos_num << std::endl;
    std::cout << "neg_num: " << neg_num << std::endl;
    std::cout << std::endl;
    std::cout << std::showpos; //强制显示正负号
    std::cout << "pos_num: " << pos_num << std::endl;
    std::cout << "neg_num: " << neg_num << std::endl;
    std::cout << std::endl;
    std::cout << std::noshowpos; //取消强制显示正负号
    std::cout << "pos_num: " << pos_num << std::endl;
    std::cout << "neg_num: " << neg_num << std::endl;

    int pos_int{717171};
    int neg_int{-47347};
    double double_var{498.32};
    std::cout << std::endl;
    std::cout << std::uppercase; //大写字符
    std::cout << "default base format: " << std::endl;
    std::cout << "pos_int: " << pos_int << std::endl;
    std::cout << "neg_int: " << neg_int << std::endl;
    std::cout << "double_var: " << double_var << std::endl;

    std::cout << std::endl;
    std::cout << "pos_int in different bases: " << std::endl;
    std::cout << "pos_int(dec): " << std::dec << pos_int << std::endl;
    std::cout << "pos_int(hex): " << std::hex << pos_int << std::endl;
    std::cout << "pos_int(oct): " << std::oct << pos_int << std::endl;

    std::cout << std::endl;
    std::cout << "neg_int in different bases: " << std::endl;
    std::cout << "neg_int(dec): " << std::dec << neg_int << std::endl;
    std::cout << "neg_int(hex): " << std::hex << neg_int << std::endl;
    std::cout << "neg_int(oct): " << std::oct << neg_int << std::endl;

    std::cout << std::endl;
    std::cout << "double_var in different bases: " << std::endl;
    std::cout << "double_var(dec): " << std::dec << double_var << std::endl; 
    std::cout << "double_var(hex): " << std::hex << double_var << std::endl;
    std::cout << "double_var(oct): " << std::oct << double_var << std::endl;

    double a{3.1415926535897932384626433832795};
    double b{2006.0};
    double c{1.34e-10};

    std::cout << std::endl;
    std::cout << "double values (default : use scientific when necessary)" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (fixed)" << std::endl;
    std::cout << std::fixed;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (scientific)" << std::endl;
    std::cout << std::scientific;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (set back to defaults)" << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    a = 3.1415926535897932384626433832795;
    std::cout << std::endl;
    std::cout << "default precision(6): " << a << std::endl;
    std::cout << std::setprecision(10);
    std::cout << "set precision(10): " << a << std::endl;
    std::cout << std::setprecision(20);
    std::cout << "set precision(20): " << a << std::endl;

    double d{34.1};
    double e{101.99};
    double f{12.0};
    int g{45};

    std::cout << std::endl;
    std::cout << "noshowpoint(default)" << std::endl;
    std::cout << "d: " << d << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "f: " << f << std::endl;
    std::cout << "g: " << g << std::endl;

    std::cout << std::endl;
    std::cout << "showpoint()" << std::endl;
    std::cout << std::showpoint;
    std::cout << "d: " << d << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "f: " << f << std::endl;
    std::cout << "g: " << g << std::endl;
    return 0;
}