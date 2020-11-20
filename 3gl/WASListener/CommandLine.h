#pragma once
#include <optional>
#include <string>

#include "h3gl.h"

class CCommandLine
{
public:
	bool parse(LPSTR lpCommandLine);
	USTRING* getUnifaceCommandLine();
	USTRING* getUnifaceAsnFile();

private:
	void _setUnifaceCommandOptions(std::string const& admFolder, std::string const& iniFile);
	void _setUnifaceAsnFile(std::string const& asnFile);
	bool _initConsole();

private:
	std::string m_unifaceCommandOptions;
	std::string m_unifaceAsnFile;
	static std::optional<std::string> _convertToShortName(std::string const& path);

	FILE* _g_ic_file_cout_stream{nullptr};
	FILE* _g_ic_file_cin_stream{nullptr};
};