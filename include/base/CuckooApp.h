#ifndef CUCKOOAPP_H
#define CUCKOOAPP_H

#include "MooseApp.h"

class CuckooApp;

template<>
InputParameters validParams<CuckooApp>();

class CuckooApp : public MooseApp
{
public:
  CuckooApp(InputParameters parameters);
  virtual ~CuckooApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);


private:
  void registerMooseObjects(Factory & factory);
};

#endif /* CUCKOOAPP_H */
