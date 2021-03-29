-- premake5.lua
workspace "CobaltCXX"
   configurations { "Debug", "Release" }

project "CobaltCXX"
   kind "StaticLib"
   language "C++"
   targetdir "bin/CobaltCXX/%{cfg.buildcfg}"

   files { "CobaltCXX/src/**.*" }
   files { "include/**.h" }

   includedirs {"include"}

   libdirs { "libs" }

   links { "glfw3" }

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

    includedirs {"include"}

    filter "configurations:Debug"
      defines { "DEBUG" }
      symbols "On"

   filter "configurations:Release"
      defines { "NDEBUG" }
      optimize "On"

    