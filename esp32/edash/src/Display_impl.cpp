// doing it becuase of this https://isocpp.org/wiki/faq/templates#templates-defn-vs-decl

// god help me
#include "Display.cpp" 
#include <GxEPD2_3C.h>

template class Dashboard_NS::Display<GxEPD2_3C<GxEPD2_750c, GxEPD2_750c::HEIGHT>>;