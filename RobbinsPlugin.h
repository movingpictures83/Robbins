#ifndef ROBBINSPLUGIN_H
#define ROBBINSPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class RobbinsPlugin : public Plugin
{
public: 
 std::string toString() {return "Robbins";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
