 #include <iostream>
 #include <fstream>
 #include <sstream>

int ft_error(const std::string err)
{
	std::cerr << "Error: " << err << std::endl;
	return (1);
}

void ft_replace(std::string &line, const std::string from, const std::string to)
{
	size_t start_pos = 0;
	while ((start_pos = line.find(from, start_pos)) != std::string::npos)
	{
		line.erase(start_pos, from.length());
		line.insert(start_pos, to);
		start_pos += to.length();
	}
}

int ft_output(const std::string file_name, const std::stringstream &replaced)
{
	std::string file_extension = ".replace";
	std::string file_output_name = file_name + file_extension;
	std::ofstream ofs(file_output_name);

	if (ofs.fail())
		return (1);
	ofs << replaced.str();
	return (0);
}



int main(int argc, char *argv[])
{
	if (argc != 4)
		return (ft_error("Wrong amount of arguments"));
	if (*argv[2] == '\0')
		return ft_error("Second argument can't to be empy.");

	std::string line;
	std::stringstream replaced;
	std::ifstream ifs(argv[1]);
	if (ifs.fail())
		return (ft_error("Failed to open file"));
	while(std::getline(ifs, line))
	{
		ft_replace(line, argv[2], argv[3]);
		replaced << line << std::endl;
	}
	if (ft_output(argv[1], replaced))
		return (ft_error("Failed to open file"));
	return (0);
}
