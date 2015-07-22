
#include <mosh/fcgi/request.hpp>
#include <mosh/fcgi/manager.hpp>

using namespace MOSH_FCGI;

class RenInstance : public FormRequest<wchar_t> {
public:
	bool response();
}