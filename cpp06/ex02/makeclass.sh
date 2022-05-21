
touch srcs/$1.cpp
touch incs/$1.hpp

echo -n "#ifndef " > incs/$1.hpp
echo -n $1 | tr '[a-z]' '[A-Z]' >> incs/$1.hpp
echo "_HPP" >> incs/$1.hpp
echo -n "# define " >> incs/$1.hpp
echo -n $1 | tr '[a-z]' '[A-Z]' >> incs/$1.hpp
echo "_HPP" >> incs/$1.hpp
echo "" >> incs/$1.hpp
echo "#include <string>" >> incs/$1.hpp
echo "" >> incs/$1.hpp
echo "class $1 {" >> incs/$1.hpp
echo "" >> incs/$1.hpp

echo "private:" >> incs/$1.hpp
echo "" >> incs/$1.hpp

echo "protected:" >> incs/$1.hpp
echo "" >> incs/$1.hpp

echo "public:" >> incs/$1.hpp
echo "" >> incs/$1.hpp
echo "	$1(void);" >> incs/$1.hpp
echo "	$1(const $1 &src);" >> incs/$1.hpp
echo "	~$1(void);" >> incs/$1.hpp

echo "" >> incs/$1.hpp
echo "	$1 & operator=(const $1 &rhs);" >> incs/$1.hpp
echo "" >> incs/$1.hpp

echo "};" >> incs/$1.hpp
echo "" >> incs/$1.hpp
echo "#endif" >> incs/$1.hpp





echo "#include \"$1.hpp\"" > srcs/$1.cpp
echo "" >> srcs/$1.cpp

echo "$1::$1(void);" >> srcs/$1.cpp
echo "{" >> srcs/$1.cpp
echo "	return ;" >> srcs/$1.cpp
echo "}" >> srcs/$1.cpp
echo "" >> srcs/$1.cpp

echo "$1::$1(const $1 &src);" >> srcs/$1.cpp
echo "{" >> srcs/$1.cpp
echo "	return ;" >> srcs/$1.cpp
echo "}" >> srcs/$1.cpp
echo "" >> srcs/$1.cpp

echo "$1::~$1(void);" >> srcs/$1.cpp
echo "{" >> srcs/$1.cpp
echo "	return ;" >> srcs/$1.cpp
echo "}" >> srcs/$1.cpp
echo "" >> srcs/$1.cpp

echo "$1 & $1::operator=(const $1 &rhs);" >> srcs/$1.cpp
echo "{" >> srcs/$1.cpp
echo "	return ;" >> srcs/$1.cpp
echo "}" >> srcs/$1.cpp
echo "" >> srcs/$1.cpp

