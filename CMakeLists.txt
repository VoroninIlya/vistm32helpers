
get_property(tmp GLOBAL PROPERTY sources_list)
set(tmp "${tmp}\
${CMAKE_CURRENT_SOURCE_DIR}/stm32flash/vistm32flash.c;\
${CMAKE_CURRENT_SOURCE_DIR}/stm32button/vistm32button.c;")
set_property(GLOBAL PROPERTY sources_list "${tmp}")

get_property(tmp GLOBAL PROPERTY include_paths_list)
set(tmp "${tmp}\
${CMAKE_CURRENT_SOURCE_DIR}/stm32flash;\
${CMAKE_CURRENT_SOURCE_DIR}/stm32button;")
set_property(GLOBAL PROPERTY include_paths_list "${tmp}")