idf_component_register(SRCS "http_request_example_main.c"
                    INCLUDE_DIRS ".")
idf_component_register(
  SRCS "main.c" "../jsonParser/jsonParser.c"
  INCLUDE_DIRS "." "../jsonParser"
)
