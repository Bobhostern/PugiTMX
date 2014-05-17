solution "PugiTMX"
	location "build"
	configurations { "Debug", "Release" }
	
	configuration  "Debug"
		flags { "Symbols" }
		defines "DEBUG"

	configuration "Release"
		flags { "Optimize" }
		defines "NDEBUG"

	project "pugitmx"
		kind "SharedLib"
		language "C++"
		files "*.cpp"