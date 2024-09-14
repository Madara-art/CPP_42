C_FILES=Account.cpp tests.cpp 
O_FILES=$(C_FILES:%cpp=%o)
Name=LOGS
CXXFLAGS=-Wall -Wextra -Werror -std=c++98 -fsanitize=address
CXX=c++

all: $(Name)

$(Name):$(O_FILES)
	$(CXX) $(CXXFLAGS) $(O_FILES) -o $(Name) 

clean:
	rm -rf $(O_FILES)

fclean: clean
	rm -rf $(Name)

re: fclean all