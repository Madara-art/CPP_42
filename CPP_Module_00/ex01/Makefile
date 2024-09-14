C_FILES=Contact.cpp PhoneBook.cpp main.cpp 
O_FILES=$(C_FILES:%cpp=%o)
Name=PhoneBook
CXXFLAGS=-Wall -Wextra -Werror -std=c++98
CXX=c++

all: $(Name)

$(Name):$(O_FILES)
	$(CXX) $(CXXFLAGS) $(O_FILES) -o $(Name) 

clean:
	rm -rf $(O_FILES)

fclean: clean
	rm -rf $(Name)

re: fclean all