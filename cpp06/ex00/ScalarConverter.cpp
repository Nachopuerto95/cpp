#include "ScalarConverter.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter( const ScalarConverter & )
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter & ScalarConverter::operator=( ScalarConverter const & rhs )
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

enum  TYPE {
	INT = 0,
	CHAR = 1,
	FLOAT = 2,
	DOUBLE = 3,
	ERR = 4,
	INF = 5,
	_NAN = 6
};

static bool isInt(std::string str)
{
	size_t npos = 0;

	if (str.at(0) == '-' || str.at(0) == '+')
		npos = 1;
	if (npos == str.length())
		return false;
	while (npos < str.length() && std::isdigit(str[npos]))
		npos++;
	if (str.length() == npos)
		return true;
	return false;
}

static bool isFloat(std::string str)
{
	size_t npos = 0;
	int hasDot  = 0;

	if (str.at(0) == '-' || str.at(0) == '+')
		npos = 1;
	while (npos < str.length() - 1 && (std::isdigit(str[npos]) || str[npos] == '.'))
	{
		if (str[npos] == '.' && !hasDot)
			hasDot = 1;
		else if (str[npos] == '.' && hasDot)
			break ;
		npos++;
	}
	if (npos == str.length() - 1 && str[npos] == 'f' && hasDot)
		return true;
	return false;
}

static bool isDouble(std::string str)
{
	size_t npos = 0;
	int hasDot  = 0;

	if (str.at(0) == '-' || str.at(0) == '+')
		npos = 1;
	while (npos < str.length() && (std::isdigit(str[npos]) || str[npos] == '.'))
	{
		if (str[npos] == '.' && !hasDot)
			hasDot = 1;
		else if (str[npos] == '.' && hasDot)
			break ;
		npos++;
	}
	if (npos == str.length() && hasDot)
		return true;
	return false;
}


static int getPrecision(std::string str)
{
	size_t dot = str.find('.');
	if (dot == std::string::npos)
		return 1;
	size_t end = str.length();
	if (str[end - 1] == 'f')
		end--;
	int prec = static_cast<int>(end - dot - 1);
	return prec < 1 ? 1 : prec;
}

static int checkInput(std::string str)
{
	if (str.empty())
		return ERR;
	if (str.length() == 1 && std::isprint(str.at(0)) && !std::isdigit(str.at(0)))
		return CHAR;
	if (isInt(str))
		return INT;
	if (isFloat(str))
		return FLOAT;
	if (isDouble(str))
		return DOUBLE;
	if (str == "inf" || str == "-inf" || str == "inff" || str == "-inff" || str == "+inf" || str == "+inff")
		return INF;
	if (str == "nan" || str == "nanf")
		return _NAN;
	return ERR;
}

static void printFromInt(std::string str)
{
	long num = std::strtol(str.c_str(), NULL, 10);

	if (num < 0 || num > 127)
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(static_cast<int>(num)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl;
	if (num < std::numeric_limits<int>::min() || num > std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(num) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(num) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(num) << std::endl;
}

static void printFromChar(std::string str)                                                                                                       
{                                                                                                                                                
	char c = str[0];                                                                                                                             
				
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

static void printFromDoubleOrFloat(std::string str)                                                                                                     
{                                                                                                                                                
	double num = std::strtod(str.c_str(), NULL);                                                                                                 
				                                                                                                                                  
	if (num < 0 || num > 127)                                                                                                                    
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(static_cast<int>(num)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl;
	if (num < std::numeric_limits<int>::min() || num > std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(num) << std::endl;
	std::cout << std::fixed << std::setprecision(getPrecision(str));
	std::cout << "float: " << static_cast<float>(num) << "f" << std::endl;
	std::cout << "double: " << num << std::endl;
}

static void printSpecial(std::string str)                                                                                                        
  {                                                                                                                                                
      std::cout << "char: impossible" << std::endl;                                                                                                
      std::cout << "int: impossible" << std::endl;                                                                                                 
                                                                                                                                                   
      if (str == "nanf" || str == "-inff" || str == "+inff" || str == "inff")
      {
          float f = std::strtod(str.c_str(), NULL);
          std::cout << "float: " << f << "f" << std::endl;
          std::cout << "double: " << static_cast<double>(f) << std::endl;
      }
      else
      {
          double d = std::strtod(str.c_str(), NULL);
          std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
          std::cout << "double: " << d << std::endl;
      }
  }



void ScalarConverter::convert(std::string str)
{
	int type = checkInput(str);                                                                                                                  
																																				
	switch (type)
	{
		case CHAR:
			printFromChar(str);
			break;
		case INT:
			printFromInt(str);
			break;
		case FLOAT:
			printFromDoubleOrFloat(str);
			break;
		case DOUBLE:
			printFromDoubleOrFloat(str);
			break;
		case INF:
			printSpecial(str);
			break;
		case _NAN:
			printSpecial(str);
			break;
		case ERR:
			std::cout << "Error: invalid input" << std::endl;
			break;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */