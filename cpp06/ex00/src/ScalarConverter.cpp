#include "ScalarConverter.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScalarConverter::ScalarConverter()
{
	std::cout << "Default constructor called!" << std::endl;
}

ScalarConverter::ScalarConverter( const ScalarConverter & src )
{
	std::cout << "Copy constructor called!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScalarConverter::~ScalarConverter()
{
	std::cout << "Destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScalarConverter &				ScalarConverter::operator=( ScalarConverter const & rhs )
{
	return *this;
}

static bool isChar(std::string str)
{
	 return str.length() == 3 && str[0] == '\'' && str[2] == '\'';
}
static bool isInt(std::string str)
{
	try
	{
        std::stoi(str); // no puede convertirlo salta al catch
        return str.find('.') == std::string::npos && // find devuelve no encontrado y es igual a npos por eso devuelve tre
               str.find('f') == std::string::npos;
    }
	catch (...)
	{
        return false;
    }
}

bool isFloat(const std::string &str)
{
    if (str == "nanf" || str == "inff" || str == "-inff")
        return true;
    if (str.empty() || str[str.length() - 1] != 'f')
        return false;
    try {
        std::stof(str);
        return true;
    } catch (...) {
        return false;
    }
}

bool isDouble(const std::string &str)
{
    try
    {
        std::stod(str);
        return true;
    }
    catch (...)
    {
        return false;
    }
}

void convertFromChar(char c) {
	std::cout << "char: ";
	if (std::isprint(c))
		std::cout << c << std::endl;
	else
		std::cout << "Non displayable" << std::endl;

	int intVal = static_cast<int>(c);
	std::cout << "int: " << intVal << std::endl;

	float floatVal = static_cast<float>(c);
	std::cout << "float: " << std::fixed << std::setprecision(1) 
				<< floatVal << "f" << std::endl;

	// A double
	double doubleVal = static_cast<double>(c);
	std::cout << "double: " << std::fixed << std::setprecision(1) 
				<< doubleVal << std::endl;
}

static void convert(const std::string &literal)
{
	 if (isChar(literal)) 
	{
        char c = literal[1];
        convertFromChar(c);
    }
    else if (isInt(literal))
	{
        try {
            int i = std::stoi(literal);
            convertFromInt(i);
        } catch (...) {
            printConversionError();
        }
    }
    else if (isFloat(literal))
	{
        try {
            float f = std::stof(literal);
            convertFromFloat(f);
        } catch (...) {
            printConversionError();
        }
    }
    else if (isDouble(literal))
	{
        try {
            double d = std::stod(literal);
            convertFromDouble(d);
        } catch (...) {
            printConversionError();
        }
    }
    else {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */