
#include <ren-cpp/runtime.hpp>
#include "RenInstance.cpp"

using namespace MOSH_FCGI;

int main(int argc, char *argv[]){
    
    //Set up fcgi
    try {
		// First we make a MOSH_FCGI::Manager object, with our request handling class
		// as a template parameter.
		MOSH_FCGI::ManagerT<RenInstance> fcgi;
		// Now just call the object handler function. It will sleep quietly when there
		// are no requests and efficiently manage them when there are many.
		fcgi.handler();
	} catch (std::exception& e) {
		//error_log(e.what());
	}

    return 0;
}