-- premake5.lua
workspace "CobaltCXX"
   configurations { "Debug", "Release" }
   platforms {"Linux", "MacOS", "Win64"}
   includedirs {"include"}

project "CobaltCXX"
   kind "StaticLib"
   language "C++"
   targetdir "bin/CobaltCXX/%{cfg.buildcfg}"

   files { "CobaltCXX/src/**.*" }
   files { "include/**.h" }

   libdirs { "libs" }

   links { "glfw3", "opengl32" }

   filter "configurations:Debug"
      defines { "DEBUG" }
      symbols "On"

   filter "configurations:Release"
      defines { "NDEBUG" }
      optimize "On"

project "Sandbox"
    kind "ConsoleApp"
    language "C++"
    targetdir "bin/Sandbox/%{cfg.buildcfg}"

    files { "Sandbox/src/**.*" }
    files { "include/**.h" }

    

    links { "CobaltCXX" }

    

    filter "platforms:Win64"
      defines { "CBLT_PLATFORM_WINDOWS" }
      optimize "On"

    filter "configurations:Debug"
      defines { "DEBUG" }
      symbols "On"

   filter "configurations:Release"
      defines { "NDEBUG" }
      optimize "On"


   


    