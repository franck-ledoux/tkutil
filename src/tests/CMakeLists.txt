include (${CMAKE_SOURCE_DIR}/cmake/version.cmake)
include (${CMAKE_SOURCE_DIR}/cmake/common.cmake)
include (${CMAKE_SOURCE_DIR}/cmake/workarounds.cmake)

set (ALL_EXECUTABLES
   ansi_esc_codes canceled_threads conversions date exceptions
   fileExtractor fileinfos fileopts hostinfos joinable locale
   logs memory modify_script remoteProcess removefile script_tags
   scripting_logs thread_manager thread_pool timer tmpfile
   unicode urlfifo user_representation userinfos utf8 utf8chars
   )

foreach (exe ${ALL_EXECUTABLES})
   add_executable (${exe} ${exe}.cpp)
   target_include_directories (${exe} PRIVATE ../TkUtil/public)
   target_link_libraries (${exe} PUBLIC TkUtil)
# INSTALL_RPATH modifie le rpath pour les libs internes au projet :
	set_target_properties (${exe} PROPERTIES 
		INSTALL_RPATH_USE_LINK_PATH 1
		INSTALL_RPATH ${CMAKE_PACKAGE_RPATH_DIR})
endforeach (exe)


