// #include <iostream>
// #include <UserModule_mysql.h>

#include "Config.h"
#include "Argument.h"

int main(int argc, char *argv[]) {
  // authentification test
  //   UserModule_mysql *userModule = UserModule_mysql::getInstance();
  //   std::cout << "Database Connection status : "<< userModule->_status << std::endl;
  //   std::cout << "Login check status : " << userModule->Authentification("dude", "12345678") << std::endl;

  // Config & Arguments test
  Config *conf = new Config("config.yaml", argc, argv);

  //  Argument *args = new Argument(argc, argv);
  return 0;
}
