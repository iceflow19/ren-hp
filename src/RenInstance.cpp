#include <fstream>
#include <algorithm>
#include <string>
#include <sstream>

extern "C" {
#include <unistd.h>
}

#include <mosh/fcgi/bits/t_string.hpp>
#include <mosh/fcgi/http/form.hpp>
#include <mosh/fcgi/http/header.hpp>
#include <mosh/fcgi/http/misc.hpp>
#include <mosh/fcgi/html/element.hpp>
#include <mosh/fcgi/html/element/ws.hpp>
#include <mosh/fcgi/html/element/s.hpp>
#include <mosh/fcgi/bits/namespace.hpp>
#include "RenInstance.cpp"

bool RenInstance::response() {

	//Set up Ren-cpp instance to manage incoming page request.

	//Typically return true
	return true;
}